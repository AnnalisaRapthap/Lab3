#include <iostream>
#include<cmath>
using namespace std;

int main() 
	{
           int i,n,p=1;
           cout << "Enter the number:" << endl;
	cin >> n;
	while(n>0)
	{
	     	
                 i=n%10;
                 p=p*i;
                 n=n/10;         
		
	}
	cout << "Product of the digits=" << p;
	
	return 0;
}
