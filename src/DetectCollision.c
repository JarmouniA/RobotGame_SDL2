#include "..\include\common.h"
#include "..\include\Define.h"

int DetectCollision(double Plus_x, double Plus_y){
    SDL_Rect *RobotRectC;
    MALLOC(RobotRectC, 1, SDL_Rect);
    RobotRectC->x = RobotRect.x + Plus_x * screenWidth;
    RobotRectC->y = RobotRect.y + Plus_y * screenHeight;
    RobotRectC->w = RobotRect.w;
    RobotRectC->h = RobotRect.h;
    int result = SDL_FALSE;
    check = 0;
    // Squares detection
    if (SDL_HasIntersection(RobotRectC, SqRect1C)){
        result = SDL_TRUE;
        check = 4;
    }
    if (SDL_HasIntersection(RobotRectC, SqRect2C)){
        result = SDL_TRUE;
        check = 4;
    }
    if (SDL_HasIntersection(RobotRectC, SqRect3C)){
        result = SDL_TRUE;
        check = 4;
    }
    if (SDL_HasIntersection(RobotRectC, SqRect4C)){
        result = SDL_TRUE;
        check = 4;
    }
    if (SDL_HasIntersection(RobotRectC, SqRect5C)){
        result = SDL_TRUE;
        check = 4;
    }
    if (SDL_HasIntersection(RobotRectC, SqRect6C)){
        result = SDL_TRUE;
        check = 4;
    }
    // Rectangles detection
    if (SDL_HasIntersection(RobotRectC, RtRect1C)){
        result = SDL_TRUE;
        check = 3;
    }
    if (SDL_HasIntersection(RobotRectC, RtRect2C)){
        result = SDL_TRUE;
        check = 3;
    }
    if (SDL_HasIntersection(RobotRectC, RtRect3C)){
        result = SDL_TRUE;
        check = 3;
    }
    if (SDL_HasIntersection(RobotRectC, RtRect4C)){
        result = SDL_TRUE;
        check = 3;
    }
    if (SDL_HasIntersection(RobotRectC, RtRect5C)){
        result = SDL_TRUE;
        check = 3;
    }
    if (SDL_HasIntersection(RobotRectC, RtRect6C)){
        result = SDL_TRUE;
        check = 3;
    }
    //Circles detection
    if (SDL_HasIntersection(RobotRectC, ClRect1C)){
        result = SDL_TRUE;
        check = 21;
    }
    if (SDL_HasIntersection(RobotRectC, ClRect2C)){
        result = SDL_TRUE;
        check = 22;
    }
    if (SDL_HasIntersection(RobotRectC, ClRect3C)){
        result = SDL_TRUE;
        check = 23;
    }
    if (SDL_HasIntersection(RobotRectC, ClRect4C)){
        result = SDL_TRUE;
        check = 24;
    }
    if (SDL_HasIntersection(RobotRectC, ClRect5C)){
        result = SDL_TRUE;
        check = 25;
    }
    if (SDL_HasIntersection(RobotRectC, ClRect6C)){
        result = SDL_TRUE;
        check = 26;
    }
    // Zone 1 & 2 detection
    if (SDL_HasIntersection(RobotRectC, Zone1_rectC))
        result = SDL_TRUE;
    if (SDL_HasIntersection(RobotRectC, Zone2_rectC))
        result = SDL_TRUE;
    if (!SDL_HasIntersection(RobotRectC, Screen_RectC))
        result = SDL_TRUE;
    return result;
}
