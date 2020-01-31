  #include <iostream>

using namespace std;

int main()
{
    int i,t;
    int a[1000],b[1000],sum[1000];
   cout<<"no. of test cases\n";
   cin>>t;

   if(t<=1000){
   for(i=0;i<t;i++){

    cout<< "enter the first no.\n";
    cin>>a[i];
    cout<< "enter the second no.\n";
    cin>>b[i];
    if(1<(a && b)<10000){
    sum[i] = a[i] + b[i];
   }
    else{
    break;
        }
        }


    for(i=0;i<t;i++){
    cout<<"the results are\n";
    cout<<sum[i]<<endl;
                    }
   }
   else{
    cout<<"enter t equal or less than 1000\n";

   }
    return 0;
}
