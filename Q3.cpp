// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class sample
{
  private:
  int a,b;
  public:
   sample(int x,int y)
   {
       a=x;
       b=y;
   }
   void display()
   {
    cout<<a<<endl;
    cout<<b<<endl;
   }
};
int main() {
    int a1,b1;
    cout<<"enter\n";
    cin>>a1;
    cin>>b1;
    sample obj(a1,b1);
    obj.display();
    
    return 0;
}