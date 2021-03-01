#include<stdio.h>
#define max 20
using namespace std;

void main()
{
    int a[max],i,e,n,mid,top,min;
    min=0,top=n-1;
    printf("enter the number of element in array \n");
    scanf("%d",&n);
    printf("enter the element in sorted from:");
    for(int i;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search\n");
    scanf("%d",&e);
    
    while(a[mid]!=e && min<top)
    {   mid=(min+top)/2;
        if(e<a[mid])
        {
            top=mid-1;
        }
        else
        {
            min=mid+1;
        }
    }
   printf("element found")

}