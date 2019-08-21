#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int checknum();
int i=1,num1,n;
void main()
{
	srand(time(NULL));
	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	num1=1+rand()%10,n;
	do
	{
		cout<<"Guess the number(1-10) :";
		cin>>n; 
		checknum();
		i++;
	}
	while(n!=num1);
}
int checknum()
{
		if(n==num1)
		{cout<<"Congratulations!\n";
		cout<<"The secret number is :"<<num1<<endl;
		cout<<"You made "<<i<<"guesses"<<endl;}
		if(n>num1){cout<<"The secret number is lower\n";}
		if(n<num1){cout<<"The secret number is higher\n";}
		return(0);
}
