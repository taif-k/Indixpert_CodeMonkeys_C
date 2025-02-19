#include <stdio.h>

char holdername[10];
int balance;
char accountnumber[12];

void DisplayAccountDetails();

int main()
{
    DisplayAccountDetails();
    return 0;
}

void DisplayAccountDetails()
{
    printf("Enter 11 digits Account number ");
    scanf(" %s", &accountnumber);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", &holdername);
    printf("Enter Account Balance: ");
    scanf(" %d", &balance);

    printf("\nAccount Number: %s", accountnumber);
    printf("\nAccount Holder Name: %s", holdername);
    printf("\nBalance: %d", balance);
}