/*
********
 *******
  ******
   *****
    ****
     ***
      **
       *
*/
#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(int k=8;k>=i;k--)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}