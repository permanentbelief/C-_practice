//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <assert.h>
//
//typedef int QUDataType;
//
//typedef struct QueueNode
//{
//	struct QueueNode* _next;
//	QUDataType _data;
//	
//}QueueNode;
//
//typedef struct Queue
//{
//	QueueNode* _front; //��ͷ
//	QueueNode* _rear;  //��β
//	int tag; //�����ﶨ�� tag������ʾ ��βָ����ͬʱ����״̬ Ϊ��
//	//static �ӳ�tag���������� ʹ��ȫ�ֿ��Ըı� ���ǲ��ܴ洢�� ֻ��д���ṹ������
//}Queue;
////void QueueInit(Queue* pq);
////void QueueDestory(Queue* pq);
////QueueNode* BuyQueueNode(QUDataType x);
////void QueuePush(Queue* pq, QUDataType x);
////void QueuePop(Queue* pq);
//void QueueInit(Queue* Q)
//{
//	Q->_front = NULL;
//	Q->_rear = NULL;
//	Q->tag = 0;           //0 ��ʾ����Ϊ�յ�״̬             1��ʾ��Ϊ�յĶ���
//}
//void QueueDestory(Queue* Q)
//{
//	//tag = 1;
//	QueueNode* cur = Q->_front;
//	while (cur != NULL)
//	{
//		QueueNode* next = cur->_next;
//		free(cur);
//		cur = next;
//	}
//	Q->_front = NULL;
//	Q->_rear = NULL;
//}
//QueueNode* BuyQueueNode(QUDataType x)
//{
//	QueueNode* Node = (QUDataType*)malloc(sizeof(QUDataType));
//	Node->_data = x;
//	Node->_next = NULL;
//	return Node;
//}
//void QueuePush(Queue* Q, QUDataType x) //��� ��β����
//{
//	assert(Q);
//	
//	QueueNode* newnode = BuyQueueNode(x);
//	//QueueNode* last = ps->_rear;
//	if (Q->_rear == NULL)
//	{
//		Q->_front = Q->_rear = newnode;
//	}
//	else
//	{
//		Q->_rear->_next = newnode;
//	}
//
//	Q->_rear = newnode;
//	Q->tag = 1;
//}
//
//void QueuePop(Queue* Q)  // ���� 
//{
//	assert(Q && Q->_front);
//	QueueNode* next = Q->_front->_next; //�����е�ֵ
//	free(Q->_front);
//	Q->_front = next;
//	if (Q->_front != NULL)// ����ɾ������,front��tailָ��β�ڵ㣬��һ�ͷŵĻ�,ps->_rear ��ΪҰָ����
//	{
//		Q->_rear = NULL;
//	}
//
//}
//bool QueueEmpty(Queue* Q)
//{
//	assert(Q);
//	return Q->_front == Q->_rear;
//}
//int QueueSize(Queue* Q)
//{
//	assert(Q);
//	QueueNode* cur = Q->_front;
//	size_t count = 0;
//	while (cur != NULL)
//	{
//		count++;
//		cur = cur->_next;
//	}
//	return count;
//}
//void QueuePrint(Queue *Q) //��ӡ����
//{
//	QueueNode* cur = Q->_front;
//	while(cur != Q->_rear->_next)
//	{
//		printf("%d->", cur->_data);
//		cur = cur->_next;
//	}
//	printf("\n");
//}
//int main()
//{
//	Queue q;
//	QueueInit(&q);
//	if ((&q)->tag == 0)
//	{
//		printf("��ʱ��tagֵΪ%d,����״̬Ϊ��", (&q)->tag);
//	}
//	else
//	{
//		printf("��ʱ��tagֵΪ%d,���е�״̬��Ϊ��", (&q)->tag);
//	}
//	printf("\n");
//	printf("��Ӳ�����\n");
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePush(&q, 4);
//	QueuePush(&q, 5);
//	QueuePrint(&q);
//	
//	if ((&q)->tag == 0)
//	{
//		printf("��ʱ��tagֵΪ%d,����״̬Ϊ��", (&q)->tag);
//	}
//	else
//	{
//		printf("��ʱ��tagֵΪ%d,���е�״̬��Ϊ��", (&q)->tag);
//	}
//	printf("\n");
//	system("pause");
//
//}