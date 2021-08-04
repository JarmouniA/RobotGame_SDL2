#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void Game_Over(){
    // check for events
    while (SDL_PollEvent(&Event)){
        // Re-create when window has been resized
        if ((Event.type == SDL_WINDOWEVENT) && (Event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED)){
            ResizeWindow();
            // GameOver's texture creating
            GameOver = IMG_LoadTexture(renderer, "./Images/Game_over.png");
            if( GameOver == NULL ){
                printf("Unable to load Game_over image! SDL_image Error: %s\n", IMG_GetError());
            }
            printf("Window resized\n");
        }

        // Closing the program
        if (Event.type == SDL_QUIT){
            keep_window_open = SDL_FALSE;
            return;
        }
        if (Event.type == SDL_KEYDOWN){
            switch (Event.key.keysym.sym){
            // Closing the program
            case SDLK_n:
                keep_window_open = SDL_FALSE;
                return;
            case SDLK_y:
                replay = SDL_TRUE;
                play = SDL_TRUE;
                break;
            default:
                keep_window_open = SDL_FALSE;
                return;
            }
        }
    }
    // Play's shape creating
    if (GameOver != NULL){
        // Recalculate the position of the shape each time following the size of the window
        Play_Rect.x = 0; Play_Rect.y = 0;
        // Recalculate the size of the shape each time following the size of the window
        Play_Rect.w = screenWidth; Play_Rect.h = screenHeight;
        // Let's Play rendering
        SDL_RenderCopy(renderer, GameOver, NULL, &Play_Rect);
        //Update screen
        SDL_RenderPresent(renderer);
        //Update the drawing image on window screen
        SDL_UpdateWindowSurface(window);
    }
}
