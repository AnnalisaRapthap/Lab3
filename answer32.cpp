#include <iostream>
using namespace std;

int main() 
{
	int i,n,f,l;
	cout << "Enter the number :";
	cin >> n;
	i=n;
	while(n!=0)
	{
		f=n;//f acts as a dummy//
		l=i%10;//for the last digit//
		i=i%10;
		n=n/10;
		
	}
	
	cout<<"The first digit="<<f << endl << "The last digit=" <<l;
	return 0;
}
