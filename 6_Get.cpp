#include<iostream>
using namespace std;

int get(int arr[],int n,int index)
{
    if(index>=0 && index<=n)
        return arr[index-1];
    else
        return -1;
}

int main()
{
    int arr[]={2,3,4,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int index;
    cout<<"Enter index : ";
    cin>>index;

    int c=get(arr,n,index);

    if(c==-1)
        cout<<"enter valid index : ";
    else
        cout<<"Element present in "<<index<<" : "<<c;
}
