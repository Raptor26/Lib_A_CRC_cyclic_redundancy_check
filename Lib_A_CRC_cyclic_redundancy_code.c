//******************************************************************************
// Секция include: здесь подключается заголовочный файл к модулю
#include "Lib_A_CRC_cyclic_redundancy_code.h"
//******************************************************************************


//******************************************************************************
//------------------------------------------------------------------------------
// Глобальные переменные
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Локальные переменные
//------------------------------------------------------------------------------
//******************************************************************************


//******************************************************************************
// Секция прототипов локальных функций
//******************************************************************************


//******************************************************************************
// Секция описания функций (сначала глобальных, потом локальных)
//==============================================================================

uint8_t CRC_XOR_Crc8(uint8_t *pArr, uint16_t len)
{
    size_t i;
    uint8_t crc = 0;
    for (i = 0; i < len; i++)
    {
        crc ^=  *pArr++;
    }
    return crc;
}
//==============================================================================
//******************************************************************************


//******************************************************************************
// END OF FILE
//******************************************************************************