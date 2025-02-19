#include <stdio.h>

int main()
{
    int balance = 500; 
    int withdrawAmount;

<<<<<<< HEAD
    
    
    printf("Enter the amount to withdraw:");
=======
    printf("Enter the amount to withdraw: ");
>>>>>>> ca3de85dac728316af0bc3351d31e76824e5f56e
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