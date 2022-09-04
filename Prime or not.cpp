#include <iostream>
using namespace std;
int main() 
{
	int x;
	cin>>x;
	int y = 2;

	bool prime = true;
	for(y=2;y!=x;y++)
	{
    	if(x%y == 0)
        	{
            	prime = false;
            	break;
        	}
	}
		if(prime)
			cout<<"It is prime";	
		else 
			cout<<"It is not prime";
return 0;
}
