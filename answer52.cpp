#include <iostream>
using namespace std;

int main() 
{
	int n,i,rem,sum;
	cout << "Enter the value of n:" << endl << "The armstrong numbers are:-" << endl;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		int j=i;
		sum=0;
	 while(j!=0)
	 {
	 	rem=j%10;
	 	sum=sum+(rem*rem*rem);
	 	j=j/10;
	 }
	 if(sum==i)
	 cout << i << endl;
	}
	return 0;
}
