#include <stdio.h>
#include "bank.h"
/**
 * deposit - deposit money to my bank
 * @balance: the initial balance
 * Return: nothing
 */

void deposit(double balance)
{
  char* accttype = "Deposit";
  double currentBal = 0;
  long int acct;
  double amt;
  char banknam[10];
  printf("\nEnter Bank Name\n");
  scanf("%s", banknam);

  printf("Enter Account Number\n");
  scanf("%ld", &acct);
  printf("Enter ammount\n");
  scanf("%lf", &amt);

  currentBal = amt + balance;
  printf("Your Deposit was successful, check Reciept.txt file for your Reciept\n\n");
  reciept("N/A", "N/A", "N/A", acct, balance, amt, currentBal, accttype);
  return;
}
