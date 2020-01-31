#include <stdio.h>
#include <stdlib.h>

int main()
{
     if(9>0)
     {
         printf("i love messi's game\n");
     }

     if(9<0)
     {
         printf("i love messi's game\n");
     }
     if(9==9)  // HERE == MEANS  TWO VALUES ARE EQUAL, COZ = MEANS ASSIGNING VALUE, LIKE X=9
     {
         printf("i love messi's game\n");
     }
          if(9 != 0 )  // != MEANS NOT EQUAL TO
     {
         printf("i love messi's game\n");
     }
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
   if(gender=='f')
   {

    printf(" m'lady\n");
   }
  }

if(age<18)
{
      printf("go kid watch pogo :-U\n");
}

    return 0;
}
