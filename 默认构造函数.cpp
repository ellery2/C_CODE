#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Date
{
public:
	Date()
	{
		_year = 1900;
		_month = 1;
		_day = 1;
	}
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
// ���²��Ժ�����ͨ��������
//���ܣ���Ϊȫȱʡ���޲εĹ��캯������Ĭ�Ϲ��캯������������֪�������ĸ�
void Test()
{
	Date d1;
}

int main()
{
	Test();
}