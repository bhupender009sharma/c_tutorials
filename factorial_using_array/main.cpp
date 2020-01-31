  #include <iostream>

using namespace std;
int g,a[200],i,t,n,j,k,l=1,temp,m;
void fact();

int main()
{    cin>>t;
int d;
    for(d=0;d<t;d++){
     cin>>n;
    }
  for(d=0;d<t;d++){
    void fact();
  }
    return 0;
}


void fact(){


    // enter the no. of test cases

    for(i=0;i<t;i++){
        // enter the no.

        k=n;
        while(k%10==0){
            k=k/10;
            l++;
        }
        k=n;
       for(j=0;j<l;j++){
        temp=k%10;
        a[j]=temp;
        k=k/10;
       }
    for(g=n-1;g>=2;g--){
            int carry=0;
     for(j=0;j<l;j++){

        m= a[j]*g+carry;
        carry=m/10;
        a[j]=m%10;
     }
     while(carry){

        a[l]=carry%10;
        l++;
        carry/=10;
     }
    }  for(j=l-1;j>=0;j--)
        cout<<a[j];
        cout<<endl;
    }

}


