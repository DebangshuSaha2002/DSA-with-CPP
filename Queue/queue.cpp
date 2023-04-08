#include<stdio.h>

int front=-1;
int rear=-1;
int size=5;
int queue[5];

void enqueue()
{
    int data;
    printf("Enter the data:");
    scanf("%d",&data);

    if(rear==4){
        printf("Queue is full");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}

void dequeue()
{
    int ans=0;
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty, nothing to dequeue");
        return;
    }
    if(front==rear)
    {
        ans=queue[front];
        front=-1;
        rear=-1;
    }
    else{
        ans=queue[front];
        front++;
    }
    printf("\nThe dequeue element from the queue is %d\n",ans);
}

void printqueue()
{
    if(front==-1 && rear==-1){
        printf("Queue is empty so nothing to print");
        return;
    }
    printf("\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d  ",queue[i]);
    }
}

int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    printqueue();
    dequeue();
    printqueue();
}