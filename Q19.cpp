/*enter the number
9
1 3 2 1 3 5 9 2 9
Unique number in the given array:-5 
*/
#include<iostream>
using namespace std;
int flag=0;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=flag+1;

            }
            if(flag==2)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Unique number in the given array:- "<<arr[i];
            break;
        }
    }
    return 0;
}