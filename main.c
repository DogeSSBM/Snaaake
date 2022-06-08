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

        if(keyPressed(SDL_SCANCODE_UP)){
            facing = DIR_U;
        }

        if(keyPressed(SDL_SCANCODE_RIGHT)){
            facing = DIR_R;
        }

        if(keyPressed(SDL_SCANCODE_DOWN)){
            facing = DIR_D;
        }

        if(keyPressed(SDL_SCANCODE_LEFT)){
            facing = DIR_L;
        }

        pos = coordShift(pos, facing, 1);
        fillSquareCoord(pos, scale);

        frameEnd(t);
    }
    return 0;
}
