#include <iostream>

using namespace std;

int main()
{
	int i, n,min;
	cout << "Vvedite N\n";
	cin >> n;
	int* a = new int[n];
	cout << "Vvedite elementi massiva\n";
	for (i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	min = a[2];
	for (i = 4;i < n;i += 2)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	cout << min;
}