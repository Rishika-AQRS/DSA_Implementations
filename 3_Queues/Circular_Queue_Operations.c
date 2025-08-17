/*
    Title: Circular Queue Basic Operations
    Author: Rishika
    Description: Program to implement basic operations (Enqueue, Dequeue, Display) on a circular queue in C.
    Language: C
*/

//Sample Code
#include <stdio.h>
#define SIZE 5
int cirq[SIZE];
int front=-1;
int rear=-1,i;
void enqueue(int cirq[], int el)
{if(((rear+1)%SIZE)==front)
    {printf("Queue full, overflow condition");}
else
{printf("enter the element to insert: ");
scanf("%d", &el);
front=0;
rear=(rear+1)%SIZE;
cirq[rear]=el;
}
}
void dequeue(int cirq[], int item)
{if(front==-1)
    {printf("Queue empty, underflow condtion");}
else
{item=cirq[front];
    if(front==rear)
    {front=-1;
    rear=-1;}
else
{front=(front+1)%SIZE;}
printf("the deleted item from the queue is: %d", item);
   
}
}

int main() {
   int q[SIZE],el1,i,item;
    int ch, j=0;
    while(j==0)
    {printf("\nPress 1 for Add, Press 2 for Delete and Press 3 for Exit\n");
    printf("enter choice: ");
    scanf("%d", &ch);
    switch(ch){
        case 1:
        enqueue(q,el1);
        break;
        case 2:
        dequeue(q,item);
        break;
        case 3:
        j++;
        break;
        default:
        printf("invalid choice");
}}
    return 0;
}

//Sample Output
/*
Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 1
enter the element to insert: 10

Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 1
enter the element to insert: 20

Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 1
enter the element to insert: 30

Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 2
the deleted item from the queue is: 10
Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 3
Code Exited!
*/
