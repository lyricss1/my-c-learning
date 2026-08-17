#include <stdio.h>
#include "account.h"

int main() {
    int acc_id;
    double dep1, withd1, withd2;
    scanf("%d",&acc_id);
    scanf("%lf",&dep1);
    scanf("%lf",&withd1);
    scanf("%lf",&withd2);
    Account *new = create_account(acc_id);
    printf("Account %d created\n",acc_id);
    printf("Deposit %.2lf: %d\n",dep1,deposit(new, dep1));
    printf("Withdraw %.2lf: %d\n",withd1,withdraw(new,withd1));
    printf("Withdraw %.2lf: %d\n",withd2,withdraw(new,withd2));
    destroy_account(new);
    printf("Account destroyed\n");
    return 0;
}
