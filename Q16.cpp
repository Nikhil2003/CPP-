/*
Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1

Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16

Example 3:

Input: n = 3
Output: false
*/
#include<iostream>
using namespace std;

int main()
{
    int n=0;
     if(n==1)
          cout<<"true";
        if(n==0){
          cout<<"false";
            exit(0);
        }
    while(n!=2)
    {
      if(n%2!=0)
        {
            cout<< "false";
              exit(0);
        }
        cout<<n;
        n=n/2;

    }
    cout<<"true";
    return 0;
}