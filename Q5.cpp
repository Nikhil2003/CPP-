#include <iostream>
using namespace std;
int main()

{

int row = 4;

int i;

for (i = 1; i <= row; i++)

{

for (int j = 1; j <= 2 * i - 1; j++) {

cout << 1 << " ";

}

int space = 4*row - 4 * i;

for (int j = 1; j <= space; j++)

{

cout << " ";

}

for (int j = 1; j <= 2 * i - 1; j++)

{

cout << i << " ";
}
cout << endl;

}

return 0;

}