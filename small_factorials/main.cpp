#include <iostream>

using namespace std;

int main()
{
    int i,a,b,j,k=1;
     // enter the no. of test cases
     cin>>i;

    for(a=0;a<i;a++){
        // enter the no. whose factorial should be calculated
        cin>>b;
        for(j=1;j<b+1;j++){
            k=k*j;
        }
        cout<<k<<endl;
    }

    return 0;
}
