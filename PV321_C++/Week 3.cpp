/*int a = 5;
cout << a << endl;
cout << typeid(a).name() << endl;
cout << sizeof(a) << endl;
cout << &a << endl;

int* pa = &a;
cout << pa << endl;
cout << *pa << endl;
*pa = 100;

cout << a << endl;

int b = 44;
pa = &b;
*pa = 500;

cout << b << endl;

float d = 2.3f;
float* pd = &d;*/


//int a = 5;
//int* pa = &a;
//int b = 5;
//int* pb = nullptr; 
//cout << pb << endl;

///*cout << pa << endl;
//cout << pa - 1 << endl;
//pa = pa - 1;
//cout << *pa << endl;*/

//cout << (pa != pb) << endl;

/*const int size = 5;
float arr[size];
setArray(arr, size, 4);
printArray(arr, size);*/

/*for (size_t i = 0; i < size; i++)
{
	cout << *(arr + i) << " ";
}
cout << endl;

for (int* i = arr; i <= arr + 4; i++)
{
	cout << *i << " ";
}
cout << endl;*/

//arr++;  no!!!
/*int* p = arr;
p++;*/

//cout << *(arr + 0) << endl; // arr[0]
//cout << *(arr + 1) << endl; // arr[1]
//cout << *(arr + 2) << endl;

//Використовуючи покажчики та оператор розіменування, визначити 
// найбільше з двох чисел.

/*int a = 5, b = 4;
int* pa = &a, * pb = &b;
if (*pa > *pb)
{
	cout << "A >" << endl;
}
else
{
	cout << "B >" << endl;
}*/

// Використовуючи покажчики та оператор розіменування, обміняти 
// місцями значення двох змінних.

/*int* T = pa;
pa = pb;
pb = T;

cout << a << endl;
cout << b << endl;
cout << *pa << endl;
cout << *pb << endl;*/



/*int amount = 0;
for (int* i = arr; i <= arr + 9; i++)
{
	amount += *i;
}
cout << amount << endl;*/

/*char c = 5;
char* pc = &c;
cout << sizeof(pc) << endl;*/




//int n = 5;
////cin >> n;
//int* p = new int[n];
//setArray(p, n);
//printArray(p, n);
//int bbb = 999;
//addElemArray(p, n, bbb);

//printArray(p, n);

//delElemArray(p, n);

//printArray(p, n);

//addElemArrayPos(p, n, 888, 3);

//printArray(p, n);


/*int aa = 55;
int a = 5;       int b = 4;
int* pa = &a;    int& ref = b;
*pa = 100;       ref = 100;
pa = &aa;        ref = aa;*/

//int a = 5;
//int b = 44;

//const int* pa = &a;
////*pa = 100; // no!
//a = 100;
//pa = &b;

//int* const pa = &a;
//*pa = 100;
//pa = &b; // no!


//const int* const pa = &a;
//*pa = 100; //no!
//pa = &b;   //no!

//const int& ref = a;
//ref = 100;

//delete[] p;

/*int sizeA, sizeB = 0;
cin >> sizeA;
int* a = new int[sizeA];
setArray(a, sizeA);
printArray(a, sizeA);
int* b = nullptr;
for (size_t i = 0; i < sizeA; i++)
{
	if (a[i] % 2 == 0 && linerSearch(b, sizeB, a[i]) == -1)
	{
		addElemArray(b, sizeB, a[i]);
	}
}

printArray(b, sizeB);*/