#include <stdio.h>
#include <stdlib.h>

int main()
{   // in this we will convert the int into float or vice versa . for temporary changes

    float samosaProfit;
    int numberOfSamosa = 200 ,cost = 10, timeWorked= 9;

    samosaProfit= (cost*numberOfSamosa)/timeWorked ;

    printf("samosaProfit: %.2f",samosaProfit);
// THIS IS GIVING US THE ROUND OFF VALIE
//SO TO GET EXACT VALUE WE HAVE TO CONVERT ALL ENTRIES INTO FLOAT VALUES

 samosaProfit= ((float)cost*(float)numberOfSamosa)/(float)timeWorked ;

    printf("\nsamosaProfit: %.2f",samosaProfit);

    return 0;
}
