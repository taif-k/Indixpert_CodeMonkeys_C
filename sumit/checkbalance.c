#include<stdio.h>

void checkbalance(char anumb[12],int bal); // Function Declaration

int main()
{
  int balance=0;
  char account[12];
  

printf("%d",balance);
printf("%s",account);

scanf("%d",&balance);
scanf( "%s",&account);
checkbalance(account,balance); // Function Calling
   return 0;
}

void balance (anumb , bal) // Defination

{
  printf("%s",anumb);
  printf("\n%d",bal);

}

