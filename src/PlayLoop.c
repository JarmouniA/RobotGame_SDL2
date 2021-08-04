#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void PlayLoop(){
    // check for events
    while (SDL_PollEvent(&Event)){
        // Re-create when window has been resized
        if ((Event.type == SDL_WINDOWEVENT) && (Event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED)){
            ResizeWindow();
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
            case SDLK_ESCAPE:
                keep_window_open = SDL_FALSE;
                return;
            default:
                play = SDL_TRUE;
                break;
            }
        }
    }
    // Play's shape creating
    if (Lets_Play != NULL){
        // Recalculate the position of the shape each time following the size of the window
        Play_Rect.x = 0; Play_Rect.y = 0;
        // Recalculate the size of the shape each time following the size of the window
        Play_Rect.w = screenWidth; Play_Rect.h = screenHeight;
        // Let's Play rendering
        SDL_RenderCopy(renderer, Lets_Play, NULL, &Play_Rect);
        //Update screen
        SDL_RenderPresent(renderer);
        //Update the drawing image on window screen
        SDL_UpdateWindowSurface(window);
    }
}
