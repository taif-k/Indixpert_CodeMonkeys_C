#include<stdio.h>

void CheckBalance(char anumb[12], int bal);

int main()
{
char accountnumber[12];
int balance;

printf("Enter Account Number: ");
scanf(" %s",&accountnumber);

printf("Enter Balance: ");
scanf("%d",&balance);

CheckBalance(accountnumber,balance);

}

void CheckBalance(char anumb[12], int bal)
{
    printf("\nAccount Number: %s", anumb);
    printf("\nTotal Balance: %d", bal);
}