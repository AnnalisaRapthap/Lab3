#include<iostream>
using namespace std;
int main()
{
  float a,b,c;
  cout << "Enter the three sides of the triangle:";
  cin >> a;
  cin >> b;
  cin >> c;
  if(a+b>c&& b+c>a && c+a>b)
               cout <<" The triangle is valid";
 else
    cout << "The triangle is not valid";
}
