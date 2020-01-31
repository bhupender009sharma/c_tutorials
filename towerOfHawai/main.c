#include <stdio.h>
#include <stdlib.h>

void TOH(int n ,char beg,char aux,char end);

 int main(){
  int n;
printf("enter the number of dics you wanna to solve for\n");
scanf(" %d",&n);
printf("the sequence of the moves to solve are :\n");
TOH(n,'A','B','C');
return 0;
}

void TOH(int n ,char beg,char aux,char end)
{
    if(n>=1){
             TOH(n-1,beg,end,aux);
             printf("%c to %c\n",beg,end);
             TOH(n-1,aux,beg,end);

    }

}
