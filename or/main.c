#include <stdio.h>
#include <stdlib.h>


int main()
{
    //OR IS USED WHEN WE NEED ONLY ONE CONDITION  OUT OF ALL
    char word;
    printf("which is best place to live, inside earth or outside of earth? (i/o)\n");
    scanf(" %c", &word);

    if((word=='i')||(word=='o'))
    {
        printf("wow you are a genius!!");
    }else{
    printf("answer with in or out , you asshole");
    }

    return 0;
}
