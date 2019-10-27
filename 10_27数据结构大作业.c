#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <stdlib.h>

typedef int SLDataType;

typedef struct Stu_Score
{
	int Math;
	int English;
	int Chinese;
}Stu_Score;

typedef struct Student
{
	char id[16];
	char name[24];
	Stu_Score Score;
}Student;

typedef struct SeqList
{
	size_t _size;
	int* Sum_Array; //���ѧ���ֵܷ�����
	size_t _capacity;
}SeqList;

void menu()
{
	printf("--------------------------------------------\n");
	printf("********************************************\n");
	printf("********************************************\n");
	printf("*******13.�ɼ����¼�����ܷ�����************\n");
	printf("********************************************\n");
	printf("********************************************\n");
	printf("--------------------------------------------\n");
}
void SeqListInit(SeqList * Sq , int * SumArray, int n )
{
	Sq->_size = n;
	Sq->_capacity = n;
	Sq->Sum_Array = (int*)malloc(sizeof(int)*n);
	memcpy(Sq->Sum_Array, SumArray, n*sizeof(int));
}

void SeqListDestory(SeqList* Sq)
{
	assert(Sq);
	if (Sq->Sum_Array )
	{
		free(Sq->Sum_Array);
		Sq->Sum_Array = NULL;
	}
	Sq->_size = Sq->_capacity = 0;
}

void SeqListPrint(SeqList * Sq)
{
	printf("�ܷ� �� ");
	for (int i = 0; i < Sq->_size; i++)
	{
		printf("%d-> ", Sq->Sum_Array[i]);
	}
	printf("\n");
}
//void CheckCapacity(SeqList* Sq)
//{
//	assert(Sq);
//
//	if (Sq->_capacity== Sq->_size)
//	{
//
//		size_t newcapacity = (Sq->_capacity == 0) ? 4: Sq->_capacity * 2;
//		Sq->Sum_Array  = realloc(sizeof(SLDataType)*newcapacity);
//		Sq->_capacity = newcapacity;
//	}
//}
//void SeqListPushBack(SeqList* ps, SLDataType x)//β��
//{
//	assert(ps);
//	CheckCapacity(ps);
//	ps->A[ps->size] = x;
//	ps->size++;
//}

void SumPrint(int* array, int n)
{
	printf("�ְܷ�˳���� ��");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
}
void SeqListSort(SeqList* Sq) //��������
{
	for (int i = 0; i < Sq->_size; i++)
	{
		for (int j = 0; j < Sq->_size - 1; j++)
		{
			if (Sq->Sum_Array[j] < Sq->Sum_Array[j + 1])
			{
				int tmp = Sq->Sum_Array[j];
				Sq->Sum_Array[j] = Sq->Sum_Array[j + 1];
				Sq->Sum_Array[j + 1] = tmp;
			}
		}
		
	}
}
int main()
{
	menu();
	printf("��������Ҫ¼�����λͬѧ����Ϣ\n");
	int n = 0;
	scanf("%d", &n);
	int *Sum_array = (int*)malloc(sizeof(int)*n);
	int *Average_array = (int*)malloc(sizeof(int)*n);

	int sum = 0;
	int averge = 0;
	for (int i = 1; i <= n; i++)
	{
		Student a;
		printf("�������%dλλͬѧ��������ѧ��\n", i);
		scanf("%s %s", &a.name, &a.id);
		//printf("%s %s\n", a.name, a.id);
		printf("�������%dλͬѧ�����ġ���ѧ��Ӣ��ĳɼ���\n", i);
		scanf("%d %d %d", &a.Score.Chinese, &a.Score.Math, &a.Score.English);
		printf("%s������Ӣ�ɼ��� ���ģ� %d  ��ѧ �� %d  Ӣ� %d  \n", a.name, a.Score.Chinese, a.Score.Math, a.Score.English);
		Sum_array[i - 1] = a.Score.Chinese + a.Score.Math + a.Score.English;
		Average_array[i - 1] = Sum_array[i - 1] / 3;
		printf("		�ܷ֣� %d , ƽ���֣� %d \n", Sum_array[i- 1], Average_array[i - 1]);


	}
	SeqList seqlist;
	//int Sum_Array[2] = { 1, 2 };
	SeqListInit(&seqlist, Sum_array, n);
	SeqListSort(&seqlist);
	SeqListPrint(&seqlist);
	SeqListDestory(&seqlist);
	system("pause");
}