#include <stdio.h>
#include <string.h>
#include "bank.h"

int validate_pass(char* password, char* confirm_pass)
{
  int limit = 3;
  int compare;
  compare = strcmp(password, confirm_pass);

  if (compare != 0)
    {
      while(limit > 0)
	{
	  printf("Sorry password do not match, try again. you have %d remaining\n", limit);

	  printf("Enter password\n");
	  scanf("%s", confirm_pass);

	  compare = strcmp(password, confirm_pass);

	  if (compare == 0)
	    {
	      return 0;
	    }
	  limit--;
	}
      return 1;
    }
  return 0;
}
