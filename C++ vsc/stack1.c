#include<stdio.h>
#include<stdlib.h>
#define max 100
int s[100];
int top=-1;
void push(int s[],int val){
    if (top==max-1){
        printf("stack overflow\n");
    }
    else{
        top=top+1;
        s[top]=val;
        printf("%d is inserted into the stack",val);
    }
}
void pop(int s[]){
    int val;
    if(top==-1){
        printf("stack underflow");
    }
    else{
        val=s[top];
        top=top-1;
        printf("%d is deleted",val);
    }
}
void display(int s[]){
int val;
if(top==-1){
    printf("underflow");
}
else {
    printf("contents of stack are ");
    for(int i=top;i>=0;i--){
    printf("%d\n",s[i]);
    }
}
}
void main(){
    int val,option;
do
{
printf("\n****Stack Operations****\n");
printf("1. push\t2. pop\t3. display\t4. Exit\n");
printf("enter your option:");
scanf("%d",&option);
switch(option)
{
case 1: printf("\nEnter the number to be\n");
 scanf("%d",&val);
 push(s,val);
 break;
 case 2:pop(s);
break;
case 3: display(s);
 break;
case 4: exit(0);
 break;
}
}while(option!=4);
}

