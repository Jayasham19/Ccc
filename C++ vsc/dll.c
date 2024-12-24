#include <stdio.h>
#include <stdlib.h>
struct node
{
int info;
struct node *llink;
struct node *rlink;
};
typedef struct node * NODE;
NODE first=NULL;


   NODE insert_begin(NODE first)
{
NODE temp;
int item;
printf("enter the value\n");
scanf("%d",&item);
temp=(NODE) malloc(sizeof(NODE));
if(temp==NULL)
{
printf("out of memory n");
exit(0);
}
temp->info=item;
temp->rlink=NULL;
temp->llink=NULL;
if(first==NULL)
{
first=temp;
printf("%d is inserted\n",temp->info);
return first;
}
first->llink=temp;
temp->rlink=first;
printf("%d is inserted\n",temp->info);
first=temp;
return first;
}

NODE insert_rear(NODE first){
  NODE temp,cur;
  int item;
   printf("enter the value\n");
  scanf("%d",&item);
  temp=(NODE)malloc(sizeof(NODE));
  if(temp==NULL){
   printf("out of memory");
   exit(0);
   }
   temp->info=item;
   temp->llink=NULL;
   temp->rlink=NULL;
   while(cur->rlink!=NULL){
    cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;
    cur=temp;
    return first;
    }

NODE delete_begin(NODE first)
{
NODE cur;
if(first==NULL)
{
printf("list is empty\n");
return first;
}
cur=first;
first=first->rlink;
if(first!=NULL)
first->llink=NULL;
printf("%d is deleted\n",cur->info);
free(cur);
return first;
}

NODE display(NODE first)
{
NODE cur;
if(first==NULL)
{
printf("list is empty\n");
return first;
}
cur=first;
printf("contents of the list are\n");
while(cur!=NULL)
{
printf("%d\t",cur->info);
cur=cur->rlink;
}
printf("\n");
return first;
}

int main()
{
int option;
do{
printf("\n doubly linked list operations\n");
printf("1: insert\t2: rear\t3: delete\t4:display\t4:exit\n");
printf("enter the option:");
scanf("%d",&option);
switch(option)
{
case 1:first=insert_begin(first);
break;
case 2:first=insert_rear(first);
break;
case 3:first=delete_begin(first);
break;
case 4:first=display(first);
break;
case 5:break;
}
}while(option!=4);
}
