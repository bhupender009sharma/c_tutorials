#include <stdio.h>
#include <stdlib.h>

struct node
 {
     int data;
     struct node *left;
     struct node *right;

}

struct node *root = NULL;

void append(){

struct node *temp;

temp=(struct node*)(malloc(sizeof(struct node)));
printf("enter the data in the node");
scanf(" %d",&temp->data);

temp->left=NULL;
temp->right=NULL;

if(root==NULL){

    root=temp;
}
else{
    struct node *p;
    p=root;
    while(p->right!=NULL){
        p=p->right;
    }
    p->right=temp;
    temp->left=p;
}
}
void atbeg(){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));

printf("enter the data you want to enter in the node\n");
scanf("%d",&temp->data);

temp->left=NULL;
temp->right=NULL;

if(root=NULL){
    root=temp;
}
else{
    temp->right=root;
    root->left=temp;
    root=temp;
}
}

void addafter(){
struct node *temp,*p;
int loc,len,i=1 ;

printf("enter the location where you want to add the node\n");
scanf("%d",&loc);

if(loc>len){
    printf("invalid location\n");
}else{
temp=(struct node*)malloc(sizeof(struct node));
puts("enter the node data");
scanf("%d",&temp->data);

p=root;
while(i<loc){
    p=p->right;
}
temp->right=p->right;

}
}

int length(){
struct node *temp=root;
int count=0;

while(temp!=NULL){
    count++;
    temp->temp->right;
}
pritnf("%d is the length of list\n",&count);
}
