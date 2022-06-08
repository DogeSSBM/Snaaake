#include "Includes.h"

int main()
{
    const uint scale = 64;
    Direction facing = DIR_R;
    Length window = {800, 600};
    setWindowLen(window);
    init();

    setColor(PINK);
    Coord pos = coordOffset(getWindowMid(), coordDiv(iC(scale,scale), -2));

    while(true){
        Ticks t = frameStart();

        pos = coordShift(pos, facing, 1);
        fillSquareCoord(pos, scale);

        frameEnd(t);
    }
    return 0;
}
