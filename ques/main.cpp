 #include <iostream>
using namespace std;

int main()
{
    float x;
    float y;

    cin>>y;
    cin>>x;

    if(y-x-0.5<0){
          cout<<y;
    }
     else if(x%5!=0 ){
         cout<<y;
    }
    else{
             y=y-x-0.5;
        cout<<y;
    }

    return 0;
}
