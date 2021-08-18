#include<iostream>
using namespace std;

int append(int arr[],int size,int a,int n)
{
    if(n>size)
    {
        return n;
    }
    arr[n]=a;
    return n+1;
}

int main()
{
    int arr[10]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=6;

    cout<<"Before insertion : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    int a;
    cout<<"Enter element to append : ";
    cin>>a;

    n=append(arr,size,a,n);

    cout<<"after insertion : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
