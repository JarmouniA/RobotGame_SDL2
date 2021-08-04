#include "..\include\common.h"
#include "..\include\Define.h"

void Cleanup(){
    free(H_PointsToDraw);
    free(V_PointsToDraw);
    free(Shapes);
    free(Move);
    free(Position);
    ClRect1C=NULL; ClRect2C=NULL; ClRect3C=NULL; ClRect4C=NULL; ClRect5C=NULL; ClRect6C=NULL;
    RtRect1C=NULL; RtRect2C=NULL; RtRect3C=NULL; RtRect4C=NULL; RtRect5C=NULL; RtRect6C=NULL;
    SqRect1C=NULL; SqRect2C=NULL; SqRect3C=NULL; SqRect4C=NULL; SqRect5C=NULL; SqRect6C=NULL;
    SDL_DestroyTexture(Lets_Play);
    SDL_DestroyTexture(Background);
    SDL_DestroyTexture(GameOver);
    SDL_DestroyTexture(Robot);
    SDL_DestroyTexture(Circle);
    SDL_DestroyTexture(Square);
    SDL_DestroyTexture(Rectangle);
    SDL_DestroyTexture(Zone1);
    SDL_DestroyTexture(Zone2);
}
