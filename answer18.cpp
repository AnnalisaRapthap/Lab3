#include <iostream>
using namespace std;

int main() 
{
	int cp,sp,profit,loss;
	cout << "Enter the Selling price" <<endl;
	cin >> sp;
	cout << "Enter the Cost Price" << endl;
	cin >> cp;
	if(sp>cp)
	{
                  profit=sp-cp;
                  cout << "Profit="<< profit;
	}
	else if(cp>sp)
	{
		loss=cp-sp;
		cout << "Loss=" << loss;
		
	}
	return 0;
}
