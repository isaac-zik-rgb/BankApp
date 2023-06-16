#ifndef BANK_H
#define BANK_H
void sign_up();
int menu(char* firstname, char* lastname, char* password);
int transfer(char* password, char* firstname, char* lastname, double balance);
void deposit(double balance);
int reciept(char* bankNam, char* firstname, char* lastname, long int acctNum, double balance, long int amount, double current_bal, char* acctType);
void checBal(double current_bal);
int validate_pass(char* password, char* confirm_pass);
void login(char* confirm_pass);
#endif
