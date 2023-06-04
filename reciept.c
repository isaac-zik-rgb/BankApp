#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bank.h"

int reciept(char* bankNam, char* firstname, char* lastname, long int acctNum, double balance, long int amount, double current_bal, char* acctType)
{
  time_t t;
  time(&t);
   FILE *fp;
   fp = fopen("reciept.txt", "w");
   if (fp == NULL)
     {
       printf("can't open file\n");
       return -1;
     }

   fprintf(fp, "Account Reciept\n");
   fprintf(fp, "Sender Name: %s %s\n", firstname, lastname);
   fprintf(fp, "Bank Name: %s\n", bankNam);
   fprintf(fp, "Account Number: %ld\n", acctNum);
   fprintf(fp, "Initial Balance: %.2lf\n", balance);
   fprintf(fp, "Amount: %ld\n", amount);
   fprintf(fp, "Total Bal: %.2f\n", current_bal);
   fprintf(fp, "Transation Type: %s\n", acctType);
   fprintf(fp, "Transation time: %s\n", ctime(&t));
   fprintf(fp, ".....................\n");

   fclose(fp);
   return 0;
}
