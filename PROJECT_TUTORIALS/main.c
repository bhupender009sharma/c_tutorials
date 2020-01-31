#include <stdio.h>
#include <stdlib.h>

int main()
{ /* YOU CANNOT NAME A VARIABLE STARTING BY A NO. OR UNDERSORE
     YOU ALSO CANNOT NAME YOUR VARIABLE BY A FUNCTION NAME LIKE- PRINTF ,INT MAIN ,
     ETC
     YOU CANNOT GIVE SPACEBAR BETWEEN YOUR VARIABLES NAME */
    int age;
    int currrntYear;
    int birthYear;

    currrntYear=2018;
    birthYear=1999;

    age = currrntYear-birthYear;
    printf(" I am %d years old", age);

   return 0;
}
