#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,high,low,mid,key,n,a[100];

    printf("enter the amount of numbers you want to store\n");
    scanf(" %d",&n);

    printf("enter the sorted array entries \n");
    for(i=0;i<n;i++){
        scanf(" %d",&a[i]);
        }

    printf("enter the key you want to search\n");
    scanf("%d",&key);

    while(low<=high){

        mid=(low+high)/2;

    if(key>a[mid]){
                   low=mid+1;
                  }
                  else if(key<a[mid]){
                                      high=mid-1;
                                       }
                                       else{printf("the %d key is at  %d location \n",key,i);
                                              break;
                                             }
                     }

    if(low>high){
         puts("//////////////!!!!!ERROR!!!!\\\\\\\\\\\\\n");
                  }

    return 0;
}
