 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int space,i,a,b,k=1;

    printf("enter the no. of rows you want\n");
    scanf(" %d",&a);

    for(i=1;i<=a;i++){
    for(space=1;space<=a-i;space++){
        printf("  ");}
    for(b=1;b<=i;b++){
    if(b<=(i/2)){   k+=b;
        printf("%d   ",k);}

        else{
            b+=k;
              printf("%d   ",k);

    }
    }
    printf("\n");
    }



    return 0;
}

