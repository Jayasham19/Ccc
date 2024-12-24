#include<stdio.h>
#define max 100
int q[max];
int f=0,r=-1;
void insert_rear(int q[],int val){
    if(r==max-1)
 printf("queue is overflow\n");
 else {
    r=r+1;
    q[r]=val;
  printf("%d is inserted into queue\n",val);
 }
}
void delete_front(int q[]){
    int val;
  if(r==-1){
    printf("queue underflow");
  }
  else {
    val=q[f];
    f=f+1;
   printf("%d is deleted from queue\n",val);
  }
}
void display(int q[]){
    if(f>r)
 printf("queue is empty\n");
 else
 {
 printf("content of the queue are\n");
 for(int i=f;i<=r;i++)
 {
 printf("%d\t",q[i]);
 }
 }
}

void main(){
    int option,val;
 do{
 printf("\n******Queue Operation**********\n");
 printf("1.insert\t2.delete\t3.display\t4.exit\n");
 printf("enter your option: ");
 scanf("%d",&option);
 switch(option)
 {
 case 1: printf("\nenter the number to be inserted\n");
 scanf("%d",&val);
   insert_rear(q,val);
 break;
 case 2:delete_front(q);
 break;
 case 3: display(q);
 break;
 }
 }while(option!=4);
}
