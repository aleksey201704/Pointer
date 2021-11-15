#pragma once
#include "sdfx.h";

void FillRand(int * arr , int * n) {
	for (int i = 0; i < *n; i++)
	{
		arr[i] = rand() % 100;
	}
}