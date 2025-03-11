// Your code here...
#include <stdio.h>

int main() {
    int num, msb;
    int bits = sizeof(int) * 8; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    msb = (num >> (bits - 1)) & 1;

    // Check and print the result
    if (msb == 1)
        printf("The most significant bit (MSB) is set (1).\n");
    else
        printf("The most significant bit (MSB) is not set (0).\n");

    return 0;
}
