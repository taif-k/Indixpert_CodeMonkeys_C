#include <stdio.h>

int main()
{
    int balance = 500; 
    int withdrawAmount;

    printf("Enter the amount to withdraw: ");
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
    return 0;
}