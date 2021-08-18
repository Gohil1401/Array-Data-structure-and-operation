#include<iostream>
using namespace std;

/* void Rshift(int arr[],int n)
{
    int temp=arr[n-1];

    for(int i=n-1;i>0;i--)
    {
      arr[i]=arr[i-1];
    }
    arr[0]=temp;
} */

void Lshift(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Lshift(arr,n);
    cout<<"after right shift : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
