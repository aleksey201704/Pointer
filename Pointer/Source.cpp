#include <iostream>

using namespace std;
//#define pointer_and_Arrays
//#define pointer_basic

void main() 
{
	setlocale(LC_ALL, "");
	
#ifdef pointer_basic
	int a = 2;
	int* pa = &a; // pa - pointer to 'a'

	cout << a << endl; // ����� ���������� "�" �� �����

	cout << &a << endl; // ��������� ������ ���������� "�" ->>
	// -->> ����� ��� �������

	cout << pa << endl; // ����� ������ ���������� "�", ����������� � ��������� 'pa'

	cout << *pa << endl;// ������������� ��������� 'pa', � ��������� �������� �� ������ � ���� ���������

	int* pb;
	int b = 3;

	pb = &b;

#endif // pointer_basic

#ifdef pointer_and_Arrays
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;

	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
#endif // pointer_and_Arrays

}