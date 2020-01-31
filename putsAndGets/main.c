#include <stdio.h>
#include <stdlib.h>
#include<strings.h>
#include<ctype.h>
#include<math.h>

int main()
{
    char friendsName[30];
    char favFood[50];
    char sentence[90]= "";

    puts("what is your friends name?");
    gets(friendsName);

    puts("whats your friends fav food??");
    gets(favFood);

    strcat(sentence,friendsName);
    strcat(sentence," loves to eat ");
    strcat(sentence, favFood);

    puts(sentence);

    return 0;
}
