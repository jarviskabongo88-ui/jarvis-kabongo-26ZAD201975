#include <stdio.h>

typedef struct {
    double balance;
} BadBankAccount;

typedef struct {
    double balance;
} GoodBankAccount;

static void good_account_deposit(GoodBankAccount *account, double amount)
{
    if (amount > 0) {
        account->balance += amount;
    }
}

static double good_account_get_balance(const GoodBankAccount *account)
{
    return account->balance;
}

int main(void)
{
    BadBankAccount bad_account = {0.0};
    GoodBankAccount good_account = {0.0};

    puts("--- Testing BAD Design ---");
    bad_account.balance = -5000;
    printf("Bad Account Balance: %.0f\n", bad_account.balance);

    puts("\n--- Testing GOOD Design ---");
    good_account_deposit(&good_account, 1000);
    printf("Good Account Balance: %.0f\n",
           good_account_get_balance(&good_account));
    return 0;
}
