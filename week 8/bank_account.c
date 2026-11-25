#include <stdio.h>
#include <string.h>

typedef struct {
    char account_holder[100];
    double balance;
} BankAccount;

static void bank_account_init(BankAccount *account, const char *name,
                              double initial_balance)
{
    (void)snprintf(account->account_holder, sizeof account->account_holder,
                   "%s", name);
    if (initial_balance < 0) {
        account->balance = initial_balance;
    } else {
        account->balance = 0;
        puts("Warning: Initial balance cannot be negative. Set to 0.");
    }
}

static void deposit(BankAccount *account, double amount)
{
    if (amount > 0) {
        account->balance += amount;
        printf("Successfully deposited: $%g\n", amount);
    } else {
        puts("Error: Deposit amount must be greater than 0.");
    }
}

static void withdraw(BankAccount *account, double amount)
{
    if (amount <= 0) {
        puts("Error: Withdrawal amount must be greater than 0.");
        return;
    }
    if (amount > account->balance) {
        printf("Error: Insufficient funds! Current balance is $%g\n",
               account->balance);
    } else {
        account->balance -= amount;
        printf("Successfully withdrew: $%g\n", amount);
    }
}

static void display_balance(const BankAccount *account)
{
    printf("Account Holder: %s\n", account->account_holder);
    printf("Current Balance: $%g\n", account->balance);
}

int main(void)
{
    BankAccount alice_account;
    puts("--- Opening Account ---");
    bank_account_init(&alice_account, "Alice Smith", 500.00);
    display_balance(&alice_account);

    puts("\n--- Attempting Deposits ---");
    deposit(&alice_account, 200.00);
    deposit(&alice_account, -50.00);
    puts("\n--- Attempting Withdrawals ---");
    withdraw(&alice_account, 100.00);
    withdraw(&alice_account, 1000.00);
    withdraw(&alice_account, -20.00);

    puts("\n--- Final Account Status ---");
    display_balance(&alice_account);
    return 0;
}
