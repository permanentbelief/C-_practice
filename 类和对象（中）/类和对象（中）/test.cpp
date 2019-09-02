#define _CRT_SECURE_NO_WARNINGS 1 

#include <iostream>
using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1);
//	Date(const Date& d);
//	Date& operator=(const Date& d);
//	Date operator+(int days);
//	Date operator-(int days);
//	int operator-(const Date& d);
//	Date& operator++();
//	Date operator++(int);
//	Date& operator--();
//	Date operator--(int);
//	bool operator>(const Date& d)const;
//	bool operator>=(const Date& d)const;
//	bool operator<(const Date& d)const;
//	bool operator<=(const Date& d)const;
//	bool operator==(const Date& d)const;
//	bool operator!=(const Date& d)const;
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//static int months[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//bool Isleapyear(int year)
//{
//	return  (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
//	
//}
//Date::Date(int year = 1900, int month = 1, int day = 1)
//{
//	_year = (year >= 1900 && year <= 2100) ? year : 1900;
//	_month = (month <= 12 && month >= 1) ? month : month % 12;
//	_day = (day <= months[month] && day >= 1) ? day : day % months[month];
//
//}
//Date::Date(const Date& d)
//{
//
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//}
//Date& Date::operator=(const Date& d)
//{
//	if (*this != d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	return *this;
//}
//Date Date::operator+(int days)
//{
//	int totalday = _day + days;
//	/*while (totalday > months[_month])
//	{
//		totalday -= months[_month];
//		_month +=  1;
//		if (_month > 12)
//		{
//			_year += 1;
//			_month -= 12;
//		}
//	}*/
//	if (Isleapyear(_year))
//		months[2] = 29;
//
//	for (int i = 0; i<days; i++)
//	{
//		_day++;
//		if (_day > months[_month])
//		{
//			_day = 1;
//			_month++;
//			if (_month > 12)
//			{
//				_month = 1;
//				_year++;
//			}
//		}
//	}
//	
//}
//Date Date::operator-(int days)
//{
//	if (Isleapyear)
//	months[_month] = 29;
//	for (int i = 0; i < days; i++)
//	{
//		_day--;
//		if (_day == 0)
//		{
//			_month--;
//			{
//				if (_month == 0)
//				{
//					_year--;
//					_month = 12;
//				}
//				_day = months[_month];
//			}
//		}
//	}
//	
//}
//Date& Date::operator++() // 后置++
//{
//	
//	
//}
//Date Date:: operator++(int)// 前置++
//{
//	++_day;
//	if (_day > months[_month])
//	{
//		_month += 1;
//	}
//	if (_month > 12)
//	{
//		_year += 1;
//		_month %= 12; //置_month为1
//	}
//	return *this;
//}
//Date&Date :: operator--()// 后置--
//{
//	Date date = *this;
//	Date::operator-(1);
//	return *this;
//
//}
//Date Date::operator--(int)// 前置--
//{
//	Date::operator-(1);
//	return *this;
//
//	
//
//}
//bool Date:: operator>(const Date& d)const
//{
//	return(_year > d._year && _month > d._month && _day > d._day);
//}
//bool Date::operator>=(const Date& d)const
//{
//	return(_year >= d._year && _month >= d._month && _day >= d._day);
//}
//bool Date::operator<(const Date& d)const
//{
//	return (_year < d._year && _month < d._month && _day < d._day);
//}
//bool Date::operator<=(const Date& d)const
//{
//	return (_year <= d._year && _month <= d._month && _day <= d._day);
//}
//bool Date::operator==(const Date& d)const
//{
//	return (_year == d._year && _month == d._month && _day == d._day);
//}
//bool Date::operator!=(const Date& d)const
//{
//	return (_year != d._year && _month != d._month && _day != d._day);
//}

int main