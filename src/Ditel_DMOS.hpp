#include <Arduino.h>
#include "Ditel_DMOS_Program_file/Ditel_DMOS_HOME.hpp"

Ditel_DMOS_HOME systemForDOS;

class DOS
{
private:
    int _selectApp = 0;

public:
    void setMainButton(uint8_t LeftDownPin, uint8_t OkPin, uint8_t RightUpPin, bool isNormallyClosed = false)
    {
        _KERNEL._setButtonPin(RightUpPin, LeftDownPin, OkPin, isNormallyClosed);
    }

    void test()
    {
        systemForDOS._osBigin();

        while(1){
            if(systemForDOS._homeScreen() == 5){
                if(systemForApp1._popUp(4, 2, "Shutdown now ?") == 1)
                    break;
            }
        }

        systemForDOS._osShutdown();
    }
};