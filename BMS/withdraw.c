#include <stdio.h>

void withdraw(char anumb[12], int bal);

int main()
{
    int balance=1000;
    char accountnumber[12];
    int withdrawamount;

    printf("\nEnter Withdraw Amount: ");
    scanf("%d", &withdrawamount);
    printf("\nEnter Account Number: ");
    scanf(" %s",&accountnumber);
    
    if (withdrawamount > balance)
    {
        printf("Withdraw Amount is greater than Current Balance");
    }
    else if (withdrawamount % 100 != 0)
    {
        printf("\nEnter valid Amount");
    }
    else
    {
        balance  -= withdrawamount;
        printf("Account balance: %d", balance);
    }

    withdraw(accountnumber,balance);

    return 0;
}

void withdraw(char anumb[12], int bal)
{
   printf("\nAccount Number: %s",anumb);
   printf("\nTotal Balance: %d",bal);

}