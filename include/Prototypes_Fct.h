#ifndef PROTOTYPES_FCT_H_INCLUDED
#define PROTOTYPES_FCT_H_INCLUDED

    extern void Init_Glob_Var();
    extern void CreateWindow();
    extern void CreateTextures();
    extern void PlayLoop();
    extern void Game_Over();
    extern void Set_Background();
    extern void loop();
    extern void ResizeWindow();
    extern void Delay(double);
    extern void GoForward();
    extern void GoBackward();
    extern void GoLeft();
    extern void GoRight();
    extern int* Random();
    extern void LoadContent();
    extern void OnRender(int);
    extern void CheckCircle();
    extern void MoveCircle();
    extern void DrawLine();
    extern int DetectCollision(double, double);
    extern void Cleanup();

#endif // PROTOTYPES_FCT_H_INCLUDED
