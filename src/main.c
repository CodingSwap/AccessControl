/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include "eeprom.h"
#include "accessControl.h"




bool passwordCheckflag = false;


int main()
{
    printf("HELLO\n");
    eeprom_write(0, 42);
    unsigned int value;
    eeprom_read(0, &value);
    printf("Value at address 0: %u\n", value);
    
    eeprom_read(1, &value);
    printf("Value at address 1: %x\n", value);

    unsigned int access_passwordCheck[PW_SIZE];

    printf("Enter Access Password:\n");
    for (int i = 0; i < PW_SIZE; i++) {
        printf("Enter byte %d (in hex): ", i);
        scanf("%x", &access_passwordCheck[i]);
    }
    
    if (verify_access_password(access_passwordCheck) == 0) 
    {
        printf("Access Granted\n");
        printf("access_password: ");
        showAccessPassword();
        passwordCheckflag = true;
        printf("\n");
    } else {
        printf("Access Denied\n");
                for (int i = 0; i < PW_SIZE; i++) {
            printf("%02X", access_passwordCheck[i]);
        }
        printf("\n");
    }
    return 0;
}
