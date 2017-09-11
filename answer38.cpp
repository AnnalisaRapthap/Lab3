#include <iostream>

using namespace std;

int main() 
	{
           int n,i,rem,rev=0;
           cout << "Enter the number:" << endl;
	cin >> n;
	i=n;
            while(n!=0)
            {
            	rem=n%10;
            	rev=rev*10+rem;
                        n=n/10;            	
            }
            if(rev==i)
            {
            	cout << "The number is a palindrome" << endl;
            }
            else
            {
            	cout << "The number is not a palindrome";
            }
	return 0;
}
