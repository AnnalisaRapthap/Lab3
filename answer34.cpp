#include <iostream>
#include<cmath>
using namespace std;

int main() 
	{
           int i,n,digits=0,l,f,a,b,d,newnumber;
           cout << "Enter the number:" << endl;
	cin >> n;
	i=n;
	while(n>0)
	{
                 n=n/10;
               
                
	   digits++;         
		
	}
	
	d=digits-1;
	l=i%10;
	f=i/pow(10,d);
	a=i%(int)pow(10,d);
	b=a-l;
	newnumber=l*pow(10,d)+b+f;
	cout<< "The new number is= " << newnumber;
	return 0;
}
