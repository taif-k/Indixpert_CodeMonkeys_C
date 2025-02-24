#include <stdio.h>
#include <string.h>

void createaccount(char anumb[12], char hname[10], int bal); // Declaration(has parameters)
void bms();
void menu();

int main()
{
    bms();
    return 0;
}

void menu()
{
    printf("\n1- Create Account ");
    printf("\n2- Deposit ");
    printf("\n3- Withdraw ");
    printf("\n4- Display Details ");
    printf("\n5- Check Balance ");
}

void bms()
{
    int count = 0;
    char holdername[15];
    int balance = 0;
    char accountnumber[12];
    int depositamount = 0;
    int withdrawamount = 0;
    int option;

    printf("\nEnter task number: ");
    scanf("%d", &option);
    if (option == 0)
    {
        return;
    }

    do // Do-while Loop to handle option 1
    {
        printf("\n\nEnter task number: ");
        if (scanf("%d", &option) != 1 || option < 1 || option > 5)
        {
            while (getchar() != '\n');
            continue;
        }

        if (option == 1)
        {
            while (1)
            {
                printf("Enter an 11 digit account number (only digits): ");
                scanf(" %s", &accountnumber);
                int length = strlen(accountnumber); //  @ @ 64

                if (length == 11)
                {
                    int flag = 0;
                    int zero = 0;
                    for (int i = 0; i < length; i++)
                    {
                        if (accountnumber[i] < '0' || accountnumber[i] > '9') // 0(48)-9(57)
                        {
                            flag = 1;
                            break;
                        }
                        if (accountnumber[i] == '0')
                        {
                            zero++;
                        }
                    }
                    if (zero == 11)
                    {
                        continue;
                    }

                    if (flag == 0)
                    {

                        while (1)
                        {
                            printf("Enter Name: ");
                            scanf(" %[^\n]", &holdername);
                            int match = 0;
                            for (int i = 0; holdername[i] != '\0'; i++) //  abcdef\0
                            {
                                if ((holdername[i] < 'a' || holdername[i] > 'z') && (holdername[i] < 'A' || holdername[i] > 'Z') && holdername[i] != ' ')
                                {
                                    match = 1;
                                    break;
                                }
                            }
                            if (match == 0)
                            {
                                break;
                            }
                        }

                        while (1)
                        {
                            char balanceStr[20];
                            printf("Enter opening balance (Minimum 500): ");
                            scanf(" %s", &balanceStr); //  [a][b][c] [1][0][0]

                            int match = 0;
                            int length = strlen(balanceStr);

                            for (int i = 0; i < length; i++)
                            {
                                if (balanceStr[i] < '0' || balanceStr[i] > '9')
                                {
                                    match = 1;
                                    break;
                                }
                            }

                            if (match == 0)
                            {
                                balance = 0;
                                for (int i = 0; i < length; i++)
                                {
                                    balance = balance * 10 + (balanceStr[i] - '0');
                                }

                                if (balance >= 500)
                                {
                                    break;
                                }
                            }
                        }
                        break;
                    }
                }
            }
            createaccount(accountnumber, holdername, balance);
        }
        else if (option == 0)
        {
            break;
        }
        else
        {
            getchar();
            printf("Choose 1 (create account) to proceed further ");
        }
    } while (option != 1);
}

void createaccount(char anumb[12], char hname[10], int bal) // Defination (has parameters)
{

    printf("\nWelcome to ");
    printf("\033[34mInd\033[0m");
    printf("\033[37mi\033[0m");
    printf("\033[38;5;220mBank\033[0m");

    printf("\nAccount number: %s", anumb);
    printf("\nAccount Holder Name: %s", hname);
    printf("\nAccount Balance %d", bal);
}