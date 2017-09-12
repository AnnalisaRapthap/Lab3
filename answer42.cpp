#include<iostream>
using namespace std;
int main()
{
int a,b,c,p=1;
cout << "Enter a number:" << endl;
cin >> a;
cout << "Enter the exponent:" << endl;
cin >> b;
for(c==1;c<b;c++)
{
p=p*a;
}
cout << a << "^" << b << "=" << p;
}
