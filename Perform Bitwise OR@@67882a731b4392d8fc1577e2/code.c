// Your code here...
#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform bitwise OR operation
    result = num1 | num2;

    // Print the result
    printf("Result of %d | %d = %d\n", num1, num2, result);

    return 0;
}
