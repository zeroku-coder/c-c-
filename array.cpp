#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int n,i,a[20];
    

    cout<<"Enter the length of array:";
    cin>>n;
    cout<<"enter the element of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the element of the array are:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}