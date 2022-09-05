#include<iostream>
using namespace std;
int main()
{
    int num, i, answers;
    cout<<"Enter the number \n";
    cin>>num;
    for(i=1; i<=10; i++)
    {
        answers = num*i;
        cout<<num<<" * "<<i<<" = "<<answers;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
