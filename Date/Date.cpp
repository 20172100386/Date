#include "stdafx.h"
#include<iostream>
using namespace std;
class CDate
{
protected:
	int year;
	int month;
	int day;
public:

	CDate();
	CDate(int ty, int tm, int td);
	void display();
	~CDate();
};

CDate::CDate()
{
	year = 2017;
	month = 12;
	day = 1;
	cout << "基类默认构造函数" << year << "年" << month << "月" << day << "日" << endl;
}
CDate::CDate(int ty, int tm, int td)
{
	year = ty;
	month = tm;
	day = td;
	cout << "基类构造函数" << year << "年" << month << "月" << day << "日" << endl;
}
void CDate::display()
{
	cout << "基类dispaly" << year << "年" << month << "月" << day << "日" << endl;
}
CDate::~CDate(void)
{
	cout << "基类析构函数" << year << "年" << month << "月" << day << "日" << endl;
}
class CMydate :public CDate
{
public:
	CMydate(int ty, int tm, int td)
	{
		year = ty;
		month = tm;
		day = td;
		cout << "派生类构造函数" << year << "年" << month << "月" << day << "日" << endl;
	}
	~CMydate()
	{
		cout << "派生类析构函数" << year << "年" << month << "月" << day << "日" << endl;
	}
};
int main()
{
	CMydate omydate1(2018, 6, 4);
	omydate1.display();
	return 0;
}
