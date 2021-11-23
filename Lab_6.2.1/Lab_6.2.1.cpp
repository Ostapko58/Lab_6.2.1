// Lab_6.2.1.cpp
// < Онишків Остап >
// Лабораторна робота No 6.2.1
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами 
// Варіант 5

#include<iostream>
#include<iomanip>
#include <Windows.h>
#include<time.h>
using namespace std;

void Create(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = 200. * rand() / RAND_MAX - 100;
	}
}

void Show(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << a[i];
	}
	cout << endl;
}

int SearchMin(int*a,int n)
{
	int min = a[0];
	int MinIndex = -1;
	
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2!=0&&min>a[i])
		{
			min = a[i];
			MinIndex = i;
		}
	}

	return MinIndex;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));

	const int n = 25;
	int a[n];

	Create(a, n);
	Show(a, n);
	int min= SearchMin(a,n);
	
	if (min==-1)
	{
		cout << "Немає підходящого числа(" << endl;
	}
	else
	{
		cout << "Індекс шуканого числа = " << min << endl;
	}

	return 0;
}
