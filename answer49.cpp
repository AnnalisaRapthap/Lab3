#include<iostream>
using namespace std;
int main()
{
int n,i,j,c,s=0;
cout << "Enter the value of n:";
cin >> n;
for(i=1;i<=n;i++)
{
c=0;
for(j=1;j<=i;j++)
{
  if(i%j==0)

         c++;

}
if(c==2)
{
s=s+i;
}
}
cout << "The sum of all the prime numbers from 1 to " << n << " is=" << s;
}
