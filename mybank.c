#include <stdio.h>
#include "bank.h"

int main(void)
{
  int i = 3;
  int option;
  printf("Welcome to Castro's bank PLC\n\n");

  while (i > 0)
    {
      printf("Please Enter 1 to log-in or 0 to sign-up ");
      scanf("%d", &option);
      if (option == 1)
	{
	  /** call log-in functions*/
	  login("");
	  break;
	}
      if (option == 0)
	{
	  /**call sign-up function*/
	  sign_up();
	  break;
	}
      printf("Invalid command, try again\n");
      i--;
    }
  if (i == 0)
    {
      printf("sorry you are blocked\n");
    }
  return 0;
}
