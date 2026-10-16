#include "accessControl.h"

const unsigned int access_password[PW_SIZE] = {
    0x00, 0x01, 0x02, 0x03
};

bool verify_access_password(const unsigned int *input_password) {
    return memcmp(input_password, access_password, sizeof(access_password));
}

void showAccessPassword() {
    printf("Access Password: ");
    for (int i = 0; i < PW_SIZE; i++) {
        printf("%02X ", access_password[i]);
    }
    printf("\n");
}