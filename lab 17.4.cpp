#include <iostream>

using namespace std;

int main()
{
	int n, i;
	cout << "Vvedite N \n";
	cin >> n;
	int* mas = new int[n];
	cout << "Vvedite elementi massiva\n";
	for (i = 0;i < n;i++)
	{
		cin >> mas[i];
	}
	if ((mas[n - 3] > mas[n - 2]) && (mas[n - 3] > mas[n - 1]))
		cout << "localnii maximum" << mas[n-3];
	if ((mas[n - 2] > mas[n - 3]) && (mas[n - 2] > mas[n - 1]))
		cout << "localnii maximum" << mas[n - 2];
	if ((mas[n - 1] > mas[n - 2]) && (mas[n - 1] > mas[n - 3]))
		cout <<"localnii maximum" << mas[n - 1];
}