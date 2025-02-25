#include <stdio.h>
#include <string.h>

void openingbalance(int bal);

int main()
{
    int balance = 0;
    openingbalance(balance);
    return 0;
}

void openingbalance(int bal)
{

    printf("Minimum - 500 and only digits");
    while (1)
    {
        char balancestr[20];
        printf("\nEnter balance: ");
        scanf(" %s", &balancestr);
        int length = strlen(balancestr); //  abc\0  500\0  123\0

        int count = 0;
        for (int i = 0; balancestr[i] != '\0'; i++)
        {
            if (balancestr[i] < '0' || balancestr[i] > '9')
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            bal = 0;
            for (int i = 0; i < length; i++)
            {
                bal = bal * 10 + (balancestr[i] - '0');
            }
            if (bal >= 500)
            {
                break;
            }
        }
    }
    printf("\nOpening balance is : %d", bal);
}
