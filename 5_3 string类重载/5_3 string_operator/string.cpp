#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <assert.h>
#include <iomanip>
using namespace std;
#include "string.h"
String::String(const char *s) :length(strlen(s))
{
	cout << "��ͨ���캯����" << s << '\n';
	setString(s);//��������Ĺ��ߺ���
}
String::String(const String &copy)
: length(copy.length)
{
	cout << "�������캯����" << copy.sptr << '\n';
	setString(copy.sptr);
}
String::~String()
{
	cout << "��������" << sptr << '\n';
	delete[]sptr;
}
void String::setString(const char*string2)//���ߺ���
{
	sptr = new char[length + 1];//�Ӷ��ڴ�������ռ䣬���ڴ���µ��ַ���
	assert(sptr);
	strcpy(sptr, string2);
}
const String &String::operator=(const String &right)
{
	cout << "operator = called\n";
	if (&right != this)
	{
		delete[] sptr;
		length = right.length;
		setString(right.sptr);
	}
	else
		cout << "Attempted assignment of a String to itself\n";
	return *this;
}

const String& String::operator+=(const String&right)
{
	char *tempPtr = sptr;
	length += right.length;
	sptr = new char[length + 1];
	assert(sptr);
	strcpy(sptr, tempPtr);
	strcat(sptr, right.sptr);
	delete[] tempPtr;
	return *this;
}
bool String::operator!() const
{
	return length == 0;

}
bool String::operator==(const String &right)const
{
	return strcmp(sptr, right.sptr) == 0;
}
bool String::operator<(const String &right)const
{
	return strcmp(sptr, right.sptr) < 0;
}

char &String::operator[](int subscript)
{
	assert(subscript );
	return sptr[subscript];

}
const char& String::operator[](int subscript) const
{
	assert(subscript );
	return sptr[subscript];
}

String &String::operator()(int index, int subLength)
{
	assert(index);
	assert(subLength);
	String *subPtr = new String;
	
	if ((subLength == 0) || (index + subLength > length))
	{
		subPtr->length = length - index + 1;
	}
	else
	{
		subPtr->length = subLength + 1;
	}

	  // allocate memory for substring
	  delete subPtr->sptr; // delete character array from object
	  subPtr->sptr = new char[subPtr->length];

	  assert(subPtr->sptr != 0); // ensure space allocated 
	  // copy substring into new String

	  strncpy(subPtr->sptr, &sptr[index], subPtr->length);

	  subPtr->sptr[subPtr->length] = '\0';   // terminate String

	  return *subPtr;        // return new String

}
ostream &operator <<(ostream &output, const String&s)
{
	output << s.sptr;
	return output;
}
istream &operator>>(istream &input, String &s)
{
	char temp[100];
	input >> setw(100) >> temp;
	s = temp;
	return input;
}