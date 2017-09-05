#include <iostream>
using namespace std;

int main() {
	float a,b,max;
	cout << "Enter two numbers:" << endl;
	cin >> a;
	cin >> b;
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	cout << "Maximum=" << max << endl;
	return 0;
}
