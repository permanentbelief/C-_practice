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
//	QueueNode* _front; //对头
//	QueueNode* _rear;  //队尾
//	int tag; //在这里定义 tag变量表示 首尾指针相同时队列状态 为空
//	//static 延长tag的生命周期 使在全局可以改变 但是不能存储类 只能写到结构体里面
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
//	Q->tag = 0;           //0 表示队列为空的状态             1表示不为空的队列
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
//void QueuePush(Queue* Q, QUDataType x) //入队 队尾插入
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
//void QueuePop(Queue* Q)  // 出队 
//{
//	assert(Q && Q->_front);
//	QueueNode* next = Q->_front->_next; //出队列的值
//	free(Q->_front);
//	Q->_front = next;
//	if (Q->_front != NULL)// 链表删完的情况,front和tail指向尾节点，在一释放的话,ps->_rear 就为野指针了
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
//void QueuePrint(Queue *Q) //打印函数
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
//		printf("此时的tag值为%d,队列状态为空", (&q)->tag);
//	}
//	else
//	{
//		printf("此时的tag值为%d,队列的状态不为空", (&q)->tag);
//	}
//	printf("\n");
//	printf("入队操作：\n");
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePush(&q, 4);
//	QueuePush(&q, 5);
//	QueuePrint(&q);
//	
//	if ((&q)->tag == 0)
//	{
//		printf("此时的tag值为%d,队列状态为空", (&q)->tag);
//	}
//	else
//	{
//		printf("此时的tag值为%d,队列的状态不为空", (&q)->tag);
//	}
//	printf("\n");
//	system("pause");
//
//}