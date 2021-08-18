#include<iostream>
using namespace std;

class array
{
    public:
        int *A;
        int n;

        array(int n)
        {
            this->n=n;
            A=new int[n];
        }

        void create()
        {
            cout<<"enter elements : ";
            for(int i=0;i<n;i++)
            {
                cin>>A[i];
            }
        }

        void display()
        {
            cout<<"Array is : ";
            for(int i=0;i<n;i++)
            {
                cout<<A[i]<<" ";
            }
        }

};


int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    array  arr(n);
    arr.create();
    arr.display();
}
