#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
     int * pointsArray;
     int i, a,b=1;

     printf("enter the no. whose factorial you want to calculate\n");
     scanf(" %d",&a);

     pointsArray =(int *)malloc(a * sizeof(int));

       for(i=1;i<=a;i++){
        pointsArray = (pointsArray * i);
     }

     printf("%d",pointsArray);


    return 0;
}
