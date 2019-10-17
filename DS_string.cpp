#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAXSIZE	40
typedef struct {
	char ch[MAXSIZE + 1];
	int length;
} Str;
void strassign(Str&str, char *ch) {
	//for (int i = 0; i )
	char* tmp = ch;
	int len = 0;
	while (*tmp) {
		++len;
		++tmp;
	}
	printf("%d\n", len);
	for (int i = 0; ch[i] != '\0'; i++)
	{
		printf("%c", ch[i]);
	}
	printf("\n");
	for (int i = 0; i <= len - 1; ++i)
	{
		str.ch[i] = *(ch + i);
	}
	printf("%c\n", str.ch[11]);

}
int main() {
	Str str1;
	Str str2;
	int pos;
	strassign(str1, "100510061007");
	//printf("str1:100510061007  赋值成功！\n");
	strassign(str2, "1006");
	//printf("str2:1006  赋值成功！\n");
	system("pause");
	//printf("%d\n", index(str1, str2));
}
//int index(Str& str, Str& substr) {
//	int i = 0, j = 0, k = 0;
//	while (i <= str.length - 1 && j <= substr.length - 1) {
//		if (str.ch[i] == substr.ch[j]) {
//			++i;
//			++j;
//		}
//		else {
//			j = 0;
//			i = ++k;
//		}
//	}
//	if (j = substr.length)
//		return k;
//	else
//		return 0;
//}
