#include <stdio.h>
#include "bank.h"
#include <string.h>

/**
 * tranfer - transfer money to the sepcified account
 * @password: a pointer to the password variable
 * @acctNum: the account number to be transfer to
 * @bankNam: the name of bank of tge reciepet
 * Return: Return 1 on successful or 0 if not successful
 */

int transfer(char* password,char* firstname, char* lastname, double balance)
{
  char bankNam[10];
  long int acctNum;
  long int amount;
  double current_bal = 0;
  int val;
  char *acctType = "Transfer";
  char tpass[10];
  printf("Enter your password\n");
  scanf("%s", tpass);

  val = strcmp(tpass, password);

  if (val != 0)
    {
      printf("\n Wrong password\n");
      return 0;
    }
 
  printf("Enter Account number\n");
  scanf("%ld", &acctNum);
  printf("Enter Bank name\n");
  scanf("%s",bankNam);
  printf("Enter amount\n");
  scanf("%ld", &amount);
  if (amount <= balance && amount >= 0)
    {
      printf("your Transfer was successful check Reci\
pt.txt file for your reciept\n\n");

      current_bal = balance - amount;

      reciept(bankNam, firstname, lastname, acctNum, balance, amount, current_bal, acctType);
      return 1;
    }
  else
    printf("Insufficient fund please recharge your ac\
count before you try again\n\n");

  return 0;
}
