#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=-1,q[max];
void insert(void);
void delete(void);
void travser(void);

void main()
{
    int ch;
    while(1)
    {
        printf("\n1. insert");
        printf("\n2. delete");
        printf("\n3. travser");
        printf("\n4. exit");
        printf("\n enter your choice :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: insert();  break;
        case 2: delete();  break;
        case 3: travser(); break;
        case 4: exit (0);    break;
        default: printf("\ninvlid choice");
            break;
        }
    }
}

void insert()
{
    if ((front==0 && rear==max-1)||(front==rear+1))
     printf("\n overflow");
    else
    {
        if(rear==-1)
        {
            rear=0;
            front=0;
        }
        else if (rear==max-1)
             rear=0;

        else 
             rear++;
        printf("\nenter the element: ");
        scanf("%d",&q[rear]);     
    } 
}

void delete()
{
    if(front==-1)
     printf("\n underflow");
    else
    {
        printf("\n deleted element= %d",q[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;

        }
        else if (front==max-1)
               front=0;
        else  
               front++;       
    } 
}
void travser()
{
    int i;
    if(front==-1)
    printf("\n underflow");
    else
    {   
        if(front<=rear)
        {
             for(i=front;i<=rear;i++)
               printf("%d",q[i]);
        }
        else
        {
            for(i=front;i<=max-1;i++)
             printf("\n%d",q[i]);
            for(i=0;i<=rear;i++)
             printf("\n%d",q[i]); 
        }
    }
}