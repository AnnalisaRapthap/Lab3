#include<iostream>
using namespace std;
int main()
{
int n,i,rem,sum=0;
cout << "Enter the number:" ;
cin >> n;
i=n;
while(n!=0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(sum==i)
{
cout << "The number is an Armstrong number" << endl;
}
else
{
cout << "The number is not an Armstrong number" ;
}
}
