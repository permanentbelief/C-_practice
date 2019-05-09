#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {
		int s1 = letters.size();
		int first = 0;
		int last = s1 - 1;
		int mid = 0;
		while (first <= last)
		{
			mid = (first + last) / 2;
			if (letters[mid] == target)
			{
				break;
			}
			else if (letters[mid] < target)
			{
				first = mid + 1;
			}
			else
				last = mid - 1;
		}
		if (letters[mid] == target)//�����vector���ж�ӦԪ��
		{
			while (letters[mid + 1] == letters[mid])//������³���
				mid++;
			if (mid + 1 == s1)
			{
				return letters[0];
			}
			else
			{
				return letters[mid + 1];
			}
		}
		else
		{//���vector��û�ж�Ӧ��Ԫ��
			if (first == s1)//������vector
				return letters[0];
			else
				return letters[first];
		}
	}
};
