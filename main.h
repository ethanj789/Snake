#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
struct snakeSection {
    int row;
    int col;
};
struct snake {
    int length;
    // 0 = right
    // 1 = dpwmn
    //2 = left
    //3 = up
    int headlocation;
    int taillocation;
    struct snakeSection sections[35];
};
struct apple {
    int row;
    int col;
};
struct apples {
    int count;
    struct apple apples[5];
};

#endif
