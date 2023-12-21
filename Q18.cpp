/*
enter the range
10
enter the element in array
1 2 3 4 5 6 7 8 9 0 //input

2 1 4 3 6 5 8 7 0 9 //output
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the range\n";
    cin >> n;
    cout << "enter the element in array\n";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i = i + 2)
    {
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}