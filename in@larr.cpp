#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 20 
int main()
{
    int n,l,a[max];
    cout<<"enter the limit of array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for ( int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter location where you want to insert new element in array:";
    cin>>l;
    if (l>max)
    {
        cout<<"overflow";
        exit(0);
    }
    for(int i=n+1;i>l;i--)
    {
        a[i]=a[i-1];
    }
    cout<<"enter the element you want to insert:";
    cin>>a[l];
    cout<<"arrray after insertion is :"<<endl;
    for(int i=0;i<n+1;i++)
    {
        cout<<a[i];
    }   
    return 0;
}