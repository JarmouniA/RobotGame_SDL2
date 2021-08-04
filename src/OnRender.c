#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void OnRender(int Angle){
    SDL_Point Rcenter;
    Rcenter.x = (RobotRect.w)/2; Rcenter.y = (RobotRect.h)/2;
    // Robot rendering
    SDL_RenderCopyEx(renderer, Robot, NULL, &RobotRect, Angle, &Rcenter, SDL_FLIP_NONE);
    // Circle rendering
    for (int i = 0; i < Shapes[0]; i++){
        switch (i){
        case 0:
            SDL_RenderCopy(renderer, Circle, NULL, &ClRect1);
            ClRect1C = &ClRect1;
            break;
        case 1:
            SDL_RenderCopy(renderer, Circle, NULL, &ClRect2);
            ClRect2C = &ClRect2;
            break;
        case 2:
            SDL_RenderCopy(renderer, Circle, NULL, &ClRect3);
            ClRect3C = &ClRect3;
            break;
        case 3:
            SDL_RenderCopy(renderer, Circle, NULL, &ClRect4);
            ClRect4C = &ClRect4;
            break;
        case 4:
            SDL_RenderCopy(renderer, Circle, NULL, &ClRect5);
            ClRect5C = &ClRect5;
            break;
        case 5:
            SDL_RenderCopy(renderer, Circle, NULL, &ClRect6);
            ClRect6C = &ClRect6;
            break;
        }
    }
    // Rectangle rendering
    for (int i = 0; i < Shapes[1]; i++){
        switch (i){
        case 0:
            SDL_RenderCopy(renderer, Rectangle, NULL,&RtRect1);
            RtRect1C = &RtRect1;
            break;
        case 1:
            SDL_RenderCopy(renderer, Rectangle, NULL, &RtRect2);
            RtRect2C = &RtRect2;
            break;
        case 2:
            SDL_RenderCopy(renderer, Rectangle,NULL, &RtRect3);
            RtRect3C = &RtRect3;
            break;
        case 3:
            SDL_RenderCopy(renderer, Rectangle, NULL, &RtRect4);
            RtRect4C = &RtRect4;
            break;
        case 4:
            SDL_RenderCopy(renderer, Rectangle, NULL, &RtRect5);
            RtRect5C = &RtRect5;
            break;
        case 5:
            SDL_RenderCopy(renderer, Rectangle, NULL, &RtRect6);
            RtRect6C = &RtRect6;
            break;
        }
    }
    // Square rendering
    for (int i = 0; i < Shapes[2]; i++){
        switch (i){
        case 0:
            SDL_RenderCopy(renderer, Square, NULL, &SqRect1);
            SqRect1C = &SqRect1;
            break;
        case 1:
            SDL_RenderCopy(renderer, Square, NULL, &SqRect2);
            SqRect2C = &SqRect2;
            break;
        case 2:
            SDL_RenderCopy(renderer, Square, NULL, &SqRect3);
            SqRect3C = &SqRect3;
            break;
        case 3:
            SDL_RenderCopy(renderer, Square, NULL, &SqRect4);
            SqRect4C = &SqRect4;
            break;
        case 4:
            SDL_RenderCopy(renderer, Square, NULL, &SqRect5);
            SqRect5C = &SqRect5;
            break;
        case 5:
            SDL_RenderCopy(renderer, Square, NULL, &SqRect6);
            SqRect6C = &SqRect6;
            break;
        }
    }
    // Zone1, Zone2 rendering
    SDL_RenderCopy(renderer, Zone1, NULL, &Zone1_rect);
    SDL_RenderCopy(renderer, Zone2, NULL, &Zone2_rect);
    //Update screen
    SDL_RenderPresent(renderer);
}
