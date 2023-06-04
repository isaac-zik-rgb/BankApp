#include <stdio.h>
#include <string.h>
#include "bank.h"
/**
 * menu - Thw menu function of my bank app where users can make different options
 *
 * Return: nothing
 */

int menu(char* firstname, char* lastname, char* password)
{
  char opt;
 double balance = 50000.0;
  while (1)
    {
      printf("\n\nWelcome %s %s  you have recieved %.2lf welcome bonous\n", firstname, lastname, balance);
      printf("please kindly choose an option below\n");
      puts("Menu:");
      puts("(a) Transfer Money");
      puts("(b) Deposit Money");
      puts("(c) Check Balance");
      puts("(d) Quit the program");
      scanf("%s", &opt);
      switch (opt)
	{
	case 'a':
	  puts("(a) Transfer Money\n");
	  transfer(password, firstname, lastname, balance);
	  break;
	case 'b':
	  puts("\n(b) Deposit Money\n");
	  deposit(balance);
	  break;
	case 'c':
	  puts("\n (c) Check Balance\n");
	  checBal(balance);
	  break;
	case 'd':
	  printf("(d) Quit the program\n");
	  return (0);
	defalut:
	  printf("invalid command");
	  break;
	}
    }
  
  return 0;
}
