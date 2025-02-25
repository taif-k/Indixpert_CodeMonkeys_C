#include <stdio.h>
#include <string.h>

void withdraw(int bal);

int main()
{
    int balance = 1000;
    withdraw(balance);
    return 0;
}
// only 3 chances to get right amount
void withdraw(int bal)
{
    char withdrawstr[20];
    int count = 0;
    printf("\nBalance from main func: %d", bal);
    do
    {
        count++;
        int withdrawamount = 0;
        
        printf("\nEnter withdraw balance ");
        scanf(" %s", &withdrawstr);
        int length = strlen(withdrawstr); //  abc
        int flag = 0;

        for (int i = 0; withdrawstr[i] != '\0'; i++)
        {
            if (withdrawstr[i] < '0' || withdrawstr[i] > '9')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < length; i++)
            {
                withdrawamount = withdrawamount * 10 + (withdrawstr[i] - '0'); // bodmas
            }

            if (withdrawamount > bal)
            {
                printf("Insufficient Amount");
            }
            else if (withdrawamount % 100 != 0)
            {
                printf("Amount not multiple of 100");
            }
            else
            {
                bal -= withdrawamount;
                break;
            }
        }
    } while (count < 3);
}
