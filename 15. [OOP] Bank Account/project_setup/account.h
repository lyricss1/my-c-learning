#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct Account Account;
Account *create_account(int id);
void destroy_account(Account *acc);

#endif
