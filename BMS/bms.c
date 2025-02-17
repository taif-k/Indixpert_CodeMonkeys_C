#include <stdio.h>
#include <string.h>

int main()
{

    char holdername[10];
    int openingbalance;
    char accountnumber[12];
    int depositamount = 0;
    int withdrawamount = 0;
    int totalbalance = 0;
    int count = 0;
    int option;

    printf("\nEnter 1 to Create Account");
    printf("\nEnter 2 to Deposit Amount");
    printf("\nEnter 3 to withdraw Amount");
    printf("\nEnter 4 to Check Balance");
    printf("\nEnter 5 to Display Account details");
    printf("\nEnter 0 to Exit");

    
    while (1)
    {
        printf("\nEnter Task number: ");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("\nEnter an 11 digit account number: ");
            scanf(" %s", &accountnumber);
            int length = strlen(accountnumber);

            if (length == 11)
            {
                printf("\nEnter Name: ");
                scanf(" %[^\n]", &holdername);
                while (count == 0)
                {
                    printf("\nEnter opening balance: ");
                    scanf("%d", &openingbalance);
                    if (openingbalance >= 500)
                    {
                        count = 1;
                    }
                }
            }
        }
        else if(option == 2)
        {
            break;
        }
        // else if (option == 2)
        // {
        //     do
        //     {
        //         printf("\nEnter amount to be Deposited ");
        //         scanf("%d", &depositamount);
        //         if (depositamount >= 100)
        //         {
        //             count = 1;
        //             totalbalance = depositamount + openingbalance;
        //             printf("\nTotal balance: %d", totalbalance);
        //         }

        //     } while (count == 0);
        // }

        // else if (option == 3)
        // {
        //     printf("\nEnter amount to be withdrawn ");
        //     scanf("%d", &withdrawamount);
        //     totalbalance = totalbalance - withdrawamount;
        // }

        // else if (option == 4)
        // {
        //     printf("%d", openingbalance);
        // }
        // else if (option == 5)
        // {
        //     printf("\n%s", accountnumber);
        //     printf("\nBalance: %d", totalbalance);
        //     printf("\nAccount Holder Name: %s", holdername);
        // }
        // else if (option == 0)
        // {
        //     break;
        // }
    }

    return 0;
}
