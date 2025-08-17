/*
    Title: Linear Queue Basic Operations
    Author: Rishika
    Description: Program to implement basic operations (Enqueue, Dequeue, Display) on a linear queue in C.
    Language: C
*/

//Code
#include <stdio.h>
#define SIZE 2
int queue[SIZE];
int rear=-1;
int front=0;
void qadd(int queue[], int el){
    int i;
    if(rear==(SIZE-1))
    {printf("stack full");}
    else
    {printf("Adding in Queue\n");
    printf("enter the element: ");
        scanf("%d", &el);
        rear++;
        queue[rear]=el;
   
    printf("Queue after adding: ");
    for(i=front;i<=rear;i++)
    {printf("%d ", queue[i]);}}
}
void qdel(int queue[])
{
    int i;
    if(rear<front)
{printf("queue empty");}
else
    {printf("Deleting from Queue\n");
    int item=queue[front];
        if(front==SIZE-1)
    {front=0;
        rear=-1;
    }
    else    
    {front++;}
    printf("deleted item from queue: %d\n", item);
        printf("Queue after deleting: \n");
    for(i=front;i<=rear;i++)
    {printf("%d ", queue[i]);}
    }
}
int main(){
    int q[SIZE],el1,i,item;
    int ch, j=0;
    while(j==0)
    {printf("\nPress 1 for Add, Press 2 for Delete and Press 3 for Exit\n");
    printf("enter choice: ");
    scanf("%d", &ch);
    switch(ch){
        case 1:
        qadd(q,el1);
        break;
        case 2:
        qdel(q);
        break;
        case 3:
        j++;
        break;
        default:
        printf("invalid choice");
       
    }
}
    return 0;
}

//Sample Output
/*
Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 1
Adding in Queue
enter the element: 10
Queue after adding: 10 
Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 1
Adding in Queue
enter the element: 20
Queue after adding: 10 20 
Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 2
Deleting from Queue
deleted item from queue: 10
Queue after deleting: 
20 
Press 1 for Add, Press 2 for Delete and Press 3 for Exit
enter choice: 3
Code Exited!
*/
