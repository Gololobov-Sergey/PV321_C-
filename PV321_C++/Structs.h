#pragma once



struct Point
{
	char name;
	int x;
	int y;
};


void printPoint(Point p)
{
	cout << p.name << "( x = " << p.x << ", y = " << p.y << " )" << endl;
}


float len2Point(Point p1, Point p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


struct Date
{
	int day = 1;
	int month = 1;
	int year = 1900;
};


void printDate(Date d)
{
	if (d.day < 10)
		cout << 0;
	cout << d.day << ".";
	if (d.month < 10)
		cout << 0;
	cout << d.month << ".";
	cout << d.year << endl;
}

Date addDay(Date d)
{
	int dmax;
	switch (d.month)
	{
	case 4: case 6: case 9: case 11: dmax = 30; break;
	case 2:                          dmax = 28; break;
	default:                         dmax = 31;	break;
	}
	
	Date newDate = d;

	newDate.day += 1;

	if (newDate.day > dmax)
	{
		newDate.day = 1;
		newDate.month++;
		if (newDate.month == 13)
		{
			newDate.month = 1;
			newDate.year++;
		}
	}
	return newDate;
}



struct Human
{
	char* name;
	Date birthDay;
};