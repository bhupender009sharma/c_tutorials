  #include <iostream>

using namespace std;

int main()
{
    int t=0,n,k,i;
    cin>>n>>k;
    int arr[n];
      if(n<=10000000 || k<=10000000){
         for(i=0;i<n;i++){
             cin>>arr[i];
         }
         for(i=0;i<n;i++){
            if(arr[i]%k==0 && i<=1000000000){
                t++;
            }
     }
        }
     cout<<t<<endl;
    return 0;
}
