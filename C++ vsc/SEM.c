// #include<stdio.h>
// int main(){
//     int a,b,c,t;
//     printf("Enter the marks in all of the 3 subjects \n");
//     scanf("%d%d%d",&a,&b,&c);
//     t=(a+b+c)/3;
//     if(t>=40){
//         switch(t/10){
//             case 4:
//             case 5:
//             case 6:
//             case 7:
//             case 8:
//             case 9:
//             case 10:
//             case 11:
//             printf("u passed in all the exam with 33per cent as your aggregate marks");
//             break;
//         }
//     }
//     else{
//         printf("U falied in your exam get your money ready for supply");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i;
//     int n=10;
//     int n1;
//     for(i=10;i;--i){
//         n1=i*n;
//         printf("the multiple of %d X %d is %d\n",i,n,n1);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n=0;
//     int i=0,sum=0,n1=0;
//     for(i=0;i<11;i++){
//         n1=n1+i;
//         printf("the sum is %d\n",n1);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n=8,n1;
//     int i,sum=0;
//     for(i=0;i<11;i++){
//       n1=n*i;
//       sum=sum+n1;
//       printf("the multiplication tabel of %d X %d is %d\n",n,i,n1);
//       printf("the sum is %d\n",sum);
//     }
//     re4turn 0;
// }
// #include<stdio.h>
// int main(){
//     int s;
//     s=10%2;
//     printf("the value is %d",s);
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int area_of_square();
// int main(){
//     int s,q=5;
//     s=q*q;
//     printf("the area is %d\n",area_of_square(s));
//     return 0;
// }
//   int area_of_square(int s){
//    return s;
//   }
// #include<stdio.h>
// #include<math.h>
// int factorial(int number){
//     long fact =1;
//     for (int i = 1; i <= number; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// int main(){
//     int number;
//     printf("Enter a number to calculate its factorial: ");
//     scanf("%d", &number);
//     printf("The factorial of the %d is %d\n",number,factorial(number));
//     return 0;
// }
// #include<stdio.h>
// float average(int a,int b,int c){
//     float d ;
//     d=(a+b+c)/3;
//     return (a+b+c)/3; ;
// }
//    int main(){
//     int a,b,c;
//     printf("enter three numbers\n");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("the average value is %f\n", average(a,b,c));
//     return 0;
//    }
// #include<stdio.h>
// int main(){
//     int a=4;
//    printf("%d%d%d",a,++a,a++);
//    return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="I really wanted to join a club so that i can mingel but actually i am feared ";
//      for(int i=0;i<strlen(str);i++){
//         str[i]=str[i]+1;
//      }
//      printf("%s",str);
//      return 0;
// }
// #include<stdio.h>
// #include<string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[10];
// };
//  int main(){
//     struct employee e1;
//    strcpy(e1.name,"shrew");
//     e1.salary=45000;
//      e1.code=45;
//      printf("%d%f%s",e1.code,e1.salary,e1.name);
//      return 0;
//  }
// #include<stdio.h>
// int main(){
//     int i,j,n,num;
//     printf("enter the value of n\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//       printf("%d\n",i);
//       for(j=0;j<n;j++){
//         printf("enter value,enter 0 to exit\n");
//         scanf("%d",&num);
//         if(num==0){
//            goto end;
//         }
//       }
//     }
//  end:
//  return 0;
// }
/* sum sum+arr[i];
mean = sum/n;
(foe finding position of smallest number in array )
small =arr[0];
for(i=0;i<n;i++)
if(small<arr[i])
*/
// #include <stdio.h>

// int main()
// {
//     int n, i;
//     int *ptr; // Pointer to store the address of the array

//     // Input the size of the array
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n]; // Declare an array of size n

//     // Input the elements of the array
//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // Pointer points to the first element of the array
//     ptr = arr;

//     // Display the array using the pointer
//     printf("The elements of the array are:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", *(ptr + i)); // Access the elements using the pointer
//     }

//     printf("\n");

//     return 0;
// }

                      // data structures
// #include <stdio.h>
// #include<stdlib.h>
// #define MAX 100

// int stack[MAX];
// int top = -1;

// // Function to push an element onto the stack
// void push(int value) {
//     if (top == MAX - 1) {
//         printf("Stack overflow\n");
//     } else {
//         top=top+1;
//         stack[top] = value;
//     }
// }

// // Function to pop an element from the stack
// int pop(int stack[]) {
//     int value;
//     if (top == -1) {
//         printf("Stack underflow\n");
//         return -1;
//     } else {
//         value=stack[top];
//         top=top-1;
//  }
// }

// // Function to display the elements of the stack
// void display() {
//     if (top == -1) {
//         printf("Stack is empty\n");
//     } else {
//         printf("Stack elements are:\n");
//         for (int i = top; i >= 0; i--) {
//             printf("%d\n", stack[i]);
//         }
//     }
// }

// int main() {
//     int choice, value;
    
//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. Push\n");
//         printf("2. Pop\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the value to push: ");
//                 scanf("%d", &value);
//                 push(value);
//                 break; 
//             case 2:
//                 value = pop(stack);
//                 if (value != -1) {
//                     printf("Popped element: %d\n", value);
//                 }
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 printf("Invalid choice\n");
//         }
//     }
// } 


                       // infix to postfix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 100
char stack[100];
int top=-1;
int push(char stack[],char value){
    if(top==max-1){
        printf("STACK OVERFLOW\n");
    }
    else{
        top=top+1;
        stack[top]=value;
    }
}
int pop(char stack[top]){
    char value;
    if(top==-1){
        printf("STACK UNDERFLOW\n");
    }
    else{
        value=stack[top];
        top=top-1;
        return value;
    }
}
int getpriority(char op){
    if(op=='^'||op=='$')
    return 2;
    else if(op=='/'||op=='*'||op=='%')
    return 1;
    else if (op=='+'||op=='-')
    return 0;
}

int infixtopostfix(char infix[],char postfix[]){
    int i=0,j=0;
    char temp;
    strcpy(postfix,"");
  while(infix[i]!='\0'){
    if(infix[i]=='('){
        push(stack,infix[i]);
        i++;
    }
    else if(infix[i]==')'){
        while((top!=-1)&& stack[top]!='('){
         postfix[j]=pop(stack);
         j++;
        }
        temp=pop(stack);
        i++;
    }
    else if(isdigit(infix[i])||isalpha(infix[i])){
        postfix[j]=infix[i];
        i++;
        j++;
    }
    else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='%'||infix[i]=='$'||infix[i]=='^'){
        while((top!=-1)&& (stack[top]!='(') && getpriority(stack[top])>=getpriority(infix[i])){
            postfix[j]=pop(stack);
            j++;
        }
        push(stack,infix[i]);
        i++;
    }
    else {
        printf("\nIncorrect element in the expression\n");
        exit(1);
    }
  }
    while((top!=-1)&&(stack[top]!='(')){
        postfix[j]=pop(stack);
        j++;
  }
  postfix[j]='\0';
}
int main(){
    char infix[100],postfix[100];
    char res;
    printf("\n Enter the valid infix expression\n");
    scanf("%s",infix);
    strcpy(postfix,"");
    infixtopostfix(infix,postfix);
    printf("the postfix expression is : \n");
    printf("%s",postfix);
    return 0;
}
                     //postfix evaluvation

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// #include<math.h>
// #define max 100
// double stack[max];
// int top=-1;
// void push(double stack[],double value){
//   if(top==max-1){
//     printf("stack overflow");
//   }
//   else{
//     top=top+1;
//     stack[top]=value;
//   }
// }
// double pop(double stack[]){
//     int value;
//     if(top==-1){
//         printf("stack underflow");
//         return -1;
//     }
//     else{
//         value=stack[top];
//         top=top-1;
//     }
//      return value;
// }
// double evaluvation(char postfix[]){
//     int i=0;
//     double op1,op2,value;
//     while(postfix[i]!='\0'){
//         if(isdigit(postfix[i])){
//         push(stack,postfix[i]-'0');
//         }
//         else{
//             op1=pop(stack);
//             op2=pop(stack);
//             switch(postfix[i]){
//                 case '+':
//                   value=op2+op1;
//                   break;
//                 case '-':
//                   value=op2-op1;
//                   break;
//                 case '*':
//                  value=op2*op1;
//                  break;
//                  case '/':
//                   value=op2/op1;
//                   break;
//                 case '^':
//                   value=pow(op2,op1);
//                   break;
//             }
//             push(stack,value);
//         }
//         i++;
//     }
//     return pop(stack);
// }
// void main(){
//     double result;
//     char postfix[100];
//     printf("enter the postfix expression\n");
//     scanf("%s",postfix);
//     result=evaluvation(postfix);
//     printf("result of the postfix evaluvation is %.2lf :",result);
// }