#include<stdio.h>
#include <stdlib.h>
#include "Account.c"

int main(){

    int userCase;
    printf("Welcome to ABC Banking!!!\n Choose the below options to proceed further.\n 1. Savings Account Opening\n 2. Current Account Opening\n 3. Interest rate calculation\n 4. Check balance. \n 5. Print Mini Statement\n 6. Withdrawl \n 7.Deposit. \n 8.Exit.\n");
    scanf("%d",&userCase);

    switch(userCase){
    case 1:
        accountOpening();
     break;
     case 2:
        accountOpening();
     break;
     case 3:
     break;
     case 4:
     break;
     case 5:
     break;
     case 6:
     break;
     case 7:
     break;
    
     default:
     exit(0);
    }


}