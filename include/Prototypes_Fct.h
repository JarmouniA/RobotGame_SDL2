#ifndef PROTOTYPES_FCT_H_INCLUDED
#define PROTOTYPES_FCT_H_INCLUDED

    void Init_Glob_Var();
    void CreateWindow();
    void CreateTextures();
    void PlayLoop();
    void Game_Over();
    void Set_Background();
    void loop();
    void ResizeWindow();
    void Delay(double);
    void GoForward();
    void GoBackward();
    void GoLeft();
    void GoRight();
    int* Random();
    void LoadContent();
    void OnRender(int);
    void CheckCircle();
    void MoveCircle();
    void DrawLine();
    int DetectCollision(double, double);
    void Cleanup();

#endif // PROTOTYPES_FCT_H_INCLUDED
