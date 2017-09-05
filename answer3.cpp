#include <iostream>
using namespace std;

int main() {
	float a;
	cout << "Enter a number:" << endl;
	cin >> a;
	if(a>0)
	{
		cout << "The number is positive";
	}
	else if(a<0)
	{
		cout << "The number is negative";
	
	}
	else if(a==0)
	{
		cout << "The number is zero";
	}
	

	return 0;
}
