#include "sdfx.h"
#include "Functions.h"
#include "FillRand.h"
#include "Print.h"

const int m = 10;

void main() {
	setlocale(LC_ALL, "");
	int arr[m];
	
	FillRand(arr, m);
	Print(arr, m);

}