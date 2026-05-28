#include<iostream>
#include<string>
using namespace std;
int main(){
string name;
cout<<"Enter your name:"<<endl;
cin>>name;
string name2 = name.substr(0,3);
name2 = name2.append("_");
cout<<name2;
int length = name.length();
cout<<length;
}