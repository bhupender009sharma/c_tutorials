#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,temp,a[20],sorted,n;

    printf("enter the no. arrays you want to be sorted\n");
    scanf(" %d",&n);
    printf("enter the arrays you want to be sorted\n");
    for(i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    while(1){
        sorted=0;
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                 temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                sorted=1;
            }
        }
        if(sorted==0){
           break;
        }
    }printf("sorted list\n");
        for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
