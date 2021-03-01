#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 20

int main()
{
    int n,a[max],c[max],s[max],v,t;
    v=0;
    cout<<"enter the number of element in array :";
    cin>>n;
    cout<<"enter the elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {           
        for(int j;j<n;j++)
        {
            if(a[i]<c[j])
            { v++ ;
            }            
        s[i]=a[v];
        }
       
       v=0;
    }
    
    cout<<"sorted array is :";
    for( int i=0;i<n;i++)
    {
        cout<<s[i];

    }   

return 0;

} 