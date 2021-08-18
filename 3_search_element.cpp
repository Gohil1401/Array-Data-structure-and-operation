#include<iostream>
using namespace std;

int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }

    return -1;
}


int main()
{
    int arr[]={2,3,45,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int a;
    cout<<"Enter Key : ";
    cin>>a;
    int n=search(arr,size,a);

    if(n==-1)
        cout<<"Element not found ";
    else
        cout<<"element found in : "<<n+1<<" place";
}
