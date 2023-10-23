#include <Arduino.h>

#define _SYS_OS_EEPROM_NO_ERROR 0x00
#define _SYS_OS_EEPROM_ERROR    0x01

struct _diagnoseOS{
  //uint8_t 保存名　　　       = {アドレス, エラー};
    uint8_t _shutdownCheck[2] = {0x00, 0x01};
};