#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void CheckCircle(){
    if ((DetectCollision(0.0, -STEP))||DetectCollision(0.0, STEP)){
        // Circles case
        if (check == 21||check == 22||check == 23||check == 24||check == 25||check == 26)
            SDL_Log("CIRCLE is found\n");
        //Rectangles case
        if (check == 3)
            SDL_Log("RECTANGLE is found\n");
        //Squares case
        if (check == 4)
            SDL_Log("SQUARE is found\n");
    }
}
