#include <iostream>
#include<cmath>
using namespace std;

int main() 
	{
           int i,n,sum=0;
           cout << "Enter the number:" << endl;
	cin >> n;
	while(n>0)
	{
	     	
                 i=n%10;
                 sum=sum+i;
                 n=n/10;         
		
	}
	cout << "sum of the digits=" << sum;
	
	return 0;
}
