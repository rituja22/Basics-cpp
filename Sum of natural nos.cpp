#include<iostream>
using namespace std;

int main()
{

	int a,sum=0;
	
	cout << "Enter a number:";
	cin >> a;
	
	for(int i=1;i<=a;i++)
	{
		sum += i;
	}
	cout << "Sum =" << sum;
	return 0;
}
