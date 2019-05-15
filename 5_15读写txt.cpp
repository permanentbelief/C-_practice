#define _CRT_SECURE_NO_WARNINGS 1 
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ofstream examplefile("example.txt");
	if (examplefile.is_open())
	{
		examplefile << "This is a line.\n";
		examplefile << "This is another line.\n";
		examplefile.close();
	}
	system("pause");
	return 0;
}