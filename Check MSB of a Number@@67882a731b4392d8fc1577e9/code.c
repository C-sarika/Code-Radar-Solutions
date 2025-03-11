// Your code here...
#include <stdio.h>

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0)  
        printf("MSB is set (1)\n");
    else
        printf("MSB is not set (0)\n");

    return 0;
}


