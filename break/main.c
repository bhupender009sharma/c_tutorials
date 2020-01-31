#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,times;

    printf("how many times loop should loop\n");
        scanf(" %d",&times);

    for(a=1;a<=10;a++){
            printf("\n%d\n",a);

    if(times==a){
        break;
    }
    }
    return 0;
}
