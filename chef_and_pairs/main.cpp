#include <iostream>

using namespace std;

int main()
{
 int t,n,i,j,k,number;

 cin>>t;
 int b[t];

 for(i=0;i<t;i++){
      int o=0,e=0;
    cin>>n;
    int a[n];
    cin>>number;
    for(j=0;j<n;j++){
       a[j]= number%10;
      number= number/10;
        }
    for(j=0;j<n;j++){
    if(a[j]%2==0){
        e++;

    }else{
        o++;
       }
    }
    if(e>o){

        b[i]= e;
    }else{
       b[i] = o;
    }
 }
for(i=0;i<t;i++){
    cout<<b[i]<<endl;
}
    return 0;
}
