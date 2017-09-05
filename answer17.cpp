#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float a,b,c,d,r1,r2;
  cout << " Enter the coefficients a,b and c";
  cin >> a;
  cin >> b;
  cin >> c;
  d=(b*b)-4*a*c;
  if(d>0)
{
      cout << "Roots are real and different";
      r1=(-b+sqrt(d))/(2*a);
      r2=(-b-sqrt(d))/(2*a);
      cout << "The roots are= " << r1 << " and " << r2;
}
  else if(d<0)
{
      cout << "Roots are imaginary and different";
      r1=-b/(2*a);
      r2=sqrt(d)/(2*a);
  cout << "The roots are= " << r1 << "+ i" << r2 << endl;
      cout << "and " <<r1 << "-i" << r2;
}
  else if(d==0)
{
      cout << "Roots are real and equal";
      r1=(-b)/(2*a);
      cout << "Roots=" << r1;
}
return 0;
}
