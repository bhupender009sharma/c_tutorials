#include <stdio.h>
#include <stdlib.h>

int main()
{
   float hoursStudied;
   float girlsFucked;
   float flirtTime;

   printf("enter your studying time this week\n");
   scanf(" %f",&hoursStudied);
   printf("enter the no. of girls you fucked this month\n");
   scanf(" %f",&girlsFucked);
   printf("enter the time you wasted with girls in flirting this month\n");
   scanf(" %f",&flirtTime);

if((hoursStudied>=10) && (girlsFucked>=10) && (flirtTime<=2))//YOU CAN AS MANY ENTRIES YOU WANT ,BUT ALWAYS SEPARATE THEM WITH &&
   {
       printf("congratulations , now you are a fuckboi!");
   }
   else{
    printf("you r a fucking noob!");
   }

    return 0;
}
