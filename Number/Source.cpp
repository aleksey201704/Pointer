#include "sdfx.h"
#include "Functions.h"
#include "FillRand.h"
#include "Print.h"
#include "OddEven.h"

const int m = 10;

void main() {
	setlocale(LC_ALL, "");
	int arr[m];
	int  n = 10;
	int p = 0,np=0;
	
	FillRand(arr, &n); 
	Print(arr, &n);
	cout << endl;
	
	int* even = new int[np];
	int* odd = new int[p];
		
	OddEven(even, odd, arr, &n);

	
	
	
	
	
	
	

}