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
    return NULL;
}

void destroy_account(Account* account) {
    free(account);
}