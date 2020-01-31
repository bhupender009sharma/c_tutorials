#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marks=0;
    float numberOfSubject=0;
    float average=0;
    float totalScore=0;

     printf("to stop enter 0\n");
    do{
         printf("numberOfSubject: %f\t average: %.2f\n",numberOfSubject,average);
         printf("enter your marks here\n");
        scanf(" %f",&marks);
         totalScore+=marks;
             numberOfSubject++;
         average= totalScore / numberOfSubject;

    }while(marks != 0);


    return 0;
}
