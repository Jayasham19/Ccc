// #include<stdio.h>
// int main(){
//     int i;
//     i=0;
//     for(i=10;i;i--){
//         printf("the first 10 natural numbers is %d\n",i);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i;
//     i=0;
//     while(i<6){
//         if(i==2){
//             continue;
//         }
//         printf("the natural numbers is %d\n",i);
//         i++;
//     }
//     return 0;
// }
// #include <stdio.h>

// Function prototype
// long factorial(int n);

// int main() {
//     int number;
//     long fact;

//     // Asking for input
//     printf("Enter a number to calculate its factorial: ");
//     scanf("%d", &number);

//     // Function call to calculate factorial
//     fact = factorial(number);

//     // Displaying the result
//     printf("Factorial of %d is %ld\n", number, fact);

//     return 0;
// }

// // Function definition
// long factorial(int n) {
//     long fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// #include<stdio.h.>
// int main(){
//  int i=8;
//  int *j;
//  j=&i;
//  printf("%u\n",&i);
//  printf("%u\n",j);
//  printf("%u\n",&j);
//  printf("%d\n",&i);
//  printf("%d\n",j);
//  printf("%d\n",&j);
//  printf("%d\n",*j);
//  printf("%u\n",*j);
//  printf("%u\n",*(&i));
//  printf("%d\n",*(&i));
//  printf("%u\n",*(&j));
//  printf("%d\n",*(&j));
// return 0;
// }
// #include <stdio.h>
//     int factorial(int number){
//         if (number == 0 || number == 1)
//         {
//             return 1;
//         }
//         else {
//             return number*factorial(number-1);
//         }
//     }
// int main(){
//     int number;
//     printf("enter the value of number\n");
//     scanf("%d",&number);
//     printf("the factorial of %d is %d\n",number,factorial(number));
//     return 0;
// }
// #include <stdio.h>
// int fib_recursive(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n - 1;
//     }
//     else
//     {
//         return fib_recursive(n - 1) + fib_recursive(n - 2);
//     }
// }

// int fib_iterative(int n)
// {
//     int a = 0;
//     int b = 1;

//     for (int i = 0; i < n - 1; i++)
//     {
//         b = a + b; // 1 for iteration 1
//         a = b - a; // 1 for iteration 1
//     }

//     return a;
// }

// int main()
// {
//     int number;
//     printf("Enter the index to get fibonacci series\n");
//     scanf("%d", &number);
//     printf("The value of fibonacci number at position no %d using iterative approach is %d\n", number, fib_iterative(number));
//     printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
//     return 0;
// }
//              call by reference
// #include<stdio.h>
// int swap(int *a,int *b){
//     return (*a,*b);
// }
// int main(){
//     int a=4,b=3;
//     int x,y;
//     x=a+b;
//     printf("the sum is %d\n",x);
//     y=a-b;
//     printf("the diff is %d\n",y);
//     swap(&x,&y);
//     printf("the %d and %d is %d,%d\n",a,b,x,y);
// }
// #include<stdio.h>
// int main(){
//     int a[10];
//     int i,n;
//     int sum=0;
//     float avg;
//     printf("enter value \n");
//     scanf("%d",&n);
//     printf("enter the elements of the array\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         sum+=a[i];
//     }
//         avg=(float)sum/n;
//         printf("the avg is %f\n",avg);
//         return 0;
// }
// #include <stdio.h>
// #include <ctype.h>

// #define MAX 100

// char stack[MAX];
// int top = -1;

// void push(char ch) {
//     if (top == MAX - 1) {
//         printf("Stack overflow\n");
//     } else {
//         stack[++top] = ch;
//     }
// }

// char pop() {
//     if (top == -1) {
//         return -1;
//     } else {
//         return stack[top--];
//     }
// }

// int precedence(char ch) {
//     switch (ch) {
//         case '+':
//         case '-':
//             return 1;
//         case '*':
//         case '/':
//             return 2;
//         case '^':
//             return 3;
//         default:
//             return 0;
//     }
// }

// void infixToPostfix(char* infix, char* postfix) {
//     int i = 0, k = 0;
//     char ch;
//     while ((ch = infix[i++]) != '\0') {
//         if (isalnum(ch)) {
//             postfix[k++] = ch;
//         } else if (ch == '(') {
//             push(ch);
//         } else if (ch == ')') {
//             while (top != -1 && stack[top] != '(') {
//                 postfix[k++] = pop();
//             }
//             pop(); // remove '(' from stack
//         } else {
//             while (top != -1 && precedence(stack[top]) >= precedence(ch)) {
//                 postfix[k++] = pop();
//             }
//             push(ch);
//         }
//     }
//     while (top != -1) {
//         postfix[k++] = pop();
//     }
//     postfix[k] = '\0';
// }

// int main() {
//     char infix[MAX], postfix[MAX];

//     printf("Enter an infix expression: ");
//     scanf("%s", infix);

//     infixToPostfix(infix, postfix);
//     printf("Postfix expression: %s\n", postfix);

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #define max 100
// char stack[max];
// int top = -1;
// int push(char stack[], char value)
// {
//   if (top == max - 1)
//   {
//     printf("Stack overflow\n");
//   }
//   else
//   {
//     top = top + 1;
//     stack[top] = value;
//   }
// }
// int pop(char stack[])
// {
//   char value;
//   if (top == -1)
//   {
//     printf("Stack Underflow \n");
//   }
//   else
//   {
//     value = stack[top];
//     top = top - 1;
//     return value;
//   }
// }
// int getpriority(char op)
// {
//   if (op == '^' || op == '$')
//     return 2;
//   else if (op == '/' || op == '*' || op == '%')
//     return 1;
//   else if (op == '+' || op == '-')
//     return 0;
// }
// /* functio to convert fom infix to postfix  expression */

// void InfixToPostfix(char infix[], char postfix[])
// {
//   int i = 0, j = 0;
//   char temp;
//   strcpy(postfix, "");
//   while (infix[i] != '\0')
//   {
//     if (infix[i] == '(')
//     {
//       push(stack, infix[i]);
//       i++;
//     }
//     else if (infix[i] == ')')
//     {
//       while ((top != -1) && (stack[top] != '('))
//       {
//         postfix[j] = pop(stack);
//         j++;
//       }
//       if (top == -1)
//       {
//         printf("\n incorrect expression \n");
//         exit(0);
//       }
//       temp = pop(stack);
//       i++;
//     }

//     else if (isdigit(infix[i]) || isalpha(infix[i]))
//     {
//       postfix[j] = infix[i];
//       j++;
//       i++;
//     }
//     else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '%' || infix[i] == '$' || infix[i] == '^')
//     {
//       while ((top != -1) && (stack[top] != '(') && (getpriority(stack[top]) >= getpriority(infix[i])))
//       {
//         postfix[j] = pop(stack);
//         j++;
//       }
//       push(stack, infix[i]);
//       i++;
//     }
//     else
//     {
//       printf("\n incorrect element in expresssion \n");
//       exit(1);
//     }
//   }

//   while ((top != -1) && (stack[top] != '('))
//   {
//     postfix[j] = pop(stack);
//     j++;
//   }
//   postfix[j] = '\0';
// }
// int main()
// {
//   char infix[100], postfix[100];
//   printf("enter the valid infix expression \n");
//   scanf("%s", infix);
//   strcpy(postfix, " ");
//   InfixToPostfix(infix, postfix);
//   printf("the postfix expression is :\n");
//   printf("%s", postfix);
//   return 0;
// }
