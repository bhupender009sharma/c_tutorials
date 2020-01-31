#include <stdio.h>
#include <stdlib.h>

int main()
{
 float marks1;
 float marks2;
 float marks3;

 printf("enter your marks here\n");
 scanf(" %f",&marks1);
 scanf(" %f",&marks2);
 scanf(" %f",&marks3);

float avg;
avg=(marks1+marks2+marks3)/3;
 printf(" your average score is %f\n",avg);
if(avg>=90)
{
    printf("grade: A");
}else if(avg>=80)
{ printf("grade: B");
    }else if(avg>=70)
{ printf("grade: C");
    }else if(avg>=60)
{ printf("grade: D");
    }else if(avg<60)
{ printf("Go study son");
    }


  return 0;
}
