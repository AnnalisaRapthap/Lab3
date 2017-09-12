#include<iostream>
using namespace std;
int main()
{
int n,f;
cout << "Enter the number:"<< endl;
cin >> n;
cout << "The factors of " << n << " are:" ;
for(f=1;f<=n;f++)
{
if(n%f==0)
{
cout << f << ", ";
}
else
{
cout << "";
}
}
}
