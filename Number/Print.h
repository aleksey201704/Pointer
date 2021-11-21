#pragma once
#include "sdfx.h"

template <typename T> void Print(T arr[], int * n) {
	
	for (int i = 0; i < *n; i++)
	{
		cout << arr[i] << "\t";

	}
}
