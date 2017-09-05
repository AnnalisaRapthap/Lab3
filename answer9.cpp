#include<iostream>
using namespace std;
int main()
{
  char a;
  cout << "Enter a character";
  cin >> a;
  if(a>='a'&&a<='z' || a>='A'&&a<='Z')
{
              cout << "The character is an alphabet";
}
else if(a>='0'&&a<='9')
              cout << "The character is a digit";
else
   cout << "The character is a special character";
}
