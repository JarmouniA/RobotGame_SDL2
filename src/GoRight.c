#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void GoRight(){
    if (!DetectCollision(STEP, 0.0)){
        Set_Background();

        Rox = Rox + STEP;
        LoadContent();
        Flip_Angle = -90;
        OnRender(Flip_Angle);
        //Update the drawing image on window screen
        SDL_UpdateWindowSurface(window);
        if (drawing){
            H_Steps += 1;
            REALLOC(H_PointsToDraw[0], H_Steps, float);
            REALLOC(H_PointsToDraw[1], H_Steps, float);
            H_PointsToDraw[0][H_Steps-1] = Rox;
            H_PointsToDraw[1][H_Steps-1] = Roy;
        }
    }
}
