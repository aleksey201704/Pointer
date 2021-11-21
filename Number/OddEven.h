#pragma once
#include "sdfx.h"


template <typename T> void OddEven(T even[], T odd[], T arr[], int* n)
{
	int  p = 0, np = 0;
	
	for (int i = 0; i < *n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			*(even + p) = arr[i];
			p++;
		}
		else {
			*(odd + np) = arr[i];
			np++;
		}

	}
	cout << "Четные - ";
	for (int i = 0; i < p; i++)
	{
		cout << even[i] << "\t";
	}

	cout << endl;
	cout << "Нечетные  - ";

	for (int i = 0; i < np; i++)
	{
		cout << odd[i] << "\t";
	}
}

