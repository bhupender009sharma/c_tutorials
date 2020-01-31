#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{ char name[12] = "saadhu sant";
// 12 is the no. characters used here, which include 'space' and the double postophe = its value is 1
printf("my name is %s\n", name);

// now it is always not necesssary to put the no. characters or bytees is used by the system

char food[] = "samosa";
printf("the best food is %s\n", food);

food[2] = 'g';
// no. of characters counting starts from zero , thats why it have 2 = m
printf("the best food is %s\n", food);

strcpy(food, "pakoda");
printf("the best food is %s\n", food);


return 0;
	
}


