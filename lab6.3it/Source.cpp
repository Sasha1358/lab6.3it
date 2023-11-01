#include <iostream>
#include <time.h>
#include <Windows.h> 
#include <iomanip>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
}

int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0)
			S += a[i];
	return S;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = -20;
	int High = 30;

	Create(a, n, Low, High, 0);
	cout << "Масив = ["; Print(a, n);cout << "  ]" << endl;
	cout << "Cума додатніх елементів масиву = " << Sum(a, n) << endl;
	return 0;
}
