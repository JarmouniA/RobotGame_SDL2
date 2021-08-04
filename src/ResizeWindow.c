#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void ResizeWindow(){
    SDL_DestroyRenderer(renderer);

    // Re-create surface
    surface = SDL_GetWindowSurface(window);
    renderer = SDL_CreateSoftwareRenderer(surface);

    //handle screen resize
    SDL_GetRendererOutputSize(renderer, &screenWidth, &screenHeight);
    //Update screen
    SDL_RenderPresent(renderer);
}
