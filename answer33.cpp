#include <iostream>
using namespace std;

int main() 
{
	int i,n,f,l,sum;
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
	
	
	sum=f+l;
	cout << "The sum of first and last digit=" << sum;
	return 0;
}
