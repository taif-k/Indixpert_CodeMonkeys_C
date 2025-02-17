#include <stdio.h>
#include <string.h>

void createaccount();  

int main()
{

    createaccount();

    return 0;
}



void createaccount()
{
    char holdername[10];
    int openingbalance;

    char accountnumber[12];

    while (1)
    {
        printf("Enter an 11 digit account number: ");
        scanf(" %s", &accountnumber);
        int length = strlen(accountnumber);

        if (length == 11)
        {
            break;
        }
    }

    printf("\nEnter Name: ");
    scanf(" %[^\n]", &holdername);

    while (1)
    {
        printf("\nEnter opening balance: ");
        scanf("%d", &openingbalance);
        if (openingbalance >= 500)
        {
            break;
        }
    }
    
    printf("\n%s",accountnumber);
    printf("\nBalance: %d", openingbalance);
    printf("\nAccount Holder Name: %s", holdername);
}