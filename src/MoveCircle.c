#include "..\include\common.h"
#include "..\include\Prototypes_Fct.h"
#include "..\include\Define.h"

void MoveCircle(){
    if (check == 21){
        while(Roy < Ro_Y){
            C1y = C1y + STEP;
            //Moving the robot and the circle
            GoBackward();
            Delay(delta);
        }
        Set_Background();

        C1y = C_Y; // Circle parking position in ZONE2
        LoadContent();
        OnRender(Flip_Angle);
        ClRect1C = &ClRect1;
        Move[0] = 1;
    }
    else if (check == 22){
        while(Roy < Ro_Y){
            C2y = C2y + STEP;
            GoBackward();
            Delay(delta);
        }
        Set_Background();

        C2y = C_Y;
        LoadContent();
        OnRender(Flip_Angle);
        ClRect2C = &ClRect2;
        Move[1] = 1;
    }
    else if (check == 23){
        while(Roy < Ro_Y){
            C3y = C3y + STEP;
            GoBackward();
            Delay(delta);
        }
        Set_Background();

        C3y = C_Y;
        LoadContent();
        OnRender(Flip_Angle);
        ClRect3C = &ClRect3;
        Move[2] = 1;
    }
    else if (check == 24){
        while(Roy < Ro_Y){
            C4y = C4y + STEP;
            GoBackward();
            Delay(delta);
        }
        Set_Background();

        C4y = C_Y;
        LoadContent();
        OnRender(Flip_Angle);
        ClRect4C = &ClRect4;
        Move[3] = 1;
    }
    else if (check == 25){
        while(Roy < Ro_Y){
            C5y = C5y + STEP;
            GoBackward();
            Delay(delta);
        }
        Set_Background();

        C5y = C_Y;
        LoadContent();
        OnRender(Flip_Angle);
        ClRect5C = &ClRect5;
        Move[4] = 1;
    }
    else if (check == 26){
        while(Roy < Ro_Y){
            C6y = C6y + STEP;
            GoBackward();
            Delay(delta);
        }
        Set_Background();

        C6y = C_Y;
        LoadContent();
        OnRender(Flip_Angle);
        ClRect6C = &ClRect6;
        Move[5] = 1;
    }
}
