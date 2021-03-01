//program to insert element at the end of array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 20
int main(void)
{
    int a[max],i,j;
    printf("\n Enter the Limit");
    scanf("%d",&j);
    if (j>=max) //checking if the array is not completely full
    {
        printf("\n array size doen'nt fulfill demand");
        exit(0);
    }
    printf("\n enter the element");
    for(i=0;i<j;i++)
    scanf("%d",&a[i]);
    j++;
    printf("enter the new element");
    scanf("%d",&a[j-1]);
    printf("\n After Insert");
    for(i=0;i<j;i++)
    printf("%d",a[i]);

}
