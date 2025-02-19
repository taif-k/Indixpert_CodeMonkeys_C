#include <stdio.h>

int balance;
char accountnumber[12];
int depositamount = 0;

void Deposit();

int main()
{
    Deposit();
    return 0;
}

void Deposit()
{
    while (1)
    {
        printf("\nEnter deposit amount ( Minimum-100 ): ");
        scanf("%d", &depositamount);
        if (depositamount >= 100)
        {
            balance = balance + depositamount;
            break;
        }
    }
    printf("\nAccount Number: %s", accountnumber);
    printf("\nTotal Balance: %d", balance);
}
