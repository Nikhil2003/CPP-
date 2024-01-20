#include <iostream>
using namespace std;

class Sample
{

public:
    int a;
    void getdata()
    {
        cout << "enter the number\n";
        cin >> a;
    }

    void putdata()
    {
        cout << "the value is :" << a << endl;
    }

    Sample operator+(Sample bb)
    {
        Sample cc;
        cc.a = a + bb.a;
        return cc;
    }
};

int main()
{
    Sample aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    cout<< cc.a;
    return 0;
}