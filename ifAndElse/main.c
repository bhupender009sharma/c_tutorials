#include <stdio.h>
#include <stdlib.h>

int main()
{
      int age;
char gender;
   printf("how old are you?\n");
   scanf(" %d",&age);
// ALWAYS PUT THAT SPACE BETWEEN [scanf(" %d")] as I HAVE DONE HERE B/W " AND %d . THEN IT WILL WORK OR BUGS WILL ENTER
    printf("what is your gender? (m/f) \n");
    scanf(" %c",&gender);

    if(age>=18)

  { printf("rock it!");

       if(gender=='m')
   {
       printf(" dude\n");

   }
   else
   {

    printf(" m'lady\n");
   }
  }

else{
      printf("go kid watch pogo :-U\n");
}

    return 0;
}
