#include<iostream>
#include<string>
using namespace std;
void main()
{
	float c,f;
cout << "Enter Celsius temperature: ";
	cin >> c;
	f = c * 9 / 5 + 32;
	cout  <<"\n"<<"Temperature at this time :"<< "\n"<< " Celsius : " <<c<<"\n"<< " Fahrenheit :"<<f;
	cout <<"\n"<< ((f>70) == 0 ? " Now weather in Thailand is COOL" : " Now weather in Thailand is HOT\n") << endl;
	
}