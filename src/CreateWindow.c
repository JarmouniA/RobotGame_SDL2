#include "..\include\common.h"
#include "..\include\Define.h"

void CreateWindow(){
    //Create window and renderer for given surface
    window = SDL_CreateWindow("Intelligent Robot", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              screenWidth, screenHeight, SDL_WINDOW_RESIZABLE);
    //window creation error test
    if(!window){
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Window creation fail : %s\n",SDL_GetError());
        exit(EXIT_FAILURE);
    }
    // window surface
    surface = SDL_GetWindowSurface(window);
    //SDL Renderer
    renderer = SDL_CreateSoftwareRenderer(surface);
    //Renderer creation error test
    if(!renderer){
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Render creation for surface fail : %s\n",SDL_GetError());
        exit(EXIT_FAILURE);
    }
    //Update the drawing image on window screen
    SDL_UpdateWindowSurface(window);
}
