// Write a C++ program to create a string that is 4 copies of the 2 front characters of a given string.If the given string length is less than 2 return the original string
#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the string" << endl;
  string str;
  getline(cin, str);
  int l = str.length();
  if (l < 2)
  {
    cout << str;
  }
  else
  {
    for (int i = 1; i <= 4; i++)
    {
      int c = 0;
      while (c < 2)
      {
        cout << str[c];
        c++;
      }
    }
  }

  return 0;
}
