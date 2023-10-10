#pragma once



struct Point
{
	char name;
	int x;
	int y;

	void set(char n, int _x, int _y)
	{
		name = n;
		x = _x;
		y = _y;
	}


	void print()
	{
		cout << name << "( x = " << x << ", y = " << y << " )" << endl;
	}

	float len2Point(Point p)
	{
		return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
	}
};








struct Date
{
	int day = 1;
	int month = 1;
	int year = 1900;

	void print()
	{
		if (day < 10)
			cout << 0;
		cout << day << ".";
		if (month < 10)
			cout << 0;
		cout << month << ".";
		cout << year << endl;
	}
};




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


struct Student
{
	char* name;
	Date birthDay;

	void print()
	{
		cout << setw(20) << left << name << " ";
		birthDay.print();
	}
};


struct Engine
{
	int cylinders = 4;

	void start()
	{
		cout << "Engine start" << endl;
	}

	void end()
	{
		cout << "Engine end" << endl;
	}
};


struct Car
{
	Engine engine;

	void move()
	{
		engine.start();
		cout << "Car move" << endl;
		engine.end();
	}

	void beep()
	{
		cout << "Beep beep" << endl;
	}
};