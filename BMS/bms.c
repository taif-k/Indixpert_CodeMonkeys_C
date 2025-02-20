#include <stdio.h>
#include <string.h>

void createaccount(char anumb[12], char hname[10], int bal);                         // Declaration
void Deposit(char anumb[12], int bal);
void withdraw(char anumb[12], int bal);
void CheckBalance(char anumb[12], int bal);
void DisplayAccountDetails(char anumb[12], char hname[10], int bal);
void VerifyTaskNo();
void bms();

int main()                                                                          // System Defined Function
{
    printf("\n            ------------------------Banking Managemnt System------------------------");
    printf("\n\n1-Create Account | 2-Deposit Amount | 3-withdraw Amount | 4-Display Balance | 5-Check Balance | 0-Exit");
    bms();
    return 0;
}

void bms()                                                                           // User defined Function
{
    int count = 0;
    char holdername[10];
    int balance;
    char accountnumber[12];
    int depositamount = 0;
    int withdrawamount = 0;
    int option;

    do                                                                               // Do-while Loop to handle option 1
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
            createaccount(accountnumber, holdername, balance);                        // Calling (has Arguments)
        }
        else
        {
            printf("Choose 1 (create account) to proceed further ");
        }
    } while (option != 1);

    do                                                                             // Do-while Loop to handle rest options
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
                balance -= withdrawamount;
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
}

void createaccount(char anumb[12], char hname[10], int bal)                            // Defination (has parameters)
{

    printf("\nWelcome to ");
    printf("\033[34mInd\033[0m");
    printf("\033[37mi\033[0m");
    printf("\033[38;5;220mBank\033[0m");

    printf("\n* Account Details ");
    printf("\n* Account number: %s", anumb);
    printf("\n* Account Holder Name: %s", hname);
    printf("\n* Account Balance %d", bal);
}

void Deposit(char anumb[12], int bal)
{

    printf("\nAccount Number: %s", anumb);
    printf("\nTotal Balance: %d", bal);
}

void withdraw(char anumb[12], int bal)
{
    printf("\nAccount Number: %s", anumb);
    printf("\nTotal Balance: %d", bal);
}

void CheckBalance(char anumb[12], int bal)
{
    printf("\nAccount Number: %s", anumb);
    printf("\nTotal Balance: %d", bal);
}

void DisplayAccountDetails(char anumb[12], char hname[10], int bal)
{
    printf("\nAccount Number: %s", anumb);
    printf("\nAccount Holder Name: %s", hname);
    printf("\nBalance: %d", bal);
}
void VerifyTaskNo()
{
    getchar();
    printf("\nChoose valid Task Number");
}
