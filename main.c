#include "Includes.h"

int main()
{
    const uint scale = 64;
    Length window = {800, 600};
    setWindowLen(window);
    init();

    setColor(PINK);
    Coord pos = coordOffset(getWindowMid(), coordDiv(iC(scale,scale), -2));
    Direction facing = DIR_R;
    Direction dirkey[4] = {SDL_SCANCODE_UP, SDL_SCANCODE_RIGHT, SDL_SCANCODE_DOWN, SDL_SCANCODE_LEFT};

    while(true){
        Ticks t = frameStart();

        for(uint i = 0; i < 4; i++)
            facing = keyPressed(dirkey[i]) ? i : facing;

        pos = coordShift(pos, facing, 1);
        fillSquareCoord(pos, scale);

        frameEnd(t);
    }
    return 0;
}
