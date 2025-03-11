// Your code here...
#include <stdio.h>
#include <stdio.h>

void checkMSB(int num) {
    int msb = 1 << 31;  // MSB mask for 32-bit integer

    if (num & msb)
        printf("MSB is set (1)\n");
    else
        printf("MSB is not set (0)\n");
}

int main() {
    int num;
    
    // User input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check MSB
    checkMSB(num);

    return 0;
}

