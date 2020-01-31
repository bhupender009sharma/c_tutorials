#include <stdio.h>
#include <stdlib.h>

int main()
{
   char lastName[40];
   printf("what is your name?\n");
   scanf(" %s",lastName);

   (lastName[0]<'M')? printf("real madrid"): printf("Barcelona") ;

    return 0;
}
