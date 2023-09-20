// type name[size];

//srand((unsigned int)time(0));
//
//auto b = 5;
//int a = 5;
//
//decltype(a + b) f;

//starLine();
//
//starLine();
//starLine(25);
//starLine(40, '#');

//int c = sum(3, 5);
//cout << sum(2.6, 5, 'c') << endl;

//cout << avg3(3, 4, 6) << endl;

//func();

/*int a = 5;
a = inc(a);
cout << a << endl;*/


//const int size = 100000;
//int arr[size];
//setArray(arr, size);
//printArray(arr, size);
//Timer t;
//sort(arr, arr + size);
//insertionSort(arr, size);
//cout << t.elapsed() << endl;
//int k = linerSearch(arr, size, 5);
//((k == -1)? cout << "Not found" << endl : cout << k << endl);
//reverseArray(arr, size);
//printArray(arr, size);
//cout << maxValueArray(arr, size) << endl;

/*float arr2[5] = {2.3, 4.5, 3.5, 5.6, 3.1};
setArray(arr2, size);
cout << maxValueArray(arr2, size) << endl;*/

/*for (int i = 0; i < size; i++)
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


// DZ
// шаблон сортування
// 
// конкретна реалізація для СЕТ
// 
// Написати функцію, що реалізує алгоритм бінарного пошуку 
// заданого ключа в одновимірному масиві.


/*int n = 15;
for (size_t i = 0; i < n; i++)
{
	if (i % 2 == 0)
	{
		for (size_t j = n * i + 1; j <= (i+1)*n; j++)
		{
			cout << setw(3) << j;
		}
	}
	else
	{
		for (size_t j = (i+1)*n; j >= i*n+1; j--)
		{
			cout << setw(3) << j;
		}
	}
	cout << endl;
}*/