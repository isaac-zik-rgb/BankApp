#include <stdio.h>
#include <string.h>
#include "bank.h"
void sign_up(double current_bal)
{
  char firstname[20];
  char lastname[20];
  int i = 3;
  int value;
 char password[10];
  char email[20];
  char confirm_pass[20];
  printf("Welcome to Castro's bank PLC sing-up Registration page\n\n");
  printf("Enter your first name\n");
  scanf("%s", firstname);

  printf("Enter your lastname\n");
  scanf("%s", lastname);

  printf("Enter your Email address\n");
  scanf("%s", email);

  printf("Enter password\n");
  scanf("%s", password);

  printf("confirm password\n");
  scanf("%s", confirm_pass);

  value = strcmp(password, confirm_pass);
  if (value != 0)
    {
      while (i > 0)
	{
	  if (value != 0)
	    {
	      printf("Wrong password: re-enter password, you have %d times remaining\n ", i);
	      scanf("%s", confirm_pass);
	    }
	  if (value == 0)
	    {
	      break;
	    }
	  value = strcmp(password, confirm_pass);	
	  i--;
	  if (i == 0)
	    {
	      printf("sorry you can't create an acoout, come bank in 2\
0minutes\n");
	      break;
	    }
	}
    }
 
  menu(firstname, lastname, password);
  return;
}
