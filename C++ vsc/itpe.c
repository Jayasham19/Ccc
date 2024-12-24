#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 100
int top=-1;
char s[max];
void push(char s[],char val){
    if(top==max-1)
{
printf("STACK OVERFLOW\n");
}
else
{
top=top+1;
s[top]=val;
}
}
char pop(char s[]){
    char val;
     if(top==-1){
printf("STACK UNDERFLOW\n");
   return '\0';
}
else
{
val=s[top];
top=top-1;
return val;
}
}
int getpriority(char op){
    if(op=='^'||op=='$')
    return 2;
   if(op=='%'||op=='/'||op=='*')
   return 1;
   if(op=='+'||op=='-')
   return 0;
}
char infixtopostfix(char infix[],char postfix[]){
     int i=0,j=0;
     char temp;
     strcpy(postfix,"");
     while(infix[i]!='\0'){
        if(infix[i]=='('){
            push(s,infix[i]);
            i++;
        }
        else if(infix[i]==')'){
            while(top!=-1&&s[top]!='('){
                postfix[j]=pop(s);
                j++;
            }
            temp=pop(s);
            i++;
        }
        else if(isdigit(infix[i])||isalpha(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else if (infix[i]=='+'|| infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='%'||infix[i]=='$'||infix[i]=='^'){
        while(top!=-1&&s[top]!='('&&getpriority(s[top])>=getpriority(infix[i])){
            postfix[j]=pop(s);
            j++;
        }
        push(s,infix[i]);
        i++;
        }
     }
        while ((top!=-1)&&(s[top]!='('))
        {
             postfix[j]=pop(s);
        j++;
        
     }
        postfix[j]='\0';
}
int main(){
  char infix[100],postfix[100];
   printf("\n Enter the valid infix expression\n");
    scanf("%s",infix);
    infixtopostfix(infix,postfix);
     printf("the postfix expression is : \n");
    printf("%s",postfix);
    return 0;
}