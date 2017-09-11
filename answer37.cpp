#include <iostream>

using namespace std;

int main() 
	{
           int i,n,p=1;
           cout << "Enter the number:" << endl;
	cin >> n;
            while(n>0)
            {
            	i=n%10;
            	n=n/10;
            	cout << i;
            }
	return 0;
}
