include<iostream>
using namespace std;
int main()
{
  int year;
  cout << "Enter the year: ";
  cin  >> year;
 if(year%4==0 && year%100!=0)
{
        cout << "This is a leap year";
}
  else if(year%100==0)
{
         cout << "This is not a leap year";
}
 else if(year%400==0)
{
         cout << "This is a leap year";
}
 else
{
     cout << "This is not a leap year";
}
