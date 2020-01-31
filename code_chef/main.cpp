#include <iostream>

using namespace std;

int main()
{
   int a[10000000],n,i,j,k=0;



   for(i=2;i<=600851475143;i++){

    for(j=2;j<=i;j++){
      if(i%j==0){
          break;
      }
      else{
        continue;}
    }
      if(i==j){
        a[k]=j;
        k++;
      }
      else{
        continue;}
   }

   for(i=0;i<k;i++){
    cout<<a[i];
   }

    return 0;
}
