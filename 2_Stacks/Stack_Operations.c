/*
    Title: Stack Basic Operations
    Author: Rishika
    Description: Program to implement stack and perform basic operations 
                 such as push, pop, peek, and display.
    Language: C
*/

//Code
#include <stdio.h>
#define SIZE 100
int stack[SIZE];
int top=-1,el,i,item;
void push(int stack[], int el)
{printf("\nPush operation selected\n");
         if(top<99)
         {printf("Enter element to push:");
         scanf("%d", &el);
         top++;
         stack[top]=el;
         printf("Stack after push\n");
             for(i=0;i<=top;i++)
         {printf("%d ", stack[i]);}}
         else
         {printf("Overflow Condition\n");}
         }
void pop(int stack[])
{printf("\nPop operation selected\n");
         if(top>-1)
         {item=stack[top];
         top--;
         printf("Popped element=%d\n", item);
         printf("Stack after pop\n");
         for(i=0;i<=top;i++)
        { printf("%d ", stack[i]);}}
        else
        {printf("Underflow Condition\n");}}
void peek(int stack[])
{printf("\nPeek operation selected\n");
        printf("The peek/top element of the stack is %d", stack[top]);}

int main() {
    int x, s[SIZE],ch,j=0;
    printf("1 for Push...2 for Pop...3 for Peek...4 for Exit\n");
   while(j==0)
   {
     printf("\nEnter your choice of stack operation:");
     scanf("%d", &ch);
     switch(ch)
     {case 1:
     push(s,x);
     break;
     case 2:
     pop(s);
     break;
     case 3:
     peek(s);
     break;
     case 4:
     printf("Code exited!");
        j++;
        break;
    default:
    printf("Invalid choice selected");
    break;}}
   return 0;
}

//Sample Output
/*
1 for Push...2 for Pop...3 for Peek...4 for Exit

Enter your choice of stack operation:1

Push operation selected
Enter element to push:23
Stack after push
23 
Enter your choice of stack operation:1

Push operation selected
Enter element to push:34
Stack after push
23 34 
Enter your choice of stack operation:2

Pop operation selected
Popped element=34
Stack after pop
23 
Enter your choice of stack operation:3

Peek operation selected
The peek/top element of the stack is 23
Enter your choice of stack operation:4
Code exited!
*/
