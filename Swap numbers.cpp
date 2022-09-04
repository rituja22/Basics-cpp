
#include <iostream>
using namespace std;
	int main() 
{
	int a;
	int b;
	cout<<"Enter value of a \n";
	cin>> a;
	cout<<"Enter value of b \n";
	cin>> b;
	
	cout<<"unswapped values \n";
	cout<<a<<" "<<b<<endl;
	int temp = a;
	a = b;
	b = temp;
	cout<<"Swapped values \n";
	cout<<a<<" "<<b<<endl;
return 0;
}
