#include<iostream>
#include<head.h>
using namespace std;
BankAccount::BankAccount(){
account_num=0;
balance=0;  
}
BankAccount::BankAccount(double balance, int num){
account_num=num;
balance=balance;
}
void BankAccount::accountinfo(){
    cout<<"Account number: "<<account_num<<endl;
}
void BankAccount::getBalance(){
    cout<<"Your balance: "<<balance;
}
int BankAccount::deposit(int money){
int balance = balance+money;
}
int BankAccount::withdraw(int money){
int balance = balance-money;
}