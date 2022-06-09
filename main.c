#include "Includes.h"

#define GLEN    32
#define SCALE   24

/*
grid
apples
growwwwww uwu
colision
win/loose states
???
add netcode
?????????
????????????????????????
profit uwu
uwu
uwu
uwu
uwu
uwu
uw
uwu
uwu
uwu
uwu
uwu
uwu
uwu
uwu
profit
*/


int main()
{
    Length window = coordMul(iC(GLEN, GLEN), SCALE);
    setWindowLen(window);
    init();

    setColor(PINK);
    Coord pos = coordOffset(getWindowMid(), coordDiv(iC(SCALE,SCALE), -2));
    Direction facing = DIR_R;
    Direction dirkey[4] = {SDL_SCANCODE_UP, SDL_SCANCODE_RIGHT, SDL_SCANCODE_DOWN, SDL_SCANCODE_LEFT};

    Direction grid[GLEN][GLEN];

    while(true){
        Ticks t = frameStart();

        for(uint y = 0; y < GLEN; y++){
            for(uint x = 0; x < GLEN; x++){
                fillBorderCoordSquare()
            }
        }

        for(uint i = 0; i < 4; i++)
            facing = keyPressed(dirkey[i]) ? i : facing;

        pos = coordShift(pos, facing, 1);
        fillSquareCoord(pos, SCALE);

        frameEnd(t);
    }
    return 0;
}
