#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
  char feel[90]=" hey";

  strcat(feel," bhupi. ");
  printf("%s\n",feel);

strcat(feel,"how you feeling?");
printf("%s\n",feel);

strcpy(feel,"I'm good man");
printf("%s\n",feel);

    return 0;
}
