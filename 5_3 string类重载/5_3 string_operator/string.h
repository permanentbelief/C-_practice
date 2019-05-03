#include <iostream>
using namespace std;
class  String
{
public:
	String(const String&);
	String(const char* str = " ");
	~String();
	friend ostream&operator<<(ostream &, const String &);
	friend istream&operator>>(istream &, const String &);

	const String&operator=(const String&);
	const String&operator+=(const String&);
	bool operator!() const;
	bool operator ==(const String&)const;
	bool operator <(const String &) const;
	bool operator !=(const String& right)const
	{
		return !(*this == right);
	}
	bool operator>(const String& right)const
	{
		return right < *this;
	}
	bool operator<=(const String &right)const
	{
		return!(right < *this);
	}
	bool operator>=(const String &right)const
	{
		return !(*this < right);
	}
	char &operator[](int);
	const char &operator[](int) const;

	String &operator()(int, int);
	int getlength() const
	{
		return length;
	}
private:
	char *sptr;
	int length;
	void setString(const char *);

};