#include<iostream>
using namespace std;
int main()
{
  char x;
  cout << "Enter a character:";
  cin >> x;
  if((x>='a' &&  x<='z') || (x>='A' && x<='Z'))
{
                  cout << "The character is an alphabet";
}
else
   cout << "The character is not an alphabet";
}
