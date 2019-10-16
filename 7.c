#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#define MAXLEN 40
typedef struct
{
	char size[MAXLEN];
	int _len;

}String;
StringInit(String* q)
{
	q->_len = 0;
}

void StrReplace(String* q, char t, char v)
{
	for (int i = 0; i < q->_len; i++)
	{
		
		if (q->size[i] == t)
		{
			q->size[i] = v;
		}
	}
}
void push_back(String* q, char c)
{
	if (q->_len == 0)
	{
		q->size[0] = c;
		q->_len++;
	}
	else
	{
		q->size[q->_len ] = c;
		q->_len++;
	}
}
void print(String* q)
{
	for (int i = 0; i < q->_len; i++)
	{
		printf("%c", q->size[i]);
	}
}


int main()
{
	String s;
	StringInit(&s);
	push_back(&s, 'i');
	push_back(&s, 'm');
	push_back(&s, 'A');
	push_back(&s, 'a');
	print(&s);
	printf("\n½«×Ö·ûi»»³É×Ö·ûk\n");
	StrReplace(&s, 'i', 'k');
	print(&s);
	printf("\n");
	system("pause");
}