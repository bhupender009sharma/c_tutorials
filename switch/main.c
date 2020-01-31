#include <stdio.h>
#include <stdlib.h>

int main()
{// it is similarly like If Do loop , but not exactly
    char grade;
    printf("enter your grade\n");
    scanf(" %c",&grade);

    switch(grade){

     case 'A' : printf("get out of your room");
                break;
     case 'B' : printf("manage your time");
                break;
     case 'C' : printf("please open your books in a week");
                break;
      case 'D' : printf("shame on you");
                break;
     case 'F' : printf("go find a job for yourself");
                break;
     default  :  printf(" that doesn't make sense");
    }

    return 0;
}
