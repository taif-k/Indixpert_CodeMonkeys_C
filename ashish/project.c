#include<stdio.h>

int main()
{
int number,balance = 0;
int accountCreated = 0;

printf("\nenter 1 checking for balance :");
printf("\nenter 2 for exit the program :");

do
{
  printf("\nPlease enter any number :");
  scanf("%d",&number);
  

switch (number)
{
case 1:
if(accountCreated==0)
    {
       printf("Please create an account first to check your balance.\n ");
    }
    else
    {
      printf("\nThe account number is:%s\n");
      printf("your balance is :%d\n",balance);
      
    }

    break;
case 2:

    printf("exit from program\n");
    break;
}
}
while (number!=5);

    return 0;
}