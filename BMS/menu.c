#include <stdio.h>

int main()
{
    int count = 0;
    char holdername[10];
    int balance;
    char accountnumber[12];
    int depositamount = 0;
    int withdrawamount = 0;
    int option;

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
            createaccount(accountnumber, holdername, balance);
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
                    balance = balance + depositamount;
                    break;
                }
            }
            Deposit(accountnumber, balance);
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
                balance = balance - withdrawamount;
            }
            withdraw(accountnumber, balance);
        }
        else if (option == 4)
        {
            DisplayAccountDetails(accountnumber, holdername, balance);
        }
        else if (option == 5)
        {
            CheckBalance(accountnumber, balance);
        }
        else if (option == 0)
        {
            break;
        }
        else
        {
            VerifyTaskNo();
        }

    } while (count == 0);

    return 0;
}