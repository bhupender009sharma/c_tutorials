#include <stdio.h>
#include <stdlib.h>

void push(void);
void pop(void);
void display(void);
void exit();

  int ele,i;
    int top = -1;
    int stack[100];
     int n;
int main()
{    int ch;
    printf("enter the number of elements you want to enter in the stack\n");
    scanf("%d\n",&n);
while(1){
    printf("1. push\t 2.pop\t 3.display\t 4. exit\n");
    printf("enter your choice in numbers given\n");
    scanf("%d\n",&ch);

    switch(ch){

                case 1 : push() ;
                break;

                case 2: pop();
                break;

                case 3: display();
                break;

                case 4 : exit(1);
                break;
                default : printf("invalid\n");
    }
}
}
   void push(){

   if (top>=n-1){
    printf("the stack is already full\n");
   }else{
         top++;
         printf("enter the element you want to push\n");
         scanf("%d\n",&ele);
         stack[top]=ele;
   }
   }
 void pop(){
            if(top=-1){
                printf("the stack is already empty\n");
            }else{
                    printf("deleting the top value of the stack is %d\n",stack[top]);
                    top--;
            }
 }

 void display(){
                if(top=-1){
                    printf("no element in the stack\n");
                }
                else{
                    for(i=0;i<=top;i++){
                        printf("%d\n",stack[i]);
                    }
                }
 }
