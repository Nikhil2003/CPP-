//Define array of object with example.
#include<iostream>
#include <string>

using namespace std;

class employee
{
    int id;
    string name;
    public:
    void get_id();
    void put_id();
};
void employee:: get_id()
{
    cout<<"enter the id\n";
    cin>>id;
    cin.ignore();
    cout<<"enter the name\n";
    getline(cin,name);


}
void employee::put_id()
{
    cout<< id<<" ";
    cout<< name <<endl;

}

int main()
{
    employee emp[3];
    cout<<"Enter the 5 employee data\n";

    for (int i=0; i<3;i++)
    {
        emp[i].get_id();
    }
    cout<<"5 Employees details is here\n";
    for (int i=0; i<3;i++)
    {
      emp[i].put_id();

    }
    return 0;
}