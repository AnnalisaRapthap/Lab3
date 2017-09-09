#include <iostream>
using namespace std;

int main() 
{
	float mp, mc, mb, mm, mcp,total,per;
	char a;
	cout << "Enter the marks in Physics" << endl;
	cin >> mp;
	cout << "Enter the marks in Chemistry" << endl;
	cin >> mc;
	cout << "Enter the marks in Biology" << endl;
	cin >> mb;
	cout << "Enter the marks in Mathematics" << endl;
	cin >> mm;
	cout << "Enter the marks in Computer" << endl;
	cin >> mcp;
	total=mp+mc+mb+mm+mcp;
	per=(total/500)*100;
	 if(per>=90)
	 {
	         a='A';
	 }
	 else if(per>=80&&per<90)
	  {
	  	a='B';
	}
	else if(per>=70&&per<80)
	{
		a='C';
	 }
	 else if(per>=60 && per<70)
	 {
	 	a='D';
	}
	else if(per>=50&&per<60)
	{
		a='E';
	}
	else if(per>=40&&per<50)
	{
		a='F';
	 }
	 else
	 {
	 	cout << "Fail" << endl;
	 }
	cout << "Percentage=" << per << endl;
	cout << "Grade=" << a;
}
