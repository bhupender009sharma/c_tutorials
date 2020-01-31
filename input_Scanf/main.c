#include <stdio.h>
#include <stdlib.h>

int main()
{  // USE scanf FOR GETTING INPUT
    char yourName[30];
    char crush[30];
    int numberOfBabies ;
// GIVE THE NO. OF BYTES OR THE PROGRAM WILL NOT WORK
    printf("what is your name?\n");
    scanf("%s",yourName);

    printf("what is your crush name?\n");
    scanf("%s",crush);

        printf("nummber of baies you will have\n");
        scanf("%d", &numberOfBabies);
//ALWAYS USE & SIGN BEFORE ANY VARIABLE FOR ANY CONSTANT
        printf("%s and %s are in love and will have %d babies",yourName, crush,numberOfBabies);


    return 0;
}
