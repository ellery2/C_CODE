#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Date
{
public:
	Date(int year = 2023, int month = 2, int day = 15)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	bool operator==(const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	Date d2(2023, 2, 15);
	printf("%d\n", d1 == d2);
	return 0;
}