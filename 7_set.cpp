#include<iostream>
using namespace std;

void set(int arr[],int n,int index,int a)
{
    if(index>=0 && index<=n)
    {
        arr[index-1]=a;
    }
    else
    {
        cout<<"invalid index : ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int index,value;
    cout<<"enter index and value : ";
    cin>>index>>value;

    set(arr,n,index,value);
    cout<<"after set : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
