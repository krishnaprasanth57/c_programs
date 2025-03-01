#include<stdio.h>

int main() {
    // Declare variables for input
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Prompt the user for input
    printf("Enter two integers: ");
    
    // Read input from the user
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2; // Cast to float for decimal division
    } else {
        printf("Division by zero is not allowed.\n");
        return 1; // Exit the program with an error code
    }

    // Display the results
    printf("Results:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0; // Exit the program successfully
}

