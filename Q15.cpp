//Leet code:- finding the complement of the base 10 integer;
#include<iostream>
using namespace std;

int main()
{
        int n=9;
        int m=n;
        int mask=0;
        if(n==0)
        {
            cout<<"1";
        }
        while(m!=0)
        {
            mask=mask<<1 | 1;
            m=m>>1;
        }
        int ans = ~n & mask;
        cout<<ans;
        
    
    return 0;
}