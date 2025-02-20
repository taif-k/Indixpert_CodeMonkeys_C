#include <stdio.h>
#include<string.h>

int main()
{
    int count = 0;
    char holdername[10];
    int balance;
    char accountnumber[12];
    int depositamount = 0;
    int withdrawamount = 0;
    int option;

    printf("\n            ------------------------Banking Managemnt System------------------------");
    printf("\n\n1-Create Account | 2-Deposit Amount | 3-withdraw Amount | 4-Display Balance | 5-Check Balance | 0-Exit");

    do
    {
        printf("\n\nEnter task number: ");
        scanf("%d", &option);

        if (option == 1)
        {
            while (1)
            {
                printf("Enter an 11 digit account number: ");
                scanf(" %s", &accountnumber);
                int length = strlen(accountnumber);
                if (length == 11)
                {
                    printf("Enter Name: ");
                    scanf(" %[^\n]", &holdername);
                    while (1)
                    {
                        printf("Enter opening balance  ( Minimum-500 ): ");
                        scanf("%d", &balance);
                        if (balance >= 500)
                        {
                            break;
                        }
                    }
                    break;
                }
            }
            printf("\nWelcome to ");
            printf("\033[34mInd\033[0m");
            printf("\033[37mi\033[0m");
            printf("\033[38;5;220mBank\033[0m");

            printf("\n* Account Details ");
            printf("\n* Account number: %s", accountnumber);
            printf("\n* Account Holder Name: %s", holdername);
            printf("\n* Account Balance %d", balance);
        }
    } while (option != 1);

    do
    {
        printf("\n\nEnter task number: ");
        scanf("%d", &option);
        if (option == 2)
        {
            while (1)
            {
                printf("Enter deposit amount ( Minimum-100 ): ");
                scanf("%d", &depositamount);
                if (depositamount >= 100)
                {
                    balance += depositamount;
                    break;
                }
            }
            printf("\nAccount Number: %s", accountnumber);
            printf("\nTotal Balance: %d", balance);
        }
        else if (option == 3)
        {
            printf("Enter Withdraw Amount: ");
            scanf("%d", &withdrawamount);
            if (withdrawamount > balance)
            {
                printf("Withdraw Amount is greater than Total Balance");
            }
            else if (withdrawamount % 100 != 0)
            {
                printf("Enter valid Amount");
            }
            else
            {
                balance -= withdrawamount;
            }
            printf("\nAccount Number: %s", accountnumber);
            printf("\nTotal Balance: %d", balance);
        }
        else if (option == 4)
        {
            printf("\nAccount Number: %s", accountnumber);
            printf("\nAccount Holder Name: %s", holdername);
            printf("\nBalance: %d", balance);
        }
        else if (option == 5)
        {
            printf("\nAccount Number: %s", accountnumber);
            printf("\nTotal Balance: %d", balance);
        }
        else if (option == 0)
        {
            break;
        }
        else
        {
            getchar();
            printf("\nChoose valid Task Number");
        }

    } while (count == 0);

    return 0;
}