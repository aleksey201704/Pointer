#include <iostream>

using namespace std;

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);


void main() {
	setlocale(LC_ALL, "");

	int n;
	cout << "Вевесмти размер"; cin >> n;
	// обьявление динамического массива
	int* arr = new int[n];

	// обраюжение элемнтов к динамического массива

	FillRand(arr, n);
	Print(arr, n);
	
	// удаление динамического массива.
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		// через арифметитку указателей и оператор разыменования
		*(arr + i) = rand() % 100;
	}
}

void Print(int* arr, const int n)

{
	for (int i = 0; i < n; i++)
	{
		// через оператор индексирования
		cout << arr[i] << "\t";

	}
}
