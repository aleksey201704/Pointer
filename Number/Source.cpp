#include "sdfx.h"
#include "Functions.h"
#include "FillRand.h"
#include "Print.h"

const int m = 10;

void main() {
	setlocale(LC_ALL, "");
	int arr[m];
	int  n = 10;
	int p = 0,np=0;
	
	FillRand(arr, &n); // ѕочему массив не ссылка на указатель????
	Print(arr, &n);
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			p++;
		}
		else {
			np++;
		}

	}

	int* even = new int[np];
	int* odd = new int[p];

	p = 0;
	np = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			*(even + p)= arr[i];
			p++;
		}
		else {
			*(odd+np) = arr[i];
			np++;
		}

	}

	
	for (int i = 0; i < p; i++)
	{
		cout << *(even+i) << "\t";
	}
	
	cout << endl;

	
	for (int i = 0; i < np; i++)
	{
		cout << *(odd + i) << "\t";
	}


}