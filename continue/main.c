#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jerseyNum = 1;

    do{
        if (jerseyNum==9|| jerseyNum==11){

            jerseyNum++;
            continue;
        }
        printf("%d can be your jersey number\n",jerseyNum);
          jerseyNum++;
        } while(jerseyNum<=15);


    return 0;
}
