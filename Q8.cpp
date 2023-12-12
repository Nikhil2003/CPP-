/*
AAAAAA
BBBBBB
CCCCCC
DDDDDD
EEEEEE
FFFFFF
*/
#include<iostream>
using namespace std;

int main()
{
     int c=65;
    for(int i=0;i<6;i++)
    {
        int n=6;
        while(n>0)
       {
         cout<<char(c);
         n=n-1;

       }
       cout<<endl;
       c=c+1;
    }
    return 0;
}