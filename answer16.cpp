#include<iostream>
using namespace std;
int main()
{
  float a,b,c;
  cout << "Enter the three sides of the triangle:";
  cin >> a;
  cin >> b;
  cin >> c;
  if(a==b && b==c && c==a)
                cout << "The triangle is equilateral";
  else if(a==b || b==c || c==a)
                cout << "The triangle is isosceles";
 else if(a!=b && b!=c && c!=a)
                cout << "The triangle is scalene";
}
        
