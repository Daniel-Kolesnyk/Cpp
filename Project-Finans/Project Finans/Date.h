#pragma once
#include"Libraries.h"

class Date
{
public:
	Date(int day = 0, int mount = 0, int year = 0);
	~Date() = default;

	friend ostream& operator << (ostream & out, const Date & date);
	friend istream& operator >> (istream & in, Date & date);
	bool operator > (const Date & date);
	bool operator < (const Date & date);
	Date operator = (const Date & date);

private:
	int day;
	int mount;
	int year;
	const int day_a_mounts[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
};

