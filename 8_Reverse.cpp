#include<iostream>
using namespace std;

void Reverse(int arr[],int n)
{
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Reverse(arr,n);

    cout<<"After reverse : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
