#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

#include "string.h"

int main()
{

	String s1("happy"), s2("birthday"), s3;    // test overloaded equality and relational operators

	cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2 << "\"; s3 is \"" << s3 << '\"'
		<< "\nThe results of comparing s2 and s1:" << "\ns2 == s1 yields"
		<< (s2 == s1 ? "true" : "false") << "\ns2 != s1 yields"
		<< (s2 != s1 ? "true" : "false") << "\ns2 > s1 yields"
		<< (s2 > s1 ? "true" : "false") << "\ns2 < s1 yields "
		<< (s2 < s1 ? "true" : "false") << "\ns2 >= s1 yields"
		<< (s2 >= s1 ? "true" : "false") << "\ns2 <= s1 yields"
		<< (s2 <= s1 ? "true" : "false");

	system("pause");
}

