#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,first=0,second=1,next;

    printf("enter the terms upto which you want fibonacci series\n");
    scanf(" %d",&a);

    for(i=0;i<a;i++){
        if(i<=1){
             next=i;
        }else{
        next=first+second;
        first=second;
        second=next;
              }
              printf("%d\n",next);

    }



    return 0;
}
