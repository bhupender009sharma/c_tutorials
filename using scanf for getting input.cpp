#include <stdio.h>
#include <stdlib.h>
int main()
{
  char firstName[30];
  char crush[30];
  int numberOfBabies;
  
  printf("what is your name ?\n");
  scanf("%s", firstName);
  
  printf("who is your crush ?\n");
 scanf("%s", crush);
  
 printf("number of babies you want to have?\n");
scanf("%d", &numberOfBabies);

// & should be used in front of variable used, as used above. if not used program will not work.

printf("%s and %s will fall in love by next five days and will have %d babies", firstName, crush, numberOfBabies);

return 0;
}
