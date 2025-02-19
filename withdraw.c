#include <stdio.h>

int main() {
    int balance = 500; // Initial balance
    int withdrawAmount;

    
    printf("Enter the amount to withdraw:");
    scanf("%d", &withdrawAmount);

    if (withdrawAmount > balance) {
        printf("Insufficient funds! Withdrawal failed.\n");
    }
    else if (balance % withdrawAmount == 0)
    {
        printf(" The withdrawal amount divides the balance exactly!\n");
    }
    
    else {
        balance -= withdrawAmount;
        printf("Withdrawal successful!\n");
        printf("Your new balance is: %d\n", balance);
    }

    printf("Thank you for using our service!\n");
    return 0;
}