#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

// check for events
void loop(){
    while (SDL_PollEvent(&Event)){
        // Re-create when window has been resized
        if ((Event.type == SDL_WINDOWEVENT) && (Event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED)){
            ResizeWindow();
            // Re-creating textures for the window's graphic elements
            CreateTextures();
            // Game's background setting
            Set_Background();
            // Graphic shapes
            LoadContent();
            OnRender(Flip_Angle);
            // Reset window's rectangle
            Screen_RectC = &Screen_Rect;
            Screen_Rect.w = screenWidth - 2*RobotRect.w; Screen_Rect.h = screenHeight - 2*RobotRect.h;
            Screen_Rect.x = RobotRect.w; Screen_Rect.y = RobotRect.h;
        }

        // Closing the program
        if (Event.type == SDL_QUIT){
            keep_window_open = SDL_FALSE;
            return;
        }

        //Keyboard operations
        if (Event.type == SDL_KEYDOWN){
            switch (Event.key.keysym.sym){
            // Closing the program
            case SDLK_ESCAPE:
                play = SDL_FALSE;
                return;

            // Moving robot Forward
            case SDLK_UP:
                GoForward();
                break;

            // Moving robot Backward
            case SDLK_DOWN:
                GoBackward();
                break;

            // Moving robot Right
            case SDLK_RIGHT:
                GoRight();
                break;

            // Moving robot Left
            case SDLK_LEFT:
                GoLeft();
                break;
            //return the robot to his initial position
            case SDLK_END:
                Set_Background();

                Rox = X0_R; Roy = Y0_R;
                LoadContent();
                Flip_Angle = 0;
                OnRender(Flip_Angle);
                if (drawing){
                    drawing = 0;
                    free(H_PointsToDraw);
                    free(V_PointsToDraw);
                }
                break;

            //Draw pathway
            case SDLK_d:
                if (drawing == 0){
                    drawing = 1;
                    V_Steps = 1; H_Steps = 1;
                    //
                    MALLOC(H_PointsToDraw, 2, float*);
                    CALLOC(H_PointsToDraw[0], 1, float);
                    CALLOC(H_PointsToDraw[1], 1, float);
                    //
                    MALLOC(V_PointsToDraw, 2, float*);
                    CALLOC(V_PointsToDraw[0], 1, float);
                    CALLOC(V_PointsToDraw[1], 1, float);
                    //
                    H_PointsToDraw[0][0] = Rox;
                    H_PointsToDraw[1][0] = Roy;
                    V_PointsToDraw[0][0] = Rox;
                    V_PointsToDraw[1][0] = Roy;
                }
                else{
                    drawing = 0;
                    free(H_PointsToDraw);
                    free(V_PointsToDraw);
                }
                break;
            }
        }
    }
    // Checking shapes' type
    if ((DetectCollision(0.0, -STEP))||DetectCollision(0.0, STEP)){
        CheckCircle();
        // Moving circle
        if (((check == 21)&&(!Move[0]))||((check == 22)&&(!Move[1]))
            ||((check == 23)&&(!Move[2]))||((check == 24)&&(!Move[3]))
            ||((check == 25)&&(!Move[4]))||((check == 26)&&(!Move[5]))){
            MoveCircle(check);
        }
    }
}
