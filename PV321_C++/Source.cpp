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


// type name(param)
// {
// 	  body;
// }


void starLine()
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << "*";
	}
	cout << endl;
}

int sum(int a, int b)
{
	int c = a + b;
	return c;
}

float avg3(int a, int b, int c)
{
	float s = (a + b + c) / 3.;
	return s;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP

	// type name[size];

	srand(time(0));


	starLine();
	//
	starLine();

	int c = sum(3, 5);
	cout << sum(3, 5) << endl;


	cout << avg3(3, 4, 6) << endl;


	/*const int size = 10;
	int arr[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/


	////// sort  ////////

	/*for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

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

	/*int B[size];
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
	cout << endl;*/



	// type name[row][col];

	//const int row = 4;
	//const int col = 3;
	//int arr[row][col]; // = { {1,2,3}, {4,5}, {6,7} };

	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		arr[i][j] = rand() % 10;
	//	}
	//}


	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	/*int maxSum = INT_MIN, iRow = 0;
	for (size_t i = 0; i < row; i++)
	{
		int sum = 0;
		for (size_t j = 0; j < col; j++)
		{
			sum += arr[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			iRow = i;
		}
	}
	cout << "Row = " << iRow << endl;*/



	/*int minSum = INT_MAX, iCol = 0;
	for (size_t j = 0; j < col; j++)
	{
		int sum = 0;
		for (size_t i = 0; i < row; i++)
		{
			sum += arr[i][j];
		}
		if (sum < minSum)
		{
			minSum = sum;
			iCol = j;
		}
	}
	cout << "Col = " << iCol << endl;*/


	/*int sum[row];
	for (size_t i = 0; i < row; i++)
	{
		int s = 0;
		for (size_t j = 0; j < col; j++)
		{
			s += arr[i][j];
		}
		sum[i] = s;
	}

	for (size_t i = 0; i < row - 1; i++)
	{
		for (size_t j = 0; j < row - 1 - i; j++)
		{
			if (sum[j] < sum[j + 1])
			{
				swap(sum[j], sum[j + 1]);
				for (size_t k = 0; k < col; k++)
				{
					swap(arr[j][k], arr[j+1][k]);
				}
			}
		}
	}
	cout << endl;

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/

}