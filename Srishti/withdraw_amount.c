#include <stdio.h>

void withdraw(); // declaration

int main()
{
    withdraw(); // calling
    return 0;
}

void withdraw() // definition
{
    int balance = 500; // Initial balance
    int withdrawAmount;

    printf("Enter the amount to withdraw:");
    scanf("%d", &withdrawAmount);

    if (withdrawAmount > balance)
    {
        printf("Insufficient Amount");
    }
    else if (withdrawAmount % 100 != 0)
    {
        printf("Amount not multiple of 100");
    }
    else
    {
        balance -= withdrawAmount;
        printf("Withdrawal successful!\n");
        printf("Total Balance: %d", balance);
    }
}
