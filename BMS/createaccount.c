#include <stdio.h>
#include <string.h>

void createaccount(char anumb[12], char hname[10], int bal);

int main()
{

    char holdername[10];
    int balance;
    char accountnumber[12];
    int option;
    int count = 0;

    do
    {
        printf("\nEnter option");
        scanf("%d", &option);
        if (option == 1)
        {
            while (1)
            {
                printf("\nEnter an 11 digit account number: ");
                scanf(" %s", &accountnumber);
                int length = strlen(accountnumber);
                if (length == 11)
                {
                    printf("\nEnter Name: ");
                    scanf(" %[^\n]", &holdername);
                    while (1)
                    {
                        printf("\nEnter opening balance  ( Minimum-500 ): ");
                        scanf("%d", &balance);
                        if (balance >= 500)
                        {
                            break;
                        }
                    }
                    break;
                }
            }
            createaccount(accountnumber, holdername, balance);
        }
        else
        {
            printf("Select option 1");
        }
    } while (option != 1);

    return 0;
}

void createaccount(char anumb[12], char hname[10], int bal)
{

    printf("Welcome to IndiBank");

    printf("\n");
    printf("\n* Account Details ");
    printf("\n* Account number: %s", anumb);
    printf("\n* Account Holder Name: %s", hname);
    printf("\n* Account Balance %d", bal);
}
