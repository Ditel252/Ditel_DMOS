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
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0000, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0001, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0002, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0003, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0004, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0005, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0006, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0007, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0008, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0009, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0010, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0011, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0012, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0013, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0014, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0015, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0016, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0017, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0018, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0019, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0020, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0021, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0022, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0023, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0024, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0025, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0026, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0027, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0028, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0029, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0030, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0031, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0032, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0033, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0034, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0035, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0036, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0037, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0038, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0039, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0040, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0041, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0042, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0043, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0044, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0045, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0046, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0047, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0048, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0049, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0050, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0051, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0052, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0053, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0054, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0055, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0056, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0057, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0058, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0059, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0060, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0061, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0062, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0063, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0064, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0065, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0066, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0067, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0068, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0069, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0070, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0071, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0072, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0073, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0074, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0075, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0076, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0077, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0078, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0079, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0080, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0081, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0082, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0083, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0084, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0085, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0086, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0087, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0088, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0089, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0090, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0091, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0092, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0093, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0094, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0095, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0096, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0097, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0098, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0099, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0100, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0101, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0102, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0103, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0104, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0105, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0106, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0107, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0108, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0109, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0110, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0111, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0112, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0113, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0114, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0115, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0116, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0117, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0118, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
        _SYS_Ditel_DMOS_DISPLAY.clearDisplay();
        _SYS_Ditel_DMOS_DISPLAY.drawBitmap(0, 0, Ditel_DMOS_ANIMATION_0119, 128, 64, WHITE);
        _SYS_Ditel_DMOS_DISPLAY.display();
        delayMicroseconds(BIGIN_ANIMATION_FLAME_LATE);
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

        if (_KERNEL._SYS_BUTTON_MODE == true)
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