#include <stdio.h>
#include "account.h"

int main() {
    int acc_id;
    scanf("%d",&acc_id);
    Account *new = create_account(acc_id);
    printf("Account %d created\n",acc_id);
    destroy_account(new);
    printf("Account destroyed\n");
    return 0;
}
