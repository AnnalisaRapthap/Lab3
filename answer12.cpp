#include<iostream>
using namespace std;
int main()
{
  int month;
  cout << "Enter Month number: ";
  cin >> month;
  if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
{
          cout << "Number of days in that month=31";
}
else if(month==2)
{
         cout << "Number of days in that month=28";
}
else
{
         cout << "Number of days in that month=30";
}
}
