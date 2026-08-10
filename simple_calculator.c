// Simple Calculator

#include <stdio.h>

int main()
{
    // Creating variables
    int choice, num1, num2;
    float result;

    printf("Welcome to Simple Calculator");

    // Displaying menu
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");

    // Reading user's choice
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num1);

            printf("Enter another number: ");
            scanf("%d", &num2);

            result = num1 + num2;
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num1);

            printf("Enter another number: ");
            scanf("%d", &num2);

            result = num1 - num2;
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &num1);

            printf("Enter another number: ");
            scanf("%d", &num2);

            result = num1 * num2;
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%d", &num1);

            printf("Enter another number: ");
            scanf("%d", &num2);

            if (num2 == 0)
            {
                printf("Division cannot be performed by zero.");
                return 0;
            }
            else
            {
                result = (float)num1 / num2;
            }
            break;

        default:
            printf("Invalid input.");
            return 0;
    }

    // Printing final result
    printf("Result is %.2f", result);

    return 0;
}
