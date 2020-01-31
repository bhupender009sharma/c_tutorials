#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int pass[30];
    printf(" enter your password here\n");
    scanf(" %c",pass);

    if(isalpha(pass)){
     if(isupper(pass)){
        if(islower(pass)){
            if(isdigit(pass)){
                printf("your password is good to go\n");
            }else{
            printf("use numbers in your password\n");}
        } else{     printf("use lower case in your password\n");
        }
    } else{ printf("use upper case in your password\n");
    }
} else{     printf("use letters in your password\n");
     }
     return 0;
}   INCOMPLETE HAI!!!!
