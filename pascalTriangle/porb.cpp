#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    double y;
    cin>>y;
    if((y-x-0.5<0))
    {
        cout<<y;
    }
    else if(x%5!=0)
    {
        cout<<y;
    }
    else
    {
        y=y-x-0.5;
        cout<<y;
    }
}
