#include<stdio.h>
#include<stdlib.h>
#include <string.h>
void savingsAccount(){
long accountNumber;
char firstName[1000];
char lastName[1000];
char address[1000];
float balance;
char accountType[100];



    FILE *fp=fopen("AccountDetails.txt","r+");

printf("Enter your Details to 1.savings account 2.current Account\n");
printf("Enter your firstName:\n");

scanf("%s",&firstName);
fprintf(fp,"%s",firstName);

printf("your details\n");
puts(firstName);


fclose(fp);



}








