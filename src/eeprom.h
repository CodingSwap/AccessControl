
#define EPPROM_SIZE 1024

extern void eeprom_write(unsigned int address, unsigned int value);
extern void eeprom_read(unsigned int address, unsigned int *value);
