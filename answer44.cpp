#include<iostream>
using namespace std;
int main()
{
int n,i,f=1;
cout << "Enter the number:";
cin >> n;
for(i=n;i>0;i--)
{
f=f*i;
}
cout << n << "!" <<  " =" << f;
}
