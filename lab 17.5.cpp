#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	cout << "Vvedite N \n";
	cin >> n;
	int* mas = new int[n];
	cout << "Vvedite elementi massiva\n";
	for (i = 0;i < n;i++)
	{
		cin >> mas[i];
	}
	for (i = 0;i < n;i++)
	{
		for (j = i+1;j < n;j++)
		{
			if (mas[i] == mas[j])
				cout << i << " " << j;
		}
	}
}