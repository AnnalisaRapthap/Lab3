#include<iostream>
using namespace std;
int main()
{
  int amt, a,b,c,d,e,f,g,h,i;
  cout << "Enter the amount in rupees";
  cin >> amt;
  while(amt>=2000)
{
                a=amt/2000;
                amt=amt%2000;
                cout << "The number of 2000 rupees notes=" << a <<endl;

                break;
}
  while(amt>=500)
{
                b=amt/500;
                amt=amt%500;
               cout << "The number of 500 rupees notes=" << b <<endl;

               break;
}
  while(amt>=100)
{
                c=amt/100;
                amt=amt%100;
                cout << "The number of 100 rupees notes=" << c <<endl;

                break;
}

  while(amt>=50)
{
d=amt/50;
               amt=amt%50;
               cout << "The number of 50 rupees notes=" << d <<endl;

               break;
}
  while(amt>=20)
{
                e=amt/20;
                amt=amt%20;
                cout << "The number of 20 rupees notes=" << e <<endl;

                break;
}
  while(amt>=10)
{
                f=amt/10;
                amt=amt%10;
               cout << "The number of 10 rupees notes=" << f <<endl;

                break;
}
  while(amt>=5)
{
                 g=amt/5;
                 amt=amt%5;
                 cout << "The number of 5 rupees notes=" << g <<endl;

                 break;
}
  while(amt>=2)
{
                 h=amt/2;
                 amt=amt%2;
                  cout << "The number of 2 rupees notes=" << h <<endl;

                 break;
}
  while(amt>=1)
{
                  i=amt/1;
                  amt=amt%1;
                  cout << "The number of 1 rupees notes=" << i <<endl;

                  break;
}
}
