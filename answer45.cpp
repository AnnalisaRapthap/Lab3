#include<iostream>
using namespace std;
int main()
{
int a,b,i,hcf;
cout << "Enter two numbers:";
cin >> a;
cin >> b;
//Swapping a with b if b is greater the a.
if(b>a)
{
int tempb=a;
int tempa=b;
b=tempa;
a=tempb;
}
for(i=1;i<=b;i++)
{
if(a%i==0&&b%i==0)
{
hcf=i;
}
}
cout<< "HCF=" << hcf;
}
