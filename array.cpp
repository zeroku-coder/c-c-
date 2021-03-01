//program to use array in c++
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int n,i,a[20];
    

    cout<<"Enter the length of array:";//define the size of array
    cin>>n;
    cout<<"enter the element of array:";
    for(i=0;i<n;i++)//loop to enter the elements in array
    {
        cin>>a[i];
    }
    cout<<"the element of the array are:";
    for(i=0;i<n;i++)//loop to print element of array
    {
        cout<<a[i]<<" ";
    }
    
    
}
