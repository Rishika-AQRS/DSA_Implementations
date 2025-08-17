/*
    Title: Infix to Postfix Conversion
    Author: Rishika
    Description: Program to convert an infix expression to postfix notation 
                 using stack data structure.
    Language: C
*/

//Code
#include <stdio.h>
#include <string.h>
#define SIZE 100
char stack[SIZE];
char in[50];
char po[50];
int front=0;
int rear=-1;
int top=-1;
void add(char ch, char po[])
{
  rear++;
    po[rear]=ch;
   }
int prec(char c)
{if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;}
   
void push(char stack[], char c1)
{if(top<99)
    {top++;
    stack[top]=c1;}}
   
void pop(char stack[])
{
         if(top>-1)
         {char item=stack[top];
         top--;
         rear++;
         po[rear]=item;}
}
int main() {
    int i;
    printf("enter the expression: ");
    scanf("%s", in);
    int s=strlen(in);
    for(i=0;i<s;i++)
    {if ((in[i] >= 'A' && in[i] <= 'Z') ||  
    (in[i] >= 'a' && in[i] <= 'z') ||  
    (in[i] >= '0' && in[i] <= '9'))
        {add(in[i], po);}
    else if (in[i] == '(') {
            push(stack, in[i]);}
    else if (in[i] == ')') {
            while (stack[top] != '(') {
                pop(stack);
            }
            top--;
        }
    else
    {int p=prec(in[i]);
         while (top != -1 && p<=prec(stack[top]) && stack[top]!='(' )
            {pop(stack);}
      push(stack, in[i]);  
    }
    }
 while(top!=-1)
   {pop(stack);}
    printf("%s", po);
   return 0;
}

//Sample Output
/*
enter the expression: (a+b)*c/d+e
ab+c*d/e+
*/
