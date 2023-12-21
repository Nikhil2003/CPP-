//Reversing the array without using another array;
//1 2 3 4 5 6 7 8 9 0
// 0 9 8 7 6 5 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<"enter the element\n";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];

    }
    int l=10-1;
    for(int i=0; i<10/2; i++)
    {
        int temp = a[i];
        a[i]=a[l];
        a[l]=temp;
        l=l-1;
    }

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";

    }
    
    return 0;
}