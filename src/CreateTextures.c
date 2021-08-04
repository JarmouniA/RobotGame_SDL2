#include "..\include\common.h"
#include "..\include\Define.h"

void CreateTextures(){
    // Background's texture creating
    Background = IMG_LoadTexture(renderer, "./Images/Robot2.png");
    if( Background == NULL ){
        printf("Unable to load Robot2 image! SDL_image Error: %s\n", IMG_GetError());
    }

    // Robot's texture creating
    Robot = IMG_LoadTexture(renderer, "./Images/Robot1.png");
    if( Robot == NULL ){
        printf("Unable to load Robot image! SDL_image Error: %s\n", IMG_GetError());
    }

    // Circle's texture creating
    Circle = IMG_LoadTexture(renderer, "./Images/BlueCircle.png");
    if( Circle == NULL ){
        printf("Unable to load circle image! SDL_image Error: %s\n", IMG_GetError());
    }

    // Rectangle's texture creating
    Rectangle = IMG_LoadTexture(renderer, "./Images/OrangeRect.png");
    if( Rectangle == NULL ){
        printf("Unable to load rectangle image! SDL_image Error: %s\n",IMG_GetError());
    }

    // Square's texture creating
    Square = IMG_LoadTexture(renderer, "./Images/YellowSquare.png");
    if( Square == NULL ){
        printf("Unable to load square image! SDL_image Error: %s\n",IMG_GetError());
    }

    // Zone1's texture creating
    Zone1 = IMG_LoadTexture(renderer, "./Images/Zone1.png");
    if( Zone1 == NULL ){
        printf("Unable to load zone1 image! SDL_image Error: %s\n",IMG_GetError());
    }

    // Zone2's texture creating
    Zone2 = IMG_LoadTexture(renderer, "./Images/Zone2.png");
    if( Zone2 == NULL ){
        printf("Unable to load zone2 image! SDL_image Error: %s\n",IMG_GetError());
    }
}
