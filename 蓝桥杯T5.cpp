#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;


bool is_ordered(char temp)
{
	if (temp == 'I' || temp == 'V' || temp == 'X' || temp == 'L' || temp == 'C' || temp == 'D' || temp == 'M')
		return true;
	return false;
}
int is_orderd_(char temp)
{
	if (temp == 'I')
		return 1;
	if (temp == 'V')
		return 5;
	if (temp == 'X')
		return 10;
	if (temp == 'L')
		return 50;
	if (temp == 'C')
		return 100;
	if (temp == 'D')
		return 500;
	if (temp == 'M')
		return 1000;
}
int main()
{
	string str("DM"); // IIIV

	int n = str.size();
	if (n == 0)
	{
		cout << n << endl;
		return 0;
	}
		
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (is_ordered(str[i]) && is_orderd_(str[i]) < is_orderd_(str[i + 1]))
		sum -= is_orderd_(str[i]);
		else
			sum += is_orderd_(str[i]);
	}
	sum += is_orderd_(str[n-1]);
	cout << sum << endl;
	system("pause");
}