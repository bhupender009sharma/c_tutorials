#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,a,b;

    printf("enter the no. of rows you want\n");
    scanf(" %d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }


    return 0;
}

