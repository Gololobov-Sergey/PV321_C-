#include<iostream>
#include<Windows.h>
using namespace std;


enum NOMINAL
{
	SIX = 6, SEVEN, EIGHT, NINE, TEN = 100, JACK, QWEEN, KING, ACE
};

enum SUIT
{
	SPADE = 1, CLUB, DIAMOND, HEARH
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP

	// type name[size];

	srand(time(0));

	const int size = 10;
	int arr[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	/*for (size_t i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}*/

	/*int count0 = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0) 
		{
			count0++;
		}
	}
	cout << "Count 0 = " << count0 << endl;*/

	/*int count1 = 0;
	for (size_t i = 0; arr[i] != 1; i++)
	{
		count1++;
	}
	cout << "Count 0 to first 1 = " << count1 << endl;*/

	/*int k = 0;
	for (size_t i = 1; i < size; i += 2)
	{
		if (arr[i] == 1)
		{
			k++;
		}
	}
	cout << k << endl;*/


	/*int max = arr[0], min = arr[0], imax = 0, imin = 0;
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	}
	
	int start = (imax > imin) ? imin : imax;
	int end = (imax > imin) ? imax : imin;

	int s = 0;
	for (size_t i = start+1; i < end; i++)
	{
		s += arr[i];
	}
	cout << s << endl;*/


	//int a = 5, b = 4;
	/*int t = a;
	a = b;
	b = t;*/
	//swap(a, b);

	int B[size];
	int c = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) 
		{
			B[c++] = arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	for (int i = 0; i < c; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;




}