#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 20
int main(void)
{
    int a[max],i,j;
    printf("\n Enter the Limit");
    scanf("%d",&j);
    if (j>=max)
    {
        printf("\n array size doen'nt fulfill demand");
        exit(0);
    }
    printf("\n enter the element");
    for(i=0;i<j;i++)
    scanf("%d",&a[i]);
    for(i=j+1;i>0;i--)
    a[i]=a[i-1];
    printf("enter the new element");
    scanf("%d",&a[0]);
    printf("\n After Insert");
    j++;
    for(i=0;i<j;i++)
    printf("%d",a[i]);

}