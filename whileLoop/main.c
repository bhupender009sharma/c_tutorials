#include <stdio.h>
#include <stdlib.h>

int main()
{ int day=1;
  float amount=0.1;
  while(day<=31){
    printf("day= %d\t amount= $%.2f\n",day,amount);
    amount*=2;
    day++;
  }

    return 0;
}
