
#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 5000, amount;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if (pin == 1234) {
        printf("Correct PIN!\n");

        do {
            printf("\n--- ATM MENU ---\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Balance = Rs. %.2f\n", balance);
                    break;

                case 2:
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);

                    if (amount > 0) {
                        balance += amount;
                        printf("Deposit successful!\n");
                    } else {
                        printf("Invalid amount!\n");
                    }
                    break;

                case 3:
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);

                    if (amount > 0 && amount <= balance) {
                        balance -= amount;
                        printf("Please collect your cash.\n");
                    } else {
                        printf("Invalid amount or insufficient balance!\n");
                    }
                    break;

                case 4:
                    printf("Thank you for using ATM!\n");
                    break;

                default:
                    printf("Invalid choice!\n");
            }

        } while (choice != 4);

    } else {
        printf("Incorrect PIN!\n");
    }

    return 0;
}
