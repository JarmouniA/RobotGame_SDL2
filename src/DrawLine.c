#include "..\include\common.h"
#include "..\include\Define.h"

void DrawLine(){
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
    int X, Y;
    //Draw vertical lines of dots
    for (int i = 0; i < V_Steps; i++){
        X = (V_PointsToDraw[0][i] * screenWidth) + RobotRect.w/2;
        Y = (V_PointsToDraw[1][i] * screenHeight) + RobotRect.h/2;
        SDL_RenderDrawPoint(renderer, X, Y);
        SDL_RenderDrawPoint(renderer, X+1, Y+1);
        SDL_RenderDrawPoint(renderer, X+2, Y+2);
        SDL_RenderDrawPoint(renderer, X+3, Y+3);
        SDL_RenderDrawPoint(renderer, X+4, Y+4);
        SDL_RenderDrawPoint(renderer, X+5, Y+5);
        SDL_RenderDrawPoint(renderer, X+6, Y+6);
    }
    //Draw horizontal lines of dots
    for (int i = 0; i < H_Steps; i++){
        X = (H_PointsToDraw[0][i] * screenWidth) + RobotRect.w/2;
        Y = (H_PointsToDraw[1][i] * screenHeight) + RobotRect.h/2;
        SDL_RenderDrawPoint(renderer, X, Y);
        SDL_RenderDrawPoint(renderer, X+1, Y+1);
        SDL_RenderDrawPoint(renderer, X+2, Y+2);
        SDL_RenderDrawPoint(renderer, X+3, Y+3);
        SDL_RenderDrawPoint(renderer, X+4, Y+4);
        SDL_RenderDrawPoint(renderer, X+5, Y+5);
        SDL_RenderDrawPoint(renderer, X+6, Y+6);
    }

    //Update screen
    SDL_RenderPresent(renderer);
}
