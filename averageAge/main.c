#include <stdio.h>
#include <stdlib.h>

int main()
{

  float age1,age2,myAge,average;
  age1 = age2 = 20.0;

  printf("what is your age?\n");
  scanf("%f\n",&myAge);  //NEVER EVER FORGOT TO ASSIGN '&' SIGN BEFORE ANY CONSTANT VARIABLE IN scanf

  average=(age1 + age2 + myAge)/3;
  printf("the avg age is %f\n",average);

    return 0;

}
