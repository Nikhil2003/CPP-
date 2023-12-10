// rite a C++ program to create a string with the last character added at the front and back of a given string of length 1 or more
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    int l=str.length();
    char ch1=str[l-1];
    string str2;
    str2=ch1+str+ch1;
    cout<< str2;
    // or one more method is given below
    /*int m=l+2;
    char ch[m];
    ch[0]=ch1;
    ch[m-1]=ch1;
    
    for( int i=0;i<l;i++)
    {
        ch[i+1]=str[i];
    }
    for(int i=0;i<m;i++)
    {
        cout<<ch[i];
    }*/
    return 0;
}