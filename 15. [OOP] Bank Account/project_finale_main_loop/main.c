#include <stdio.h>
#include "account.h"

int main() {
    int acc_id;
    double dep1, dep2;
    double with1, with2;
    scanf("%d",&acc_id);
    scanf("%lf",&dep1);
    scanf("%lf",&with1);
    scanf("%lf",&dep2);
    scanf("%lf",&with2);

    Account *new = create_account(acc_id);
    printf("Account %d created\n",acc_id);
    printf("Balance: %.2f\n",get_bal(new));

    int dep = deposit(new, dep1);
    if(dep==1){
        printf("Deposited %.2f\n",dep1);
        printf("Balance: %.2f\n",get_bal(new));
    }else{
        printf("Error depositing funds. The amount must be greater than zero\n");
    }

    int wit = withdraw(new, with1);
    if(wit==1){
        printf("Withdrew %.2f\n",with1);
        printf("Balance: %.2f\n",get_bal(new));
    }else{
        printf("Withdrawal failed: insufficient funds\n");
        printf("Balance: %.2f\n",get_bal(new));
    }

    int depp = deposit(new, dep2);
    if(depp==1){
        printf("Deposited %.2f\n",dep2);
        printf("Balance: %.2f\n",get_bal(new));
    }else{
        printf("Error depositing funds. The amount must be greater than zero\n");
    }

    int witt = withdraw(new, with2);
    if(witt==1){
        printf("Withdrew %.2f\n",with2);
        printf("Balance: %.2f\n",get_bal(new));
    }else{
        printf("Withdrawal failed: insufficient funds\n");
        printf("Balance: %.2f\n",get_bal(new));
    }

    destroy_account(new);
    printf("Account %d closed\n",acc_id);
    return 0;
}
