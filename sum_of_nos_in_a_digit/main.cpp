 #include <iostream>


using namespace std;
#ifndef ONLINE_JUDGE
freopen(fi, "r", stdin);
freopen(fo, "w", stdout);
#else
// online submission
#endif
int main()
{
    int t,i,n,arr[10],j,b[1000]={0},k,m=0;

    // enter the no. of test cases;
     cin>>t;
     for(i=0;i<t;i++){
        // enter the digits

        cin>> n;
        k=n;
        while(k%10!=0){
            k=k/10;
            m++;
        }
        k=n;
        for(j=0;j<m;j++){
            arr[j]= k%10;
                k =k/10;
        }

        for(j=0;j<m;j++){
            b[i]+=arr[j];
        }

     }
     for(i=0;i<t;i++){
            cout<<b[i]<<endl;
     }
    return 0;
}
