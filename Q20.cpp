#include<iostream>
using namespace std;
void removeDuplicate(int a[], int n1)
{
    // for(int i=0; i<n1;i++)
    // {
    //   for(int j=i+1; j<n1;j++)
    //    {
    //       if(a[i]==a[j])
    //         a[j]=0;
    //    }
    // }
   for(int i=0;i<n1;i++)
      cout<<a[i]<<" ";
}


int main()
{
    // void intersection(int [], int, int [], int );
    int n1,n2;
    cout<<"enter 1st array size\n";
    cin>>n1;
    /*cout<<"enter 2nd array size"<<endl;
    cin>>n2;*/
    int a[n1],b[n2];
    cout<<"enter 1 \n";
    for(int i=0;i<n1;i++)
      cin>>a[i];

    /*cout<<"enter 2 \n";
    for(int j=0;j<n2;j++)
      cin>>a[j];
*/
    removeDuplicate(a,n1);
    cout<<endl;
    //removeDuplicate(b,n2);

    // intersection(a,n1,b,n2);
    return 0;
}


// void intersection(int a[], int n1, int b[], int n2)
// {
//     for(int i=0;i<n1;i++)
//     {
//         if(a[i]==0)
//           continue;
//         for(int j=0;j<n2;j++)
//         {
//             if(a[i]==b[j])
//             {
//                 cout<<a[i];
//             }
//         }
//     }
// }