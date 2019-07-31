#include<iostream>
#include<string>
using namespace std;
void main()
{
	
	char ch;
	string use,pass,use1,pass1;
	do{
		cout<<"////////////////////MENU/////////////////////////\n";
	cout<<"1.Register\n";
	cout<<"2.Login\n";
	cout<<"Q.Exit Program\n\n";
	cout<<"Enter Menu:";
	cin>>ch;
	if(ch=='1')
		{
		cout<<"****************Register******************\n";
		cout<<"Input UserNamr:";
		 cin>>use;
		cout<<"Input Password:";
	    cin>>pass;
		}
	else if (ch=='2'){{
		cout<<"****************Login******************\n";
		cout<<"Input UserNamr:";
		cin>>use1;
		cout<<"Input Password:";
		cin>>pass1;

				}
	if(use==use1&&pass1==pass)
	{cout<<"Username or Password Correct ^___________^\n";}
	else cout<<"!!!!!!!!!!!Username and Password incorrect Please Try Again!!!!!!!!!!!!\n";
	}
	}
	while (ch!='Q');
	cout<<"Exit Program.......\n";
	
}


