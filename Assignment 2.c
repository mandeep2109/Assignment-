#include <stdio.h>

void deposit(float *account);
void withdraw(float *account);
void check_balance(float account);

int main() {
    float account1 = 0.0;
    float account2 = 0.0;
    float account3 = 0.0;

    int choice;
    
    while (1) {
        printf("\n--- Banking Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        int accountNumber;
        switch (choice) {
            case 1:
                printf("Enter account number (1-3): ");
                scanf("%d", &accountNumber);
                if (accountNumber == 1) deposit(&account1);
                else if (accountNumber == 2) deposit(&account2);
                else if (accountNumber == 3) deposit(&account3);
                else printf("Invalid account number!\n");
                break;

            case 2:
                printf("Enter account number (1-3): ");
                scanf("%d", &accountNumber);
                if (accountNumber == 1) withdraw(&account1);
                else if (accountNumber == 2) withdraw(&account2);
                else if (accountNumber == 3) withdraw(&account3);
                else printf("Invalid account number!\n");
                break;

            case 3:
                printf("Enter account number (1-3): ");
                scanf("%d", &accountNumber);
                if (accountNumber == 1) check_balance(account1);
                else if (accountNumber == 2) check_balance(account2);
                else if (accountNumber == 3) check_balance(account3);
                else printf("Invalid account number!\n");
                break;

            case 4:
                printf("Exiting the program. Thank you!\n");
                return 0;

            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }

    return 0;
}

void deposit(float *account) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        *account += amount;
        printf("Deposited %.2f.\n", amount);
    } else {
        printf("Deposit amount must be positive.\n");
    }
}

void withdraw(float *account) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= *account) {
        *account -= amount;
        printf("Withdrew %.2f.\n", amount);
    } else {
        printf("Insufficient balance or invalid amount.\n");
    }
}

void check_balance(float account) {
    printf("Current balance: %.2f\n", account);
}