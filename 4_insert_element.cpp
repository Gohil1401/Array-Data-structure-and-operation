#include<iostream>
using namespace std;
int insert(int arr[], int capacity,int n,int index,int key);

int main()
{
    int arr[50]={1,2,3,4,5,6,7};
    int capacity=sizeof(arr)/sizeof(arr[0]);
    int n=7;

    cout<<"Before insertion : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    int index,key;
    cout<<"Enter index and key : ";
    cin>>index>>key;

    n=insert(arr,capacity,n,index,key);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int insert(int arr[], int capacity,int n,int index,int key)
{
    int i;
    if(n>=capacity)
    {
        return n;
    }
    else
    {
        for( i=n;i>=index;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[i]=key;
        return (n+1);
    }
}

