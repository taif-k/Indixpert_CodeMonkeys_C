#include <stdio.h>


void balance();
int main()
{
     balance();
    return 0;
}

void balance()
{
    float balance;
    int number = 0;
    printf("Welcom to bankmanagemt system\n");
    printf("please enter 1 balance");

    do
    {
        printf("\nPlease enter any number :");
        scanf("%d", &number);

        if (balance)
        {
            printf("Please enter your balance");
            scanf("%f", &balance);

            printf("my current balance is: %.f\n", balance);
            break;
        }
    } while (number != 2);
}