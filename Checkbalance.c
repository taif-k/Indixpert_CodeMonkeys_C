#include <stdio.h>

// Global variable (Balance store karne ke liye)
float balance = 5000.0;  // Initial balance

// Function to check balance
void checkBalance() {
    printf("\nYour Current Balance: ₹%.2f\n", balance);
}

// Main function
int main() {
    int choice;

    while (1) {//infintive loop,jab tak user "exit"nhi karta
        printf("\n********** Banking System **********\n");
        printf("1. Check Balance\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();// balance dikhane ka function call hoga 
                break;
            case 2:
                printf("\nThank you for using our Banking System!\n");
                return 0;
            default:
                printf("\nInvalid Choice! Please try again.\n");
        }
    }

    return 0;
}