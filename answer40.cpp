#include <iostream>
#include<string>
using namespace std;

int main() {
	int n,rd,ld;
	string ones[]={ "Zero","One", "Two", "Three","Four", "Five", "Six", "Seven", "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
	string tens[]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
	cout << "Enter any number from 1-99 " <<endl;
	cin >> n;
	if(n<0)
	{
		cout << "The number is negative" << endl;
		
	}
	else if (n>=0&&n<20)
	{
		cout<< "The number you have entered is=" << ones[n];
	}
	else if(n>=20&&n<100)
	{
		ld=n/10;
		rd=n%10;
		cout<< "The number you have entered=" << tens[ld-2] <<" "<< ones[rd];
	}
	else if(n>99)
	{
		cout << "Your number is greater than 99";
		
	}
	
	return 0;
}
