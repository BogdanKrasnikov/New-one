#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n\tПрактическая работа. ТЕМА: NaturNumber. \n";
	cout << endl << "\tВведите число: ";
	int n;
	cin >> n;
	int A[40][40];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 100;
		}
	}
	cout << endl << endl <<

	cout << endl << endl << "\t";
	system("pause");
	return 0;
}