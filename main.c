#include "Includes.h"

int main()
{
    Length window = {800, 600};
    init();
    setWindowLen(window);

    setColor(PINK);
    Coord pos = coordOffset(getWindowMid(), iC(-64,-64));

    while(true){
        Ticks t = frameStart();

        fillSquareCoord(pos, 128);

        frameEnd(t);
    }
    return 0;
}
