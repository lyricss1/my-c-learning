#include <stdio.h>
#include "account.h"

int main() {
    int acc_id;
    double dep1, withd1, dep2;
    scanf("%d",&acc_id);
    scanf("%lf",&dep1);
    scanf("%lf",&withd1);
    scanf("%lf",&dep2);

    Account *new = create_account(acc_id);
    printf("Account %d created\n",acc_id);
    printf("Balance: %.2f\n",get_bal(new));
    int dep = deposit(new, dep1);
    printf("Balance: %.2f\n",get_bal(new));
    int wit = withdraw(new, withd1);
    printf("Balance: %.2f\n",get_bal(new));
    int depp = deposit(new, dep2);
    printf("Balance: %.2f\n",get_bal(new));
    destroy_account(new);
    printf("Account destroyed\n");
    return 0;
}
