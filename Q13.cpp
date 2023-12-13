/*
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
*/
#include<iostream>
using namespace std;

int main()
{
    int c=0;
    for(int i=1;i<=8;i++)
    {
        for(int j=7;j>=i;j--)
        {
            cout<<" ";
        }
        c=c+2;
        for(int k=1;k<c;k++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}