#include<iostream>
using namespace std;
int search(int arr[],int n,int a);

int Delete(int arr[],int n,int a)
{
    int pos=search(arr,n,a);

    if(pos==-1)
        cout<<"element is not found ";
    else
        for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    return (n-1);

}

int search(int arr[],int n,int a)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
            return i;
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int capacity=sizeof(arr)/sizeof(arr[0]);

    cout<<"array is : ";
    for(int i=0;i<capacity;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    int a;
    cout<<"which element want you delete : ";
    cin>>a;

    int n=Delete(arr,capacity,a);
    cout<<"array Now : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
