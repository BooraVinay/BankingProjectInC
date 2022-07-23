#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct accountDetails {

    long accountNumber;
    char firstName[1000];
    char lastName[1000];
    char address[1000];
    float balance;
    char accountType[100];

} account;

void accountOpening() {

    int userCase;
    //Pseudo random number generator
    time_t t;
    /* Intializes random number generator */
    srand((unsigned) time(&t));

    //Structure object
    account acc;

    printf("Enter your Details to 1.savings account 2.current Account\n");
    scanf("%d", &userCase);

    if (userCase == 1 || 2)
    {

        FILE *fp=fopen("AccountDetails.txt","a+");
        fflush(stdin);
        //Assigning auto generated number as account number
        acc.accountNumber = rand() % 9999;

        printf("Enter your firstName: \n");
        gets(acc.firstName);
        printf("Enter your lastname: \n");
        gets(acc.lastName);
        printf("Enter your address: \n");
        gets(acc.address);
        printf("Enter your Balance: \n");
        scanf("%f", &acc.balance);
        printf("Enter your Account Type: \n");
        gets(acc.accountType);

        fprintf(fp,"%s", acc.accountNumber);
        fprintf(fp,"%s", acc.firstName);
        fprintf(fp,"%s", acc.lastName);
        fprintf(fp,"%s", acc.address);
        fprintf(fp,"%s", acc.balance);
        fprintf(fp,"%s", acc.accountType);    

        printf("%s","Your Account details \n");
        fscanf(fp, "%d", &acc.accountNumber);
        printf("Account Number : %d", acc.accountNumber);
        // printf("First Name : %d", acc.firstName);
        // printf("Last Name : %d", acc.lastName);
        // printf("Adress : %d", acc.address);
        // printf("Balance : %d", acc.balance);
        // printf("Account Type : %d", acc.accountType);

        fclose(fp);

    } else {
        printf("Invalid Input");
        accountOpening();
    }

}








