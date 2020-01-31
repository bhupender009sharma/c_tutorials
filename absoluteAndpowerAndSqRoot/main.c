#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
     int DOB;
     int currentYear;
     int age;

     printf("entet your dob\n");
     scanf(" %d",&DOB);

     printf("enter current year\n");
     scanf("%d",&currentYear);

     age= currentYear-DOB;
     printf("tour age is %d\n",age);

     age=abs(age);
printf("tour age is %d\n",age);

// calculating power and sqroot

 printf("%f\n",pow(2,8));  // HERE 2 IS BASE AND 8 IS ITS POWER
 printf("%f\n",sqrt(234.2332));

    return 0;
}
