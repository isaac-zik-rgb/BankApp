#include <stdio.h>
#include "bank.h"
#include <string.h>

void login(char* confirm_pass)
{
  char pass_word[20];
  char first_name[20];
  printf("\n Welcome to Castro's bank PLC login page\n\n");
  printf("Enter your firstname\n");
  scanf("%s", first_name);
  
  printf("Enter password\n");
  scanf("%s", pass_word);

  
  if (confirm_pass)
    {
      menu(first_name, "", pass_word);
      return;
    }
    printf("\n in-correct password\n");
  return;
}
