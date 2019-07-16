#include<iostream>
using namespace std;
void main()
{
float grade;
cout<<"Enter your Grade:";
cin>>grade;
if(grade>=0&&grade<=59)cout<<"You Grade : F\n";
else if(grade>=60&&grade<=69)cout<<"You Grade : D\n";
else if(grade>=70&&grade<=79)cout<<"You Grade : C\n";
else if(grade>=80&&grade<=89)cout<<"You Grade : B\n";
else {cout<<"You Grade : A\n";}
}