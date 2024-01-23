#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    string text,insert,insert2,age2;
    int age;

    ofstream outfile ("file");
    cout<<"Enter the Name in the file\n";
    getline(cin,insert);
    outfile<<insert;

    // cout<<"Enter the age\n";
    // cin>>age;
    // outfile<<age;
    outfile.close();

    ifstream inputfile("file");
    inputfile>>insert2;
    // inputfile>>age2;
    inputfile.close();
    // cout<<"the age u given to us: "<< age2<<endl;
    cout<<"the name u given to us: "<< insert2<<endl;
    return 0;
}