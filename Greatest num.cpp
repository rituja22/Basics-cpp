#include<iostream>
using namespace std;
int main()
{
    int a, b, c, greatest;
    cout<<"Enter the Three Numbers: \n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(b>c)
            greatest = a;
        else
        {
            if(c>a)
                greatest = c;
            else
                greatest = a;
        }
    }
    else
    {
        if(b>c)
            greatest = b;
        else
            greatest = c;
    }
    cout<<"\n Greatest Number = \n"<<greatest;
    cout<<endl;
    return 0;
}
