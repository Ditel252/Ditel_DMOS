#include <Arduino.h>
#include "Ditel_DMOS_APPLICATION4.hpp"

Ditel_DMOS_APPLICATION4 systemForHome;

class Ditel_DMOS_HOME{
private:
    int _shutdownCheckMemory = 0;
    int _selectApprication = 1;

    #define _application_left_Icon_x    10
    #define _application_right_Icon_x   74
    #define _applicationIcon_y          6
    #define _applicationQuantity        5

    void _setHomeScreen(int _selectApp){
        _SYS_Ditel_DMOS_DISPLAY.stopscroll();
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        switch(_selectApp){
            case 1 :    
            case 2 :    _SYS_Ditel_DMOS_DISPLAY.drawBitmap(_application_left_Icon_x, _applicationIcon_y, Ditel_DMOS_APPLICATION1_IMAGE, 43, 43, WHITE);
                        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(_application_right_Icon_x, _applicationIcon_y, Ditel_DMOS_APPLICATION2_IMAGE, 43, 43, WHITE);    break;

            case 3 :
            case 4 :    _SYS_Ditel_DMOS_DISPLAY.drawBitmap(_application_left_Icon_x, _applicationIcon_y, Ditel_DMOS_APPLICATION3_IMAGE, 43, 43, WHITE);
                        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(_application_right_Icon_x, _applicationIcon_y, Ditel_DMOS_APPLICATION4_IMAGE, 43, 43, WHITE);    break;
            
            case 5 :    _SYS_Ditel_DMOS_DISPLAY.drawBitmap(_application_left_Icon_x, _applicationIcon_y, Ditel_DMOS_SHUTDOWN_ICON, 43, 43, WHITE);
        }
        

        if((_selectApp % 2) == 1){
            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_left_Icon_x - 1, _applicationIcon_y - 1, 45, 45, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_left_Icon_x - 2, _applicationIcon_y - 2, 47, 47, BLACK);
            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_left_Icon_x - 3, _applicationIcon_y - 3, 49, 49, WHITE);

            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_right_Icon_x - 1, _applicationIcon_y - 1, 45, 45, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_right_Icon_x - 2, _applicationIcon_y - 2, 47, 47, WHITE);
        }else if((_selectApp % 2) == 0){
            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_left_Icon_x - 1, _applicationIcon_y - 1, 45, 45, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_left_Icon_x - 2, _applicationIcon_y - 2, 47, 47, WHITE);

            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_right_Icon_x - 1, _applicationIcon_y - 1, 45, 45, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_right_Icon_x - 2, _applicationIcon_y - 2, 47, 47, BLACK);
            _SYS_Ditel_DMOS_DISPLAY.drawRect(_application_right_Icon_x - 3, _applicationIcon_y - 3, 49, 49, WHITE);
        }
        
        _SYS_Ditel_DMOS_DISPLAY.fillRect(0, 55, 128, 10, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.setCursor(0, 56);
        _SYS_Ditel_DMOS_DISPLAY.setTextColor(BLACK);
        _SYS_Ditel_DMOS_DISPLAY.setTextSize(1);

        switch(_selectApp){
            case 1 :    _SYS_Ditel_DMOS_DISPLAY.print(Ditel_DMOS_APPLICATION1_NAME);    break;
            case 2 :    _SYS_Ditel_DMOS_DISPLAY.print(Ditel_DMOS_APPLICATION2_NAME);    break;
            case 3 :    _SYS_Ditel_DMOS_DISPLAY.print(Ditel_DMOS_APPLICATION3_NAME);    break;
            case 4 :    _SYS_Ditel_DMOS_DISPLAY.print(Ditel_DMOS_APPLICATION4_NAME);    break;
            case 5 :    _SYS_Ditel_DMOS_DISPLAY.print("Shutdown");                  break;
        }
        
        _SYS_Ditel_DMOS_DISPLAY.display();
        _SYS_Ditel_DMOS_DISPLAY.startscrollleft(0x07,0x07);
    }

public:

    void _osBigin(){
        _KERNEL._screenStart();

        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.setCursor(0, 0);
        _SYS_Ditel_DMOS_DISPLAY.println("[ ok ] Bigin DMOS");
        _SYS_Ditel_DMOS_DISPLAY.display();
        delay(200);
        
        _SYS_Ditel_DMOS_DISPLAY.println("[ ok ] Start EEPROM");
        _SYS_Ditel_DMOS_DISPLAY.display();
        delay(400);

        _SYS_Ditel_DMOS_DISPLAY.print("       ");
        _SYS_Ditel_DMOS_DISPLAY.print(_KERNEL._startEeprom());
        _SYS_Ditel_DMOS_DISPLAY.println(" byte OK");
        _SYS_Ditel_DMOS_DISPLAY.display();
        delay(200);

        _KERNEL._readEeprom();

        _SYS_Ditel_DMOS_DISPLAY.println("[ ok ] Read EEPROM");
        _SYS_Ditel_DMOS_DISPLAY.display();

        delay(200);

        _shutdownCheckMemory = _KERNEL._SYS_OS_CHECK._shutdownCheck[1];
        _KERNEL._SYS_OS_CHECK._shutdownCheck[1] = 0x01;
        EEPROM.put<_diagnoseOS>(0, _KERNEL._SYS_OS_CHECK);
        EEPROM.commit();
        _SYS_Ditel_DMOS_DISPLAY.println("[ ok ] Check Shutdown");
        _SYS_Ditel_DMOS_DISPLAY.display();
        delay(1000);

        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.setCursor(0, 0);
        _SYS_Ditel_DMOS_DISPLAY.println("begin DMOS");
        _SYS_Ditel_DMOS_DISPLAY.print("version : ");
        _SYS_Ditel_DMOS_DISPLAY.println(_SYS_OS_VERSION);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delay(1000);

        systemForApp1._biginAnimation();
        delay(1500);

        if(_shutdownCheckMemory == 0x01){
            _BSOD._BSOD(_KERNEL._SYS_OS_CHECK._shutdownCheck[0]);
        }
    }

    void _osShutdown(){
        _KERNEL._SYS_OS_CHECK._shutdownCheck[1] = 0x00;

        EEPROM.put<_diagnoseOS>(0, _KERNEL._SYS_OS_CHECK);
        EEPROM.commit();
        
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.setCursor(0, 0);
        _SYS_Ditel_DMOS_DISPLAY.println("[ ok ] Write EEPROM");
        _SYS_Ditel_DMOS_DISPLAY.display();

        delay(1000);
        
        systemForApp1._shutdownImage();

        while(1);
    }

    int _homeScreen(){
        int _selectAppricationMemory = _selectApprication;
        _setHomeScreen(_selectApprication);
        uint8_t _buttonMode = HIGH;

        if(_KERNEL._SYS_BUTTON_MODE == true)
                _buttonMode = LOW;

        while(1){
            _selectAppricationMemory = _selectApprication;

            if(digitalRead(_KERNEL._SYS_RIGHT_UP_PIN) == _buttonMode){
                if(_KERNEL._chatteringPrevention(_KERNEL._SYS_RIGHT_UP_PIN, _buttonMode, true) == 1){
                    while(1){
                        if(digitalRead(_KERNEL._SYS_RIGHT_UP_PIN) == !_buttonMode){
                            if(_KERNEL._chatteringPrevention(_KERNEL._SYS_RIGHT_UP_PIN, !_buttonMode, true) == 1)
                                break;
                        }
                    }

                    if(_selectApprication == _applicationQuantity)
                        _selectApprication = 1;
                    else
                        _selectApprication++;
                }
            }

            if(digitalRead(_KERNEL._SYS_LEFT_DOWN_PIN) == _buttonMode){
                if(_KERNEL._chatteringPrevention(_KERNEL._SYS_LEFT_DOWN_PIN, _buttonMode, true) == 1){
                    while(1){
                        if(digitalRead(_KERNEL._SYS_LEFT_DOWN_PIN) == !_buttonMode){
                            if(_KERNEL._chatteringPrevention(_KERNEL._SYS_LEFT_DOWN_PIN, !_buttonMode, true) == 1)
                                break;
                        }
                    }

                    if(_selectApprication == 1)
                        _selectApprication = _applicationQuantity;
                    else
                        _selectApprication--;
                }
            }

            if(digitalRead(_KERNEL._SYS_OK_PIN) == _buttonMode){
                if(_KERNEL._chatteringPrevention(_KERNEL._SYS_OK_PIN, _buttonMode, true) == 1){
                    while(1){
                        if(digitalRead(_KERNEL._SYS_OK_PIN) == !_buttonMode){
                            if(_KERNEL._chatteringPrevention(_KERNEL._SYS_OK_PIN, !_buttonMode, true) == 1)
                                break;
                        }
                    }

                    break;
                }
            }

            if(_selectApprication != _selectAppricationMemory)
                _setHomeScreen(_selectApprication);

            delay(10);
        }
        _SYS_Ditel_DMOS_DISPLAY.stopscroll();
        _SYS_Ditel_DMOS_DISPLAY.setCursor(0, 0);
        _SYS_Ditel_DMOS_DISPLAY.setTextSize(1);
        _SYS_Ditel_DMOS_DISPLAY.setTextColor(WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();

        return _selectApprication;
    }
};