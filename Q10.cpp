/*
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG
*/
#include<iostream>
using namespace std;

int main()
{
    int c=70;
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=i;j++)
        {
            c=c+1;
            cout<<char(c);

        }
        c=c-i-1;
        cout<<endl;
    }
    return 0;
}