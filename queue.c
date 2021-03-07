#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=0,q[max];
void insert(void);
void delete(void);
void travser(void);
void end(void);

void main()
{
    int ch;
    while(1)
    {
        printf("\n1. insert");
        printf("\n2. delete");
        printf("\n3. travser");
        printf("\n4. end");
        printf("\n5 exit");
        printf("\n enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert(); break;
            case 2: delete();  break;
            case 3: travser(); break;
            case 4: end(); break;
            case 5: exit(0); break;
            default: printf("\ninvalid choice");break; 
        }
        
    }
    getch();
    

}
void insert()
{   int ch;
    if(rear==max)
     printf("\n overflow");
    else
    {   printf("enter the element you wantz")
        scanf("%d",&ch);
        q[rear]=ch;
        rear++;
    } 
    front=0;
}

void delete()
{
    if(front==rear)
     printf("\nUnderflow");
    else
    {
        printf("\ndeleted element from the queue :%d",q[front]);
        front++;
    } 
}

void travser()
{
    if(front==-1&&rear==0)
     printf("\nqueue is empty");
    else
    {
        for(int i=front;i<rear;i++)
        {
            printf("%d",q[i]);
        }
    } 
}

void end()
{
    if(rear==0&&front==-1)
    {
        printf("\n Queue is empty");
    }
    else
    printf("\n the end and front of queue are : %d and %d",q[rear],q[front]);
}
