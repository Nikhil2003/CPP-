//concept of Access member function in inheritance 
#include <iostream>
using namespace std;
class Base 
{
public:
 int pub=3;

protected:
   int prot = 2;

private:
    int pri = 1;

public:
   int getpri()
   {
    return pri;
   }
};

class derived: private Base 
{
public:
    int getprot()
    {
        return prot;
    }
    int getpub()
    {
        return pub;
    }
    int getpvt()
    {
        getpri();
    }
};

int main()
{
    derived d;
    cout<<d.getpub()<<endl;
    cout<<d.getpvt()<<endl;
    cout<<d.getprot()<<endl;
    return 0;
}