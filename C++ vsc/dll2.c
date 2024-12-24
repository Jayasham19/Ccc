#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node {
 int info;
 struct node *rlink;
 struct node *llink;
 };
 typedef struct node * NODE;
 NODE first =NULL;
  
  NODE insert_front(NODE first){
  NODE new_node;
  int val;
  if(new_node==NULL){
   printf("out of memorry");
   
   }
  printf("enter the value\n");
  scanf("%d",&val);
  new_node=(NODE)malloc(sizeof(NODE));
  
  new_node->info=val;
  new_node->rlink=NULL;
  new_node->llink=NULL;
   if(first==NULL){
   first=new_node;
   printf("%d node is inserted ",new_node->info);
   }
  first->llink=new_node;
  new_node->rlink=first;
  printf("%d is inserted\n",new_node->info);
  first=new_node;
  return first;
  }
  
  /*NODE insert_rear(NODE first){
  NODE new_node,cur;
  int val;
   printf("enter the value\n");
  scanf("%d",&val);
  new_node=(NODE)malloc(sizeof(NODE));
  if(new_node==NULL){
   printf("out of memory");
   exit(0);
   }
   new_node->info=val;
   new_node->llink=NULL;
   new_node->rlink=NULL;
   cur=first;
    if (first == NULL) {
    first = new_node;
  } else {// Traverse to the last node
    cur = first;
    while (cur->rlink != NULL) {
     cur = cur->rlink;}
    cur->rlink = new_node;
    new_node->llink = cur;}
    }*/
    
  NODE delete_beg(NODE first){
    NODE cur;
    if(first==NULL){
    printf("list is empty\n");
    return first;}
    cur=first;
    first=first->rlink;
    if(first!=NULL)
    first->llink=NULL;
    printf("%d is deleted\n",cur->info);
    free(cur);
    return first;
    }
    
    NODE display(NODE first){
    NODE cur;
    if(first==NULL){
    printf("list is empty");
    exit(0);
    }
    cur=first;
    printf("the contents of list are");
    while(cur->rlink!=NULL){
     printf("%d\t",cur->info);
     cur=cur->rlink;
     }
     printf("\n");
     return first;
     }
     
     int main(){
int option;
do{
printf("\n doubly linked list operations\n");
printf("1: insert\t2: delete\t4:display\t4:exit\n");
printf("enter the option:");
scanf("%d",&option);
switch(option)
{
case 1:first=insert_front(first);
break;
//case 2:first=insert_rear(first);
//break;
case 2:first=delete_beg(first);
break;
case 3:display(first);
break;
case 4:break;
}
}while(option!=4);
}
