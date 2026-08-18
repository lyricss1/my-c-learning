#include <stdlib.h>
#include "account.h"

struct Account {
    int id;
    double balance;
};

Account* create_account(int account_id) {
    Account *p = malloc(sizeof(Account));
    p->id = account_id;
    p->balance = 0.0;
    return p;
}

void destroy_account(Account* account) {
    free(account);
}

int deposit(Account *acc, double smth){
    if(smth>0){
        acc->balance += smth;
        return 1;
    }else{return 0;}
}
int withdraw(Account *acc, double withd){
    if(withd>0&&acc->balance>=withd){
        acc->balance -= withd;
        return 1;
    }else{return 0;}
}
double get_bal(const Account *acc){
    return acc->balance;
}