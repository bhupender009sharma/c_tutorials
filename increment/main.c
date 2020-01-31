#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2;
    a++;
    printf("%d\n",a);

 int l=3,m=4,n;
 n= ++l*m;
 printf("%d\n",n);
// in ++ l INCREMENT IS DONE BERFORE APLLYING THE EQUATION WHILE IN l++ THE INCREMENT IS DONE AFTER APPLYING EQUATION
l=3,m=4,n;
n= l++*m;
 printf(" %d\n",n);

 printf("%d\n",l);

l+=8; // IN THIS WE INCREMENT L 8 TIMES
 printf("%d\n",l);
    return 0;
}
