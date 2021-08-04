#include "..\include\common.h"
#include "..\include\Define.h"

// Calculating shapes parameters

void LoadContent(){
    int w = 0, h = 0, numbre = 0;

    // Robot's shape creating
    if (Robot != NULL){
        SDL_QueryTexture(Robot, NULL, NULL, &w, &h);
        // Recalculate the position of the shape each time following the size of the window
        float robot_x, robot_y;
        robot_x = screenWidth * Rox; robot_y = screenHeight * Roy;
        RobotRect.x = robot_x; RobotRect.y = robot_y;
        // Recalculate the size of the shape each time following the size of the window
        int Robot_W = w*screenWidth/(9*WIDTH);
        int Robot_H = h*screenHeight/(9*HEIGHT);
        RobotRect.w = Robot_W; RobotRect.h = Robot_H;
    }
    // Circles shapes creating (0)
    if (Circle != NULL){
        SDL_QueryTexture(Circle, NULL, NULL, &w, &h);
        // Recalculate the size of the shape each time following the size of the window
        int Circle_W = w*screenWidth/(35*WIDTH);
        int Circle_H = h*screenHeight/(35*HEIGHT);
        float Cl_x, Cl_y;
        for (int i = 0; i < Shapes[0]; i++){
            switch (i){
            case 0:
                //Circle 1
                Cl_x = screenWidth * C1x; Cl_y = screenHeight * C1y;
                ClRect1.x = Cl_x; ClRect1.y = Cl_y;
                ClRect1.w = Circle_W; ClRect1.h = Circle_H;
                numbre++;
                break;
            case 1:
                //Circle 2
                Cl_x = screenWidth * C2x; Cl_y = screenHeight * C2y;
                ClRect2.x = Cl_x; ClRect2.y = Cl_y;
                ClRect2.w = Circle_W; ClRect2.h = Circle_H;
                numbre++;
                break;
            case 2:
                //Circle 3
                Cl_x = screenWidth * C3x; Cl_y = screenHeight * C3y;
                ClRect3.x = Cl_x; ClRect3.y = Cl_y;
                ClRect3.w = Circle_W; ClRect3.h = Circle_H;
                numbre++;
                break;
            case 3:
                //Circle 4
                Cl_x = screenWidth * C4x; Cl_y = screenHeight * C4y;
                ClRect4.x = Cl_x; ClRect4.y = Cl_y;
                ClRect4.w = Circle_W; ClRect4.h = Circle_H;
                numbre++;
                break;
            case 4:
                //Circle 5
                Cl_x = screenWidth * C5x; Cl_y = screenHeight * C5y;
                ClRect5.x = Cl_x; ClRect5.y = Cl_y;
                ClRect5.w = Circle_W; ClRect5.h = Circle_H;
                numbre++;
                break;
            case 5:
                //Circle 6
                Cl_x = screenWidth * C6x; Cl_y = screenHeight * C6y;
                ClRect6.x = Cl_x; ClRect6.y = Cl_y;
                ClRect6.w = Circle_W; ClRect6.h = Circle_H;
                break;
            }
        }
    }

    // Rectangles shapes creating (1)
    if (Rectangle != NULL){
        SDL_QueryTexture(Rectangle, NULL, NULL, &w, &h);
        // Recalculate the size of the shape each time following the size of the window
        int Rect_W = w*screenWidth/(5.5*WIDTH);
        int Rect_H = h*screenHeight/(6*HEIGHT);
        for (int i = 0; i < Shapes[1]; i++){
            switch (i){
            case 0:
                // rectangle 1
                RtRect1.x = screenWidth*Position[numbre]; RtRect1.y = screenHeight * Rec_Y;
                RtRect1.w = Rect_W; RtRect1.h = Rect_H;
                numbre++;
                break;
            case 1:
                // rectangle 2
                RtRect2.x = screenWidth*Position[numbre]; RtRect2.y = screenHeight * Rec_Y;
                RtRect2.w = Rect_W; RtRect2.h = Rect_H;
                numbre++;
                break;
            case 2:
                // rectangle 3
                RtRect3.x = screenWidth*Position[numbre]; RtRect3.y = screenHeight * Rec_Y;
                RtRect3.w = Rect_W; RtRect3.h = Rect_H;
                numbre++;
                break;
            case 3:
                // rectangle 4
                RtRect4.x = screenWidth*Position[numbre]; RtRect4.y = screenHeight * Rec_Y;
                RtRect4.w = Rect_W; RtRect4.h = Rect_H;
                numbre++;
                break;
            case 4:
                // rectangle 5
                RtRect5.x = screenWidth*Position[numbre]; RtRect5.y = screenHeight * Rec_Y;
                RtRect5.w = Rect_W; RtRect5.h = Rect_H;
                numbre++;
                break;
            case 5:
                // rectangle 6
                RtRect6.x = screenWidth*Position[numbre]; RtRect6.y = screenHeight * Rec_Y;
                RtRect6.w = Rect_W; RtRect6.h = Rect_H;
                break;
            }
        }
    }

    // Squares shapes creating (2)
    if (Square != NULL){
        SDL_QueryTexture(Square, NULL, NULL, &w, &h);
        // Recalculate the size of the shape each time following the size of the window
        int Sqr_W = w*screenWidth/(12*WIDTH);
        int Sqr_H = h*screenHeight/(12*HEIGHT);
        for (int i = 0; i < Shapes[2]; i++){
            switch (i){
            case 0:
                // Square 1
                SqRect1.x = screenWidth*Position[numbre]; SqRect1.y = screenHeight * Sq_Y;
                SqRect1.w = Sqr_W; SqRect1.h = Sqr_H;
                numbre++;
                break;
            case 1:
                // Square 2
                SqRect2.x = screenWidth*Position[numbre]; SqRect2.y = screenHeight * Sq_Y;
                SqRect2.w = Sqr_W; SqRect2.h = Sqr_H;
                numbre++;
                break;
            case 2:
                // Square 3
                SqRect3.x = screenWidth*Position[numbre]; SqRect3.y = screenHeight * Sq_Y;
                SqRect3.w = Sqr_W; SqRect3.h = Sqr_H;
                numbre++;
                break;
            case 3:
                // Square 4
                SqRect4.x = screenWidth*Position[numbre]; SqRect4.y = screenHeight * Sq_Y;
                SqRect4.w = Sqr_W; SqRect4.h = Sqr_H;
                numbre++;
                break;
            case 4:
                // Square 5
                SqRect5.x = screenWidth*Position[numbre]; SqRect5.y = screenHeight * Sq_Y;
                SqRect5.w = Sqr_W; SqRect5.h = Sqr_H;
                numbre++;
                break;
            case 5:
                // Square 6
                SqRect6.x = screenWidth*Position[numbre]; SqRect6.y = screenHeight * Sq_Y;
                SqRect6.w = Sqr_W; SqRect6.h = Sqr_H;
                break;
            }
        }
    }

    // Zone1's shape creating
    if (Zone1 != NULL){
        SDL_QueryTexture(Zone1, NULL, NULL, &w, &h);
        // Recalculate the size of the shape each time following the size of the window
        int Z1_W = w*screenWidth/(3*WIDTH);
        int Z1_H = h*screenHeight/(3*HEIGHT);
        Zone1_rect.w = Z1_W; Zone1_rect.h = Z1_H;
        Zone1_rect.x = screenWidth*0.015; Zone1_rect.y = 5;
    }

    // Zone2's shape creating
    if (Zone2 != NULL){
        SDL_QueryTexture(Zone2, NULL, NULL, &w, &h);
        // Recalculate the size of the shape each time following the size of the window
        int Z2_W = w*screenWidth/(3*WIDTH);
        int Z2_H = h*screenHeight/(3*HEIGHT);
        Zone2_rect.w = Z2_W; Zone2_rect.h = Z2_H;
        Zone2_rect.x = screenWidth*0.015; Zone2_rect.y = screenHeight*0.75;
    }
}
