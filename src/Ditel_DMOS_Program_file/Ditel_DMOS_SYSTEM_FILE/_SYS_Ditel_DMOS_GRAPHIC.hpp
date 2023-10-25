#include <Arduino.h>
#include <string.h>
#include "_SYS_Ditel_DMOS_BSOD.hpp"
#include "_SYS_Ditel_DMOS_IMAGE.hpp"

_SYS_Ditel_DMOS_BSOD _BSOD;

class _SYS_Ditel_DMOS_GRAPHIC
{
private:
#define BIGIN_ANIMATION_FLAME_LATE 1000

public:
    void _biginAnimation()
    {
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_START_SCREEN, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        
        delay(2000);
    }

    void _shutdownImage()
    {
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.setCursor(0, 0);
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_END_SCREEN, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
    }

    int _popUp(int _selectType, int _buttonMode, char *_printInformation)
    {
        int _returnInformation, _selectButton, _sizeOfPrintInformation = strlen(_printInformation);

        uint8_t _buttonBaseMode = HIGH;

        if (_KERNEL._SYS_BUTTON_MODE == _SYS_BUTTON_NC)
            _buttonBaseMode = LOW;

        _SYS_Ditel_DMOS_DISPLAY.fillRect(8, 3, 112, 58, BLACK);
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(8, 3, Ditel_DMOS_POP_UP, 112, 58, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.fillRect(9, 23, 17, 17, BLACK);
        if (_selectType == 1) // エラー
            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(9, 23, Ditel_DMOS_POP_UP_ERROR, 17, 17, WHITE);
        else if (_selectType == 2) // 警告
            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(9, 23, Ditel_DMOS_POP_UP_WARING, 17, 17, WHITE);
        else if (_selectType == 3) // 情報
            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(9, 23, Ditel_DMOS_POP_UP_INFORMATION, 17, 17, WHITE);
        else if (_selectType == 4) // 質問
            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(9, 23, Ditel_DMOS_POP_UP_QUESTION, 17, 17, WHITE);

        for (int i = 0; i < 14; i++)
        {
            _SYS_Ditel_DMOS_DISPLAY.setCursor(30 + 6 * i, 8);
            _SYS_Ditel_DMOS_DISPLAY.print((_sizeOfPrintInformation > i) ? _printInformation[i] : ' ');
        }
        for (int i = 14; i < 28; i++)
        {
            _SYS_Ditel_DMOS_DISPLAY.setCursor(30 + 6 * (i - 14), 17);
            _SYS_Ditel_DMOS_DISPLAY.print((_sizeOfPrintInformation > i) ? _printInformation[i] : ' ');
        }
        for (int i = 28; i < 42; i++)
        {
            _SYS_Ditel_DMOS_DISPLAY.setCursor(30 + 6 * (i - 28), 26);
            _SYS_Ditel_DMOS_DISPLAY.print((_sizeOfPrintInformation > i) ? _printInformation[i] : ' ');
        }
        for (int i = 42; i < 56; i++)
        {
            _SYS_Ditel_DMOS_DISPLAY.setCursor(30 + 6 * (i - 42), 35);
            _SYS_Ditel_DMOS_DISPLAY.print((_sizeOfPrintInformation > i) ? _printInformation[i] : ' ');
        }

        if (_buttonMode == 1)
        {
            _SYS_Ditel_DMOS_DISPLAY.fillRect(96, 47, 19, 7, BLACK);
            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(95, 46, Ditel_DMOS_POP_UP_OK_SELE_BUTTON, 21, 9, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.display();
            while (1)
            {
                if (digitalRead(_KERNEL._SYS_OK_PIN) == _buttonBaseMode)
                {
                    if (_KERNEL._chatteringPrevention(_KERNEL._SYS_OK_PIN, _buttonBaseMode, true) == 1)
                        break;
                }
            }

            _SYS_Ditel_DMOS_DISPLAY.fillRect(95, 46, 21, 9, BLACK);
            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(96, 47, Ditel_DMOS_POP_UP_OK_BUTTON, 19, 7, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.display();

            while (1)
            {
                if (digitalRead(_KERNEL._SYS_OK_PIN) == !_buttonBaseMode)
                {
                    if (_KERNEL._chatteringPrevention(_KERNEL._SYS_OK_PIN, !_buttonBaseMode, true) == 1)
                        break;
                }
            }

            _returnInformation = 1;
        }
        else if (_buttonMode == 2)
        {
            _SYS_Ditel_DMOS_DISPLAY.fillRect(96, 47, 19, 7, BLACK);
            _SYS_Ditel_DMOS_DISPLAY.fillRect(73, 46, 21, 9, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.fillRect(74, 47, 19, 7, BLACK);
            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(95, 46, Ditel_DMOS_POP_UP_YES_SELE_BUTTON, 21, 9, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(74, 47, Ditel_DMOS_POP_UP_NO_BUTTON, 19, 7, WHITE);
            _SYS_Ditel_DMOS_DISPLAY.display();

            _selectButton = 1;

            while (1)
            {
                if (digitalRead(_KERNEL._SYS_OK_PIN) == _buttonBaseMode)
                {
                    if (_KERNEL._chatteringPrevention(_KERNEL._SYS_OK_PIN, _buttonBaseMode, true) == 1)
                    {
                        while (1)
                        {
                            if (digitalRead(_KERNEL._SYS_OK_PIN) == !_buttonBaseMode)
                            {
                                if (_KERNEL._chatteringPrevention(_KERNEL._SYS_OK_PIN, !_buttonBaseMode, true) == 1)
                                    break;
                            }
                        }

                        break;
                    }
                }

                if (digitalRead(_KERNEL._SYS_LEFT_DOWN_PIN) == _buttonBaseMode)
                {
                    if (_KERNEL._chatteringPrevention(_KERNEL._SYS_LEFT_DOWN_PIN, _buttonBaseMode, true) == 1)
                    {
                        if (_selectButton == 2)
                        {
                            _selectButton = 1;
                            _SYS_Ditel_DMOS_DISPLAY.fillRect(96, 47, 19, 7, BLACK);
                            _SYS_Ditel_DMOS_DISPLAY.fillRect(74, 47, 19, 7, BLACK);
                            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(95, 46, Ditel_DMOS_POP_UP_YES_SELE_BUTTON, 21, 9, WHITE);
                            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(74, 47, Ditel_DMOS_POP_UP_NO_BUTTON, 19, 7, WHITE);
                            _SYS_Ditel_DMOS_DISPLAY.display();
                        }

                        while (1)
                        {
                            if (digitalRead(_KERNEL._SYS_LEFT_DOWN_PIN) == !_buttonBaseMode)
                            {
                                if (_KERNEL._chatteringPrevention(_KERNEL._SYS_LEFT_DOWN_PIN, !_buttonBaseMode, true) == 1)
                                    break;
                            }
                        }
                    }
                }
                
                if (digitalRead(_KERNEL._SYS_RIGHT_UP_PIN) == _buttonBaseMode)
                {
                    if (_KERNEL._chatteringPrevention(_KERNEL._SYS_RIGHT_UP_PIN, _buttonBaseMode, true) == 1)
                    {
                        if (_selectButton == 1)
                        {
                            _selectButton = 2;
                            _SYS_Ditel_DMOS_DISPLAY.fillRect(96, 47, 19, 7, BLACK);
                            _SYS_Ditel_DMOS_DISPLAY.fillRect(74, 47, 19, 7, BLACK);
                            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(96, 47, Ditel_DMOS_POP_UP_YES_BUTTON, 19, 7, WHITE);
                            _SYS_Ditel_DMOS_DISPLAY.drawBitmap(73, 46, Ditel_DMOS_POP_UP_NO_SELE_BUTTON, 21, 9, WHITE);
                            _SYS_Ditel_DMOS_DISPLAY.display();
                        }

                        while(1){
                            if(digitalRead(_KERNEL._SYS_RIGHT_UP_PIN) == !_buttonMode){
                                if(_KERNEL._chatteringPrevention(_KERNEL._SYS_RIGHT_UP_PIN, !_buttonBaseMode, true) == 1)
                                    break;
                            }
                        }
                    }
                }

            }

            _returnInformation = ((_selectButton == 2) ? 1 : 0);
        }

        _SYS_Ditel_DMOS_DISPLAY.fillRect(8, 3, 112, 58, BLACK);
        _SYS_Ditel_DMOS_DISPLAY.display();

        return _returnInformation;
    }
};