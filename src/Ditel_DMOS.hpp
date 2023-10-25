#include <Arduino.h>
#include "Ditel_DMOS_Program_file/Ditel_DMOS_HOME.hpp"

Ditel_DMOS_HOME systemForDOS;

class DOS
{
private:
    int _selectApp = 0;
    bool _requestShutdown = false;

public:
    void setMainButton(uint8_t LeftDownPin, uint8_t OkPin, uint8_t RightUpPin, uint8_t inputMode = INPUT_PULLDOWN)
    {
        _KERNEL._setButtonPin(RightUpPin, LeftDownPin, OkPin, inputMode);
    }

    void start()
    {
        systemForDOS._osBigin();

        while(1){
            switch(systemForDOS._homeScreen()){
                case 1:
                    Ditel_DMOS_APPLICATION1();
                    break;
                case 2:
                    Ditel_DMOS_APPLICATION2();
                    break;
                case 3:
                    Ditel_DMOS_APPLICATION3();
                    break;
                case 4:
                    Ditel_DMOS_APPLICATION4();
                    break;
                case 5:
                    _requestShutdown = true;
                    break;
            }
            if(_requestShutdown == true){
                if(systemForApp1._popUp(4, 2, "Shutdown now ?") == 1)
                    break;
            }
        }

        systemForDOS._osShutdown();
    }
};