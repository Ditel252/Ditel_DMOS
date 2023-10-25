#include <Arduino.h>
#include <Wire.h>
#include <EEPROM.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "_SYS_Ditel_DMOS_EEPROM_DATA.hpp"

Adafruit_SSD1306 _SYS_Ditel_DMOS_DISPLAY(128, 64, &Wire, -1);

class _SYS_Ditel_DMOS_KERNEL
{
private:
#define EEPROM_SIZE 4096

public:
#define _SYS_BUTTON_NC 0x01
#define _SYS_BUTTON_NO 0x02

#define _SYS_OS_VERSION "0.1.1"

    uint8_t _SYS_BUTTON_MODE;
    uint8_t _SYS_RIGHT_UP_PIN, _SYS_LEFT_DOWN_PIN, _SYS_OK_PIN;

    struct _diagnoseOS _SYS_OS_CHECK;

    int _chatteringPrevention(uint8_t _setPin, int _condition, bool _timeOut = false)
    {
        int _read_time = 0;
        int _limit_time_out = 20;
        int _return_inf = 0;

        while (1)
        {
            if (digitalRead(_setPin) == _condition)
                _read_time++;
            else
                _read_time = 0;

            if (_read_time >= 10){
                _return_inf = 1;
                break;
            }

            delay(1);

            if (_timeOut == true)
            {
                if (_limit_time_out < 0){
                    _return_inf = 0;
                    break;
                }else{
                    _limit_time_out--;
                }
            }
        }

        return _return_inf;
    }

    void _buttonWait(uint8_t _buttonPin, int _endCondition)
    {
        if (_SYS_BUTTON_MODE == _SYS_BUTTON_NC)
            _endCondition != _endCondition;

        _chatteringPrevention(_buttonPin, !_endCondition);
        _chatteringPrevention(_buttonPin, _endCondition);
        _chatteringPrevention(_buttonPin, !_endCondition);
    }

    void _screenStart()
    {
        _SYS_Ditel_DMOS_DISPLAY.begin(SSD1306_SWITCHCAPVCC, 0x3c);
        _SYS_Ditel_DMOS_DISPLAY.setTextColor(WHITE);
        _SYS_Ditel_DMOS_DISPLAY.setTextSize(1);
        _SYS_Ditel_DMOS_DISPLAY.setCursor(0, 0);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.display();
    }

    int _startEeprom()
    {
        int _eepromSize;

        EEPROM.begin(EEPROM_SIZE);
        _eepromSize = EEPROM.length();

        return _eepromSize;
    }

    void _readEeprom()
    {
        EEPROM.get<_diagnoseOS>(0, _SYS_OS_CHECK);
    }

    void _setButtonPin(const uint8_t _RIGHT_UP_PIN, const uint8_t _LEFT_DOWN_PIN, const uint8_t _OK_PIN, uint8_t _inputMode)
    {
        _SYS_RIGHT_UP_PIN = _RIGHT_UP_PIN;
        _SYS_LEFT_DOWN_PIN = _LEFT_DOWN_PIN;
        _SYS_OK_PIN = _OK_PIN;

        _SYS_BUTTON_MODE = ((_inputMode == INPUT_PULLUP) ?  _SYS_BUTTON_NC: _SYS_BUTTON_NO);

        pinMode(_RIGHT_UP_PIN, _inputMode);
        pinMode(_LEFT_DOWN_PIN, _inputMode);
        pinMode(_OK_PIN, _inputMode);
    }

    void _print()
    {
        _SYS_Ditel_DMOS_DISPLAY.print("OK DOSv2 Kernel");
        _SYS_Ditel_DMOS_DISPLAY.display();
    }
};