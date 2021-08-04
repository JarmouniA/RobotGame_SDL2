#include "..\include\common.h"
#include "..\include\Define.h"

void Init_Glob_Var(){
    // Defining a rectangle pointer for each SDL_rectangle
    Zone1_rectC = &Zone1_rect; Zone2_rectC = &Zone2_rect;
    Screen_RectC = &Screen_Rect;

    check = -1; // Collision initial value
    drawing = SDL_FALSE; // Line drawing initial value

    delta = (1/60)+0.05; //delay time
    Flip_Angle = 0; //Flipping angle of robot
    Rox = X0_R; Roy = Y0_R; // robot initial position

    // Memory allocation
    CALLOC(Move, 6, int);
    CALLOC(Shapes, 3, int);
    MALLOC(Position, 6, double);

    Position[0] = 0.14; Position[1] = 0.25; Position[2] = 0.385;
    Position[3] = 0.52; Position[4] = 0.66; Position[5] = 0.77;
    // Zone 1 initial positions
    C1x = Position[0]; C1y = Y0_C;
    C2x = Position[1]; C2y = Y0_C;
    C3x = Position[2]; C3y = Y0_C;
    C4x = Position[3]; C4y = Y0_C;
    C5x = Position[4]; C5y = Y0_C;
    C6x = Position[5]; C6y = Y0_C;
}
