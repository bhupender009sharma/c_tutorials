#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{ int rose ='b';

   if( isalpha(rose)){
      printf("%c is a alphabet\n",rose);
   if(isupper(rose)){
    printf("%c is an upper case\n");
   }else{
       printf("%c is an lower case case\n");
   }
    }
   else{
        if(isdigit(rose)){
       printf("%c is a number",rose);
   }else{
   printf("%c wtf is that!!");}
   }


    return 0;
}
