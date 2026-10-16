#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define PW_SIZE 4
extern const unsigned int access_password[PW_SIZE];

extern bool verify_access_password(const unsigned int *input_password);
extern void showAccessPassword();