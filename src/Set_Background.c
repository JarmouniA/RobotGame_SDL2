#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void Set_Background(){
    // Background's shape creating
    if (Background != NULL){
        // Recalculate the position of the shape each time following the size of the window
        Play_Rect.x = 0; Play_Rect.y = 0;
        // Recalculate the size of the shape each time following the size of the window
        Play_Rect.w = screenWidth; Play_Rect.h = screenHeight;
        // Let's Play rendering
        SDL_RenderCopy(renderer, Background, NULL, &Play_Rect);
        //Update screen
        SDL_RenderPresent(renderer);
    }
}
