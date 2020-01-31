#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>

void atend(void);
void atbeg(void);
void addafter(void);
int length(void);
void display(void);
void deletion(void);
void exit();
int main(){
    int choice;
 while(1){
    printf("single linked list operations\n");
    printf(" 1. append\n 2.atbeg\n 3.addafter\n 4.length\n 5. display\n 6. delete\n 7.quit\n");
    printf("enter your choice in numbers given\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: atend();
             break;
        case 2: atbeg();
               break;
        case 3: addafter();
            break;
        case 4: length();
            printf("length=%d\n",length());
            break;
        case 5:  display();
            break;
        case 6: deletion();
            break;
        case 7: exit(1);

        default: printf("invalid\n");
    }
 }

}
struct node{
 int data;
 struct node *link;
};

 struct node *root=NULL;

// ADDING A NODE IN THE STARTING OR AT THE END

 void atend(){

 struct node *temp,*p;
 temp = (struct node *)malloc(sizeof(struct node));

 printf("enter the node data\n");
 scanf("%d",&temp->data);

 temp->link=NULL;

 if(root==NULL){
    root=temp;
 }
 else{
    struct node *temp;
    p=root;

    while(p->link!=NULL){
        p = p->link;
    }
        p->link = temp;
 }

 }

void atbeg(){
  struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 printf("enter node data\n");
 scanf("%d",&temp->data);

 temp->link=NULL; // ADDING NULL , IF THERE IS NO NODE IN THE LIST
 if(root==NULL){
 root=temp;
}else{
      temp->link=root;
      root=temp;
    }
}

void addafter(){
struct node *temp,*p;
int loc,len,i=1;
printf("enter the location\n");
scanf("%d",&loc);
len=length();
if(loc>len){
    printf("invalid location\n");
    printf("list have only %d nodes",len);
}
else{
    p=root;
    while(i<loc){
      p =  p->link;
     i++;
    }
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the node data\n");
    scanf("%d",temp->data);
    temp->link = NULL;

    temp->link = p->link;
    p->link = temp;
}
}

int length(){
 struct node *temp;

 temp=root;
 int count = 0;

 while(temp!=NULL){
    count++;
    temp= temp->link;
 }
 return count;
}

void display(){
struct node *temp;
 temp=root;
if(temp==NULL){
    printf("list is empty\n");
}else{
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->link;
    }
   }
}

void deletion(){
    int loc,len;
    len=length();
struct node * temp,*p,*q;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the location of the node you want to delete\n");
scanf("%d",&loc);

if(loc>len){

    printf("invalid location\n");
}
else{
    int i=0;
    while(i<loc-1){
        p=root;
        p=p->link;
        i++;
    }
    q=p->link;
    p->link=q->link;
    q->link=NULL;
}

}



