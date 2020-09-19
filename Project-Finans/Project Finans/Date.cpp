#include "Date.h"

ostream& operator << (ostream& out, const Date& date)
{
	out << date.day << "." << date.mount << "." << date.year << endl;
	return out;
}

istream& operator>>(istream& in, Date& date)
{
	cout << "��� -> ";
	cin >> date.year;
	do
	{
		cout << "����� -> ";
		cin >> date.mount;

		if (date.mount > 12 || date.mount < 1)
			cout << "� ���� 12 �������! ���������� ���.\n";
	} while (date.mount > 12 || date.mount < 1);
	do
	{
		cout << "���� -> ";
		cin >> date.day;
		if (date.day > date.day_a_mounts[date.mount - 1] || date.day < 1)
			cout << "� ���� ������ " << date.day_a_mounts[date.mount - 1] << " ����! ���������� ���.\n";
	} while (date.day > date.day_a_mounts[date.mount - 1] || date.day < 1);

	return in;
}

Date::Date(int day, int mount, int year)
{
	this->day = day;
	this->mount = mount;
	this->year = year;
}

bool Date::operator>(const Date& date)
{
	if (year == date.year)
	{
		if (mount == date.mount)
		{
			if (day == date.day)
			{
				return false;
			}
			else
			{
				return day > date.day;
			}
		}
		else
		{
			return mount > date.mount;
		}
	}
	else
	{
		return year > date.year;
	}
}

bool Date::operator<(const Date& date)
{
	if (year == date.year)
	{
		if (mount == date.mount)
		{
			if (day == date.day)
			{
				return false;
			}
			else
			{
				return day < date.day;
			}
		}
		else
		{
			return mount < date.mount;
		}
	}
	else
	{
		return year < date.year;
	}
}

Date Date::operator=(const Date& date)
{
	day = date.day;
	mount = date.mount;
	year = date.year;

	return *this;
}