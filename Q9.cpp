/*
A
BC
CDE
DEFG
EFGHI
*/
#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int count = 65;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << char(count);
			count = count + 1;
		}
		int k = i - 1;
		while (k > 0)
		{
			count = count - 1;
			k = k - 1;
		}
		cout << endl;
	}
	return 0;
}