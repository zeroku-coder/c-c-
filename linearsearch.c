#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a[10],i,n,data;
    printf("\n enter the size of array: ");
    scanf("%d",&n);
    printf("\n enter the element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the element you want to serach in array:");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            printf("\n element found");
            getch();
            exit(0);
        }
    }
     printf("\n element not found");
    getch();
}
/* the above program is linear serach without flag 
we can use a flag to for finding/seraching a element
then code of body will be:-
void main()
{ 
    int i,a[10],n,data,flag;
    flag=0;
     printf("\n enter the size of array: ");
    scanf("%d",&n);
    printf("\n enter the element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the element you want to serach in array:");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            flag=1;
        }
    }
    if(flag==1)
    printf(" \n element found :)");
    else
    printf("\n element not foound :(")
getch();
}
*/