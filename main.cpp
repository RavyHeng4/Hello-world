#include<iostream>
#include<head.h>
using namespace std;
int main(){
BankAccount account1(1234.50 , 250231);
account1.accountinfo();
account1.getBalance();
account1.deposit(200);
account1.withdraw(500);
account1.getBalance();
return 0;
}