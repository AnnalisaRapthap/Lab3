#include<iostream>
using namespace std;
int main()
{
  float a,b,c,sum;
  cout << "Enter the first angle of the triangle:";
  cin >> a;
  cout << "Enter the second angle of the triangle:";
  cin >> b;
  cout << "Enter the third angle of the triangle:";
  cin >> c;
  sum=a+b+c;
  if(sum==180)
          cout << "The triangle is valid";
  else
       cout << "The triangle is not valid";
}
