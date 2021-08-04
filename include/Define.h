#ifndef DEFINE_H_INCLUDED
#define DEFINE_H_INCLUDED

    #define HEIGHT 300
    #define WIDTH 640

    #define X0_R 0.85
    #define Y0_R 0.4
    #define Y0_C 0.015
    #define Rec_Y 0.019
    #define Sq_Y 0.017
    #define C_Y 0.77 // Circle Y parking position in zone 2
    #define Ro_Y 0.52 // Robot Y parking position in zone 2

    #define MALLOC(ad, nb, type)\
        ad =(type*)malloc(nb*sizeof(type));\
        if (ad == NULL){\
            printf("allocation memoire impossible");\
            exit(1);\
        }

    #define CALLOC(ad, nb, type)\
        ad =(type*)calloc(nb,sizeof(type));\
        if (ad == NULL){\
            printf("callocation memoire impossible");\
            exit(1);\
        }

    #define REALLOC(ad, NewSize, type)\
        ad = realloc(ad, NewSize * sizeof(type));\
        if (ad == NULL){\
            printf("reallocation memoire impossible");\
            exit(1);\
        }

    //Window's background color
    #define R 0xCC
    #define G 0xFF
    #define B 0xFF

    #define STEP 0.02 // step the robot is moving with

#endif // DEFINE_H_INCLUDED
