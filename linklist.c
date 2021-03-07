//Program to show implementation of linklist and different function on it...
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
void create();
void addfront();//Declaration of function to add element at front of list 
void addlast();//Declaration of function to add element at the last of list
void addftpos();//Declaration of function to add element after a given position
void addftcons();//Declaration of function to add element after a particular constant
void delfront();//Declaration of function to delete element from front
void dellast();//Declaration of function to delete element from last
void delpos();//Declaration of function to delete element from a position
void delcons();//Declaration of function to delete a particular constant
void traverse();//Declaration of function to display every element in linklist
int count();//Declaration of function to count number of element in linklist
struct node //Structure of a node in linklist
{
    int info;
    struct node *next;
};
struct node *start=NULL;//starting node declared as null
int main()
{
    int ch,c;
    while(1)
    {   
        printf("\n 1:Create a node");
        printf("\n 2:Add at front");
        printf("\n 3:Add at last");
        printf("\n 4:Add after position");
        printf("\n 5:Add after constant");
        printf("\n 6:Del front");
        printf("\n 7:Del last");
        printf("\n 8:Del position");
        printf("\n 9:Del constant");
        printf("\n 10:Traverse");
        printf("\n 11:Count");
        printf("\n 12:exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create();
                    break;
            case 2:addfront();
                 break;
            case 3:addlast();
                 break;
            case 4:addftpos();
                 break;
            case 5:addftcons();
                 break;
            case 6:delfront();
                 break;
            case 7:dellast();
                 break;
            case 8:delpos(); 
                 break;
            case 9:delcons();
                 break;
            case 10:traverse(); 
                 break;
            case 11:c=count();
                    printf("%d ",c);
                     break;
            case 12:exit(0);
                 break;
            default: printf("\n invalid choice");     
        }
        getch();
    }

}
void create()//Function to create a node
{
     struct node *n=(struct node *)malloc(sizeof(struct node*));
     struct node *t=start;
     printf("\n Enter info");
     scanf("%d",&n->info);
     if(start==NULL)
     {
         n->next=NULL;
         start=n;
     }
     else
     {
     while(t->next!=NULL)
           t=t->next;
     }
     printf("\n node Created");
}
void addfront()//Function to add element at front
{
    struct node *n=(struct node*)malloc(sizeof(struct node*));
    printf("\n First node createdd ");
    scanf("%d",&n->info);
    if(start==NULL)
    {
        n->next=NULL;
        start=n;
        printf("\n First node created");
    }
    else
    {
        n->next=start;
        start=n;
        printf("\n node added at front");
    }
}
void addlast()//Function to add element at last
{
    struct node *n=(struct node*)malloc(sizeof(struct node*));
    struct node *t=start;
    printf("\n Enter the info");
    scanf("%d",&n->info);
    if(start==NULL)
    { n->next=NULL;
    start=n;
    }
    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
            t->next=n;
            n->next=NULL;
        }
        printf("\n node created at the end");
    }
}
void delfront()//Function to delete element from front
{
    struct node *t=start;
    if(start==NULL)
      printf("\nList is empty");
    else if (start->next==NULL)
    {
         free(t);
         start=NULL;
         printf("\nsingle node deleted");
    }   
    else
    {
        start=start->next;
        free(t);
        printf("\n frist node deleted");
    }
}
void dellast()//Function to delete element at last 
{
    struct node *t=start;
    if(start==NULL)
     printf("\nList is empty");
    else if(start->next==NULL)
    {
        free(t);
        start=NULL;
        printf("\n  single node deleted");
    } 
    else
    {
        while(t->next->next!=NULL)
             t=t->next;
        free(t->next);
        t->next=NULL;
        printf("\n Last node deleted");     
    }
}
void traverse()//Function to display all element in linklist
{
    struct node *t=start;
    if(start==NULL)
        printf("\nList is empty");
    else
    {
        while (t->next!=NULL)
        {   printf("\n%d",t->info);
            t=t->next;
        }
        printf("\n%d",t->info);
    }    
}
int count()//Function to count total number of element in link list
{
    struct node *t=start;
    int c=0;
    while(t!=NULL)
    {
        c++;
        t=t->next;
    }
    return c;
}
void addftpos()//Function to add element after a position
{
    struct node *n=(struct node*)malloc(sizeof(struct node) );
    struct node *t=start;
    int ctr=1,pos;
    printf("\n Enter the position where you want to insert :");
    scanf("%d",&pos);
    printf("\n enter the info");
    scanf("%d",&n->info);
    if(pos>count())
    {
        printf("\n invaild position");
    }
    else
    {
        while(ctr<pos)
        {
            t=t->next;
            ctr++;
        }
        n->next=t->next;
        t->next=n;
        printf("\n node inserted after the given position");
    }
}
void addftcons()//Function to add element after a constant
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    struct node *t=start;
    int ctr=1,cons;
    printf("\n Enter the constant where you want to insert:");
    scanf("%d",&cons);
    printf("\n Enter the info:");
    scanf("%d",&n->info);
    while(t!=NULL)
    {
        if(t->info==cons)
        {
            n->next=t->next;
            t->next=n;
            printf("\n node inserted after constsant value:");
            break;
        }
        else
            t=t->next;
    }
    if(t=NULL)
         printf("\n invalid number");
}
void delpos()//Function to delete element at particular position
{
    struct node *t=start,*ptr;
    int ctr=0,pos;
    printf("\n enter position which you want to delete");
    scanf("%d",&pos);
    if(pos>count())
         printf("\n invalid position");
    else
    {
        while(ctr<pos)
        {
            ptr=t;
            t=t->next;
            ctr++;
        }
        ptr->next=t->next;
        free(t);
        printf("\n node deleted");
    }     
}
void delcons()//Function to delete a particular constant
{
    struct node *t=start,*ptr;
    int cons;
    printf("\n enter constant which you want to delete");
    scanf("%d",&cons);
    while (t->info!=cons)
    {ptr=t;
    t=t->next;
    }
    if(t!=NULL)
    {
        ptr->next=t->next;
        free(t);
        printf("\n condtant node deleted");
    }
    else
    {printf("value not found");
    }
}
