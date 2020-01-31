#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
     /* TO ROUND UP, USE KEYWORD ceil
      TO ROUND down, USE KEYWORD floor */

      float me=3.23468;
      float laugh=9.4;
      float loudly= 9.6;

      printf("%.2f\n",floor(me));
      printf("%.2f\n",floor(laugh));
      printf("%.2f\n",floor(loudly));

       printf("%.2f\n", ceil(me));
      printf("%.2f\n",ceil(laugh));
      printf("%.2f\n",ceil(loudly));



    return 0;
}
