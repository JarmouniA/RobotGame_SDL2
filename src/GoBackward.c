#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void GoBackward(){
    if (!DetectCollision(0.0, STEP)){
        Set_Background();

        Roy = Roy + STEP;
        LoadContent();
        Flip_Angle = 0;
        OnRender(Flip_Angle);
        //Update the drawing image on window screen
        SDL_UpdateWindowSurface(window);
        if (drawing){
            V_Steps += 1;
            REALLOC(V_PointsToDraw[0], V_Steps, float);
            REALLOC(V_PointsToDraw[1], V_Steps, float);
            V_PointsToDraw[0][V_Steps-1] = Rox;
            V_PointsToDraw[1][V_Steps-1] = Roy;
        }
    }
}
