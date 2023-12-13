/*
       1
      121
     12321
    1234321
   123454321
  12345654321
 1234567654321
123456787654321
*/
#include<iostream>
using namespace std;

int main()
{
    int c=0,inter,d=1;
    for(int i=1;i<=8;i++)
    {
        inter=1;
        for(int j=7;j>=i;j--)
        {
            cout<<" ";
        }
        c=c+2;
        for(int k=1;k<c;k++)
        {
          if(inter<i)
          {
            cout<<d;
            d=d+1;
          }
          if(inter>i)
          {
            d=d-1;
            cout<<d;
          }
          if(inter==i)
          {
            cout<<d;
            
          }
          inter=inter+1;
        }
        cout<<endl;
    }
    return 0;
}