#include <stdio.h>
#include <stdlib.h>
int main()
{
  char firstName[30];
  char crush[30];
  int numberOfBabies;
  
  printf("what is your name ?");
  scanf("%s", firstName);
  
  printf("who is your crush ?");
 scanf("%s", crush);
  
 printf("number of babies you want to have?");
scanf("%d", &numberOfBabies);

printf("%s and %s will fall in love by next five years and will have %d babies", firstName, crush, numberOfBabies);

return 0;
}
