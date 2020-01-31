#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1999;
    int b=99;

    printf("%d\n",a/b);
// INT DIVIDING BY INT ALWAYS GIVE INT AND GIVES A ROUND OFF AS A ANSWER

    float c=99;
    float d=8;
    printf("%f\n",c/d);
// FOR GETTING ACCURATE WE SHOULD USE FLOAT
// AS DIVIDING FLOAT BY FLOAT GIVES FLOAT AS ANSWER

//  % SYMBOL IS USED FOR GETTING REMAINDER

     printf("%d\n",a%b);

    return 0;
}
