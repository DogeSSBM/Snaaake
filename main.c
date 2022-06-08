#include "Includes.h"

int main()
{
    const uint scale = 64;
    Length window = {800, 600};
    init();
    setWindowLen(window);

    setColor(PINK);
    Coord pos = coordOffset(getWindowMid(), iC(-scale/2,-scale/2));

    while(true){
        Ticks t = frameStart();

        pos.x = pos.x+1;
        fillSquareCoord(pos, scale);

        frameEnd(t);
    }
    return 0;
}
