#include<stdio.h>

void balance(anumb , bal);

int main()
{
  int balance=0;
  char account[12];
  

printf("%d",balance);
printf("%s",account);

scanf("%d",&balance);
scanf( "%s",&account);
checkbalance(account,balance);
   return 0;
}


void checkbalance(char anumb[12],int bal)
{
  printf("%s",anumb);
  printf("\n%d",bal);

}

