#include <iostream>

using namespace std;

int main()
{
	int n, d, i, t;
	cout << "Vvedite N\n";
	cin >> n;
	int* mas = new int[n];
	cout << "Vvedite elementi massiva\n";
	for (i = 0; i < n;i++)
	{
		cin >> mas[i];
	}
	d = mas[1] - mas[0];
	t = 1;
	for (i = 1;i < n;i++)
	{
		if (d != mas[i] - mas[i - 1])
			t = 0;
	}
	if (t == 1)
		cout << d;
	else
		cout << t;
}