#include <stdio.h>

void Deposit(int bal,char anumb[12]);     // Declaration

int main()
{
    int balance=0;
    char accountnumber[12];
    int depositamount = 0;

    while (1)
    {
        printf("Enter 11 Digit Account Number: ");
        scanf(" %s",&accountnumber);
        printf("\nEnter deposit amount ( Minimum-100 ): ");
        scanf("%d", &depositamount);
        if (depositamount >= 100)
        {
            balance = balance + depositamount;
            break;
        }
    }
    Deposit(balance,accountnumber);        // Calling has Arguments

    return 0;
}

void Deposit(int bal,char anumb[12])      // Defination has parameters(Declared with datatypes) 
{                                               

    printf("\nAccount Number: %s", anumb);
    printf("\nTotal Balance: %d", bal);
}
