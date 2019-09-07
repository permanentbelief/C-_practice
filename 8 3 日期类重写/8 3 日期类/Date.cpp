#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

//class Date
//{
//public:
//	int GetMonthDay（int year, int month)
//	{
//		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, };
//		if (month == 2 &&)
//	}
//}
// 前置++ 和后置++
// const Date d;
// d.Print(); //&d const Date*  传参传不过去 const Date* 传不到 Date*

// void Print() //Date* this，this是隐含的参数，不能在Date* this 前加const  ＋const 
//这里用const修饰的是*this
// {
//		cout << year << month << date << endl;
// }
// const 对象     调非const成员函数 不行 不能传参过去让非const成员函数修改。
// const 对象调 const成员函数 可以
// const 对象调 普通          不可以
// 普通      调 const         可以
// 普通      调 普通          可以
// 成员函数 可能会调用成员函数
// 突破类域 + this指针 
//三种方式：  对象obj.     指针->      类名::  访问类共有的成员函数，告诉编译器到哪去找
// 在一个类里可以调用其他的成员函数。
// 

//初始化列表: 
//
class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int Months[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		else
		{
			return Months[month];
		}
	}
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
		if (_year < 0 || _year > 2100 || _month < 0 || _month >13 || _day < 0
			|| _day > GetMonthDay(_year, _month))
		{
			cout << " 输入不合法 " << endl;
		}
	}
	Date (const Date& d)
	{
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
		
	}
	~Date()
	{

	}
	Date& operator=(const Date& d)
	{
		if (*this != d)
		{
			this->_year = d._year;
			this->_month = d._month;
			this->_day = d._day;
		}
		return *this;
	}
	Date &operator+=(int days)
	{
		_day = _day + days;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			if (_month == 12)
			{
				_year++;
				_month = 1;
			}
			else
			{
				_month++;
			}

		}
		return *this;
	}
	Date operator+(int days)
	{
		Date tmp = *this;
		tmp += days;
		return tmp;
	}
	Date& operator-=(int days)
	{
		_day =  GetMonthDay(_year, _month) - days  ;
		while ( _day <  0)
		{
			_month--;
			if (_month == 0)
			{
				_year--;
				_month = 12;
			}
			_day = GetMonthDay(_year, _month) + _day;
		}
		return *this;
	}
	Date operator-(int days)
	{
		Date tmp = *this;
		tmp -= days;
		return tmp;
	}
	
	
	
	
	
	
	
	
	
	
	int operator-(const Date& d); // 算两个日期相差几天
	Date& operator++()
	{
		*this += 1;
		return *this;
	}
	Date operator++(int)
	{
		Date tmp = *this;
		*this += 1;
		return tmp;
	}
	Date& operator--();
	Date operator--(int);
	bool operator>(const Date& d)const
	{
		if (_year < d._year)
		{
			return false;
		}
		if (_year == d._year)
		{
			if (_month < d._month)
			{
				return false;
			}
			if (_month == d._month)
			{
				if (_day < d._day)
				{
					return false;
				}
			}
		}
		return true;
			
	}
	bool operator>=(const Date& d)const
	{
		return (*this > d || *this == d);
	}
	bool operator<(const Date& d)const
	{
		return (!(*this >= d));
	}
	bool operator<=(const Date& d)const
	{
		return (!(*this > d));
	}
	bool operator==(const Date& d)const
	{
		return (_year == d._year&&_month == d._month && _day == d._day);
	}
	bool operator!=(const Date& d)const
	{
		return (!(*this == d));
	}
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date date1(1900, 1, 3);
	date1.Print();
	Date date2(date1);
	date2.Print();
	cout << (date1 != date2) << endl;
	cout << date1.operator==(date2) << endl;
	Date date3;
	date3.Print();
	date3 = date1;
	date3.Print();
	date3 += (30);
	date3.Print();
	date3 -= (33);
	date3.Print();
	system("pause");
}