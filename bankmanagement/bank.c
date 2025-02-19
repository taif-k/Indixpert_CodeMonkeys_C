#include <stdio.h>
void menu()
{

  printf("\t! welcome to world's bank !");
  printf("\n! Press 1 For Create Account !");
  printf("\n! Press 2 For deposit !");
  printf("\n! press 3 for withdraw Amount   !");
  printf("\n! press 4 for Display Balance   !");
  printf("\n! press 5 for check balance  !");
  printf("\n! press 0 for Exit  !");
}
int main()
{

  int option = 0;
  char name;
  menu();

  do
  {
    printf("\n! please press  any option !");
    scanf("%d", &option);

    if (option == 1) // For Create An Account
    {
      // create();
    }

    else if (option == 2) // For Deposit Money
    {
      // deposit(); 
      printf(" say hello");
      break;
    }
    else if (option == 3) // For Withdraw Your
    {
      // withdraw();
    }
    else if (option == 4) // For display balance
    {
      // display();
    }
    else if (option == 5) // For Check Balance
    {
      // balance();
    }
    else if (option == 0) // For Exit
    {
      // exit();
      break;
    }

    else
    {
      getchar();
      printf("Please Choose Correct Option");
    }
  } while (1);

  return 0;
}

