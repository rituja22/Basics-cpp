#include <iostream>
using namespace std;
int main()
{
	int i,a;
		cout<<"Enter value \n";
		cin>>a;
		
	int arr[a];
	float sum = 0;
		cout<<"Enter array elements";
		
	for(i = 0;i<a;i++)
   		cin>>arr[i];
   		
	for(int i = 0;i<a;i++)
    	sum += arr[i];
    	
	cout<<(float)(sum/(float)a);
return 0;
}
