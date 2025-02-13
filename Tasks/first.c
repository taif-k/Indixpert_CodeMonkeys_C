#include <stdio.h>

int sum(int a, int b); // Declaration
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);
void calculator();

int main()
{
    calculator();
    return 0;
}

void calculator() // User-Defined Function
{
    int num1;
    int num2;
    int option;

    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    while (1)
    {
        printf("\nPress 1 for addition | Enter 2 for Subtraction | Enter 3 for Multiplication | Enter 4 for Divison | Enter 5 to Exit ");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("Sum is: %d", sum(num1, num2)); // num1, num2 - arguments
        }
        else if (option == 2)
        {
            printf("\nSubtraction is: %d", subtraction(num1, num2));
        }
        else if (option == 3)
        {
            printf("\nMultiplication is: %d", multiplication(num1, num2));
        }
        else if (option == 4)
        {
            printf("\nDivision is: %.2f", division(num1, num2));
        }
        else if (option == 5)
        {
            break;
        }
        else
        {
            getchar();
        }
    }
}

int sum(int a, int b) // Definition
{
    return a + b;
}

int subtraction(int a, int b) // int a, int b - Parameters
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

float division(int a, int b)
{
    return (float)a / b; // int/int = int ( 2/4 = 0.5  decimal part gets removed and becomes 0, so to keep decimal part use (float) )
}