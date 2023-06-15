#include <stdio.h>
#include "bank.h"

void sign_up(double current_bal)
{
  int value;
  char firstname[20];
  char lastname[20];
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

  value = validate_pass(password, confirm_pass);

  if (value == 0)
    {
      menu(firstname, lastname, password);
    }else{
    printf("sorry you can't open an account, check back in 20 mins\n");
  }
  return;
}
