#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a;
    long long int b=1;
     printf("enter the no. whose factorial you want to calculate\n");
     scanf(" %d",&a);

     for(i=1;i<=a;i++){
        b=b*i;
     }
     printf(" %d",b);



    return 0;
}
