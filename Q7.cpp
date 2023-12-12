/*
1
21
321
4321*/
#include<iostream>
using namespace std;

int main()
{
    int c,i;
    for(i=1;i<=10;i++)
    {
        c=i;
        while(c>0)
        {
            cout<<c;
            c=c-1;
        }
        cout<<endl;
    }
    return 0;
}