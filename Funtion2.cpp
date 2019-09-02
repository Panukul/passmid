#include<iostream>
#include<string>
using namespace std;
int update_balance(string command,float dollars,float &balance);
void main()
{
	cout<<"Exit with 0\n";
	string a;
	float b,c=10000;
	cout<<"Your balance = "<<c<<endl;
	do
	{
		cout<<"Input command(1 or withdraw, 2 deposit):";
		cin>>a;
		cout<<"Input amout : ";
		cin>>b;
		update_balance(a,b,c);
		cout<<"Your balance : "<<c<<endl;
	}while(a!="0");
}
int update_balance(string command,float dollars,float &balance)
{
	if(command=="1")
	{
		balance=balance-dollars;
	}
	else if(command=="2")
	{
		balance=balance+dollars;
	}
	return(command,dollars,balance);
}