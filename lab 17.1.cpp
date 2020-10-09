#include <iostream>

using namespace std;

int main()
{
	int i, k, l, n, sum, f;
	float sr;
	cout << "Vvedite N \n";
	cin >> n;
	int* mas = new int[n];
	cout << "Vvedite elementi massiva\n";
	for (i = 0;i < n;i++)
	{
		cin >> mas[i];
	}
	cout << "Vvedite K L\n";
	cin >> k >> l;
	sum = 0;
	f = 0;
	while (k <= l)
	{
		sum += mas[k];
		k++;
		f++;
	}
	sr = (float)sum / f;
	cout << sr;
}