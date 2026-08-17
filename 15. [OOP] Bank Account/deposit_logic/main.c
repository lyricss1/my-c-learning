#include <stdio.h>
#include "account.h"

int main() {
    int acc_id;
    double dep1, dep2;
    scanf("%d",&acc_id);
    scanf("%lf",&dep1);
    scanf("%lf",&dep2);
    Account *new = create_account(acc_id);
    printf("Account %d created\n",acc_id);
    int depp2 = deposit(new, dep2);
    printf("Deposit %.2lf: %d\n",dep2,depp2);
    int depp1 = deposit(new, dep1);
    printf("Deposit %.2lf: %d\n",dep1,depp1);
    destroy_account(new);
    printf("Account destroyed\n");
    return 0;
}
