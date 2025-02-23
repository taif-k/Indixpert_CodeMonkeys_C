#include <stdio.h>
#include <string.h>

int Deposit(int bal); // Declaration

int main()
{
    int balance = 1000;
    printf("\nOld balance is: %d", balance);
    printf("\nBalance is: %d", Deposit(balance));
    return 0;
}

int Deposit(int bal) // Defination has parameters(Declared with datatypes)
{

    while (1)
    {
        int depositamount = 0;
        char depositstr[20];
        printf("\nEnter deposit amount ( Minimum-100 ): ");
        scanf(" %s", &depositstr);
        int length = strlen(depositstr);
        int match = 0;
        
        for (int i = 0; depositstr[i] != '\0'; i++) // abc\0   99
        {
            if (depositstr[i] < '0' || depositstr[i] > '9')
            {
                match = 1;
                break;
            }
        }
        if (match == 0)
        {
            for (int i = 0; i < length; i++)
            {
                depositamount = depositamount * 10 + (depositstr[i] - '0');
            }
            if (depositamount >= 100)
            {
                bal = bal + depositamount;
                break;
            }
        }
    }
    return bal;
}
