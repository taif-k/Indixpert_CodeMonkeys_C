#include <stdio.h>

void DisplayAccountDetails();

int main()
{
    char holdername[10];
    int balance;
    char accountnumber[12];

    printf("Enter 11 digits Account number ");
    scanf(" %s", &accountnumber);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", &holdername);
    printf("Enter Account Balance: ");
    scanf(" %d", &balance);

    DisplayAccountDetails(holdername,balance,accountnumber);

    return 0;
}

void DisplayAccountDetails(char hname[10],int bal,char anumb[12])
{

    printf("\nAccount Number: %s", anumb);
    printf("\nAccount Holder Name: %s", hname);
    printf("\nBalance: %d", bal);
}