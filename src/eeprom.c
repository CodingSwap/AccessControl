#include "eeprom.h"

unsigned int eeprom_array[EPPROM_SIZE] = {1};

void eeprom_write(unsigned int address, unsigned int value)
{
    if (address < EPPROM_SIZE) {
        eeprom_array[address] = value;
    }
}


void eeprom_read(unsigned int address, unsigned int *value)
{
    if (address < EPPROM_SIZE) {
        *value = eeprom_array[address];
    }
}
