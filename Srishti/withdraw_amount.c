#include <stdio.h>

void withdraw(); // declaration

int main()// int main sabse pahle chalega  
{
    withdraw(); // calling 
    return 0;
}

void withdraw() // definition
{
    int balance = 500;   // Initial balance 500 set kar diya  
    int withdrawAmount;  //ek variable bnega jo user se input lega   
    
    printf("Enter the amount to withdraw:");  //User se amount input lene ka message
    scanf("%d", &withdrawAmount);    // ka use karke user ki input value store hoti hia 

    if (withdrawAmount > balance)
    {
        printf("Insufficient Amount");// Agar blance kam hai toh error message print hoga
    }
    else if (withdrawAmount % 100 != 0) //check kar rha hai ki amoumt 100 ka multiple hai ki nhi                        
    {
        printf("Amount not multiple of 100");//agar 100 ka multiple nahi hai toh error message print hoga 
    }
    else
    {
        balance -= withdrawAmount;
        printf("Withdrawal successful!\n");
        printf("Total Balance: %d", balance);
    }
<<<<<<< HEAD:Srishti/withdraw_amount.c
    return 0;
}
=======
    
}
>>>>>>> c00922bda80ad4caf8b53dbe32738c80afafef7d:Srishti/withdraw.c
