#include<iostream>
using namespace std;
class Sample{
  int x;
  public:
    void getdata(){
        cout<<"Enter the number\n";
        cin>>x;
    }
    void putdata(){
        cout<<x<<endl;
    }
    void operator++(){
        x=x+1;
    }
};

int main()
{
    Sample aa;
    aa.getdata();
    cout<<"the original data\n";
    aa.putdata();
    ++aa;
    cout<<"After prefix increment\n";
    aa.putdata();
    return 0;
}