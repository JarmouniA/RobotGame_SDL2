#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <time.h>

    #include <SDL.h>
    #include <SDL_image.h>

    int screenWidth, screenHeight; //window dimensions
    int *Shapes, *Move, H_Steps, V_Steps;
    float **H_PointsToDraw, **V_PointsToDraw;

    double *Position;
    double delta; // Delay time
    int Flip_Angle;
    int check;

    float Rox, Roy, C1x, C1y, C2x, C2y, C3x, C3y, C4x, C4y, C5x, C5y, C6x, C6y;

    SDL_bool play, replay, keep_window_open, drawing;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Surface *surface;
    SDL_Texture *Lets_Play, *Background, *GameOver, *Robot, *Square, *Rectangle, *Circle, *Zone1, *Zone2;
    SDL_Event Event;
    SDL_Rect Play_Rect, Screen_Rect, RobotRect,
                SqRect1, SqRect2, SqRect3, SqRect4, SqRect5, SqRect6,
                RtRect1, RtRect2, RtRect3, RtRect4, RtRect5, RtRect6,
                ClRect1, ClRect2, ClRect3, ClRect4, ClRect5, ClRect6,
                Zone1_rect, Zone2_rect;
    // SDL rectangles pointers to check for collisions: DetectCollision()
    SDL_Rect *Screen_RectC, *RobotRectC,
                *SqRect1C, *SqRect2C, *SqRect3C, *SqRect4C, *SqRect5C, *SqRect6C,
                *RtRect1C, *RtRect2C, *RtRect3C, *RtRect4C, *RtRect5C, *RtRect6C,
                *ClRect1C, *ClRect2C, *ClRect3C, *ClRect4C, *ClRect5C, *ClRect6C,
                *Zone1_rectC, *Zone2_rectC;

#endif // COMMON_H_INCLUDED
