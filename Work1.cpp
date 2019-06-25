#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	float GPA=3.99;
	int score1=86,score2=89;
	char Grade='A';
	string name="Piraset Janjit";

	cout<<"************************************************************"<<endl;
	cout<<"*   My name is :"<<name<<endl;
	cout<<"*   Score1     :"<<score1<<"point"<<endl; 
	cout<<"*   Score2     :"<<score2<<"point"<<endl;
	cout<<"*   Total      :"<<score1+score2<<"point"<<endl;
	cout<<"*   Your Grade :"<<Grade<<endl;                     
	cout<<"*   GPA        :"<<GPA<<endl;
	cout<<"************************************************************"<<endl;
	return(0);
}