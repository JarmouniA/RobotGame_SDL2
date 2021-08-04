#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

int main(int argc, char *argv[]){
    // Enable standard application logging
    SDL_LogSetPriority(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO);

    // Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_Init fail : %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    // Initialize screen dimensions
    screenWidth = WIDTH; screenHeight = HEIGHT;

    // Create the window
    CreateWindow();
    keep_window_open = SDL_TRUE;


    //Create Let's PLAY interface
    play = SDL_FALSE; // Playing initial value

    // Play's texture creating
    Lets_Play = IMG_LoadTexture(renderer, "Images/Lets_play.png");
    if( Lets_Play == NULL ){
        printf("Unable to load Lets_play image! SDL_image Error: %s\n", IMG_GetError());
    }

    SDL_Log("Press any keyboard button to PLAY\n");
    SDL_Log("Press ESC to exit the game\n");
    while ((!play)&&(keep_window_open)){
        PlayLoop();
    }

    replay = SDL_TRUE;
    while ((replay)&&(keep_window_open)&&(play)){
        // Initialization of global variables and memory allocation
        Init_Glob_Var();

        // Generate a random number of each shape
        srand(time(0)); // Use current time as seed for random generator
        Shapes = Random(); // number of shapes for each type

        // Creating textures for the window's graphic elements
        CreateTextures();

        // Calculating shapes parameters
        LoadContent();

        // Set a rectangle of the window
        Screen_Rect.w = screenWidth - 2*RobotRect.w; Screen_Rect.h = screenHeight - 2*RobotRect.h;
        Screen_Rect.x = RobotRect.w; Screen_Rect.y = RobotRect.h;

        // Rendering shapes and setting rectangles' pointers for collision detection
        OnRender(Flip_Angle);

        // instructions for the user
        printf("\n");
        SDL_Log("Let's PLAY\n");
        SDL_Log("Use Up, Down, Left, Right buttons to move the Robot\n");
        SDL_Log("Press RETURN button to check a shape's type and to move Circles to ZONE2\n");
        SDL_Log("Press D button to draw Robot's path\n");

        // instructions to execute while the game is on
        while((keep_window_open)&&(play)){
            // Game's background setting
            Set_Background();

            // line drawing
            if (drawing == 1)
                DrawLine();

            // Loading objects on screen
            LoadContent();
            OnRender(Flip_Angle);

            // Loop function
            loop();

            //Update the drawing image on window screen
            SDL_UpdateWindowSurface(window);
        }
        // Game OVER
        SDL_Log("GAME OVER\n");
        // GameOver's texture creating
        GameOver = IMG_LoadTexture(renderer, "./Images/Game_over.png");
        if( GameOver == NULL ){
            printf("Unable to load Game_over image! SDL_image Error: %s\n", IMG_GetError());
        }
        printf("\n");
        SDL_Log("Press Y to PLAY AGAIN\n");
        SDL_Log("Press N to exit the game\n");
        while ((!play)&&(keep_window_open)){
            Game_Over();
        }
        Cleanup();
    }
    // Destroying the game renderer, window & exit SDL library
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}
