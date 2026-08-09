#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accountNum;
    char ownerName[30];
    float balance;
    int transactionCount;
};

void depositMoney(struct BankAccount *bank, float summ){
    bank->balance += summ;
    bank->transactionCount++;
    printf("Deposit successful. New balance: %.2f\n",bank->balance);
}

void withdrawMoney(struct BankAccount *bank, float withdr){
    if(withdr>bank->balance){
        printf("Insufficient funds. Current balance: %.2f\n",bank->balance);
    }else{
        bank->balance -= withdr;
        bank->transactionCount++;
        printf("Withdrawal successful. New balance: %.2f\n",bank->balance);
    }
}

void displayAccount(struct BankAccount *bank){
    printf("Account Information:\n");
    printf("Account Number: %d\nOwner: %s\nBalance: %.2f\nTransactions: %d\n",
    bank->accountNum,bank->ownerName,bank->balance,bank->transactionCount);
}

int main() {
    int accountNum;
    char ownerName[30];
    float initialBalance;
    float depositAmount;
    float withdrawAmount;
    
    scanf("%d", &accountNum);
    scanf("%s", ownerName);
    scanf("%f", &initialBalance);
    scanf("%f", &depositAmount);
    scanf("%f", &withdrawAmount);

    struct BankAccount account;
    account.accountNum = accountNum;
    account.balance = initialBalance;
    account.transactionCount = 0;
    strcpy(account.ownerName, ownerName);
    displayAccount(&account);
    depositMoney(&account, depositAmount);
    withdrawMoney(&account, withdrawAmount);
    displayAccount(&account);
    return 0;
}