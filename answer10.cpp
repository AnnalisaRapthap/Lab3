#include<iostream>
using namespace std;
int main()
{
  char a;
  cout << "Enter an Alphabet in lower or upper case: ";
  cin >> a;
  if(a>='a'&&a<='z')
            cout << "The alphabet is in lower case";
  else if(a>='A'&& a<'Z')
            cout << "The alphabet is in Upper case";
  else
     cout << "Not an alphabet";
}
