#include<stdio.h>
#include<process.h>
#include<conio.h>
#define max 20
int top=-1,a[max];
void push(void);
void pop(void);
void peek(void);
void traverse(void);
void main()
{
    int ch;
    
    while(1)
    { 
        printf("\n 1 push");
        printf("\n 2 pop");
        printf("\n 3 peek");
        printf("\n 4 traverse");
        printf("\n 5 exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: peek();
            break;
        case 4: traverse();
            break;
        case 5: exit(0);
         break;           
        default: printf("\n out of option");
            break;
        }
    }
}
void push()
{
  printf("\nenter the element:");
  top++;
  scanf("%d",&a[top]);   
}
void pop()
{
  printf("\ndeleted element : %d",a[top]);
  top--;   
}
void peek()
{
    printf("\nelememt on the peek is : %d",a[top]);
}
void traverse()
{   if (top==-1)
printf("\n underflow");
else
    for(int i=0;i<=top;i++)
    { printf("\n %d",a[i]);}
}