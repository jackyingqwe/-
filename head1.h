#pragma once
#include<iostream>
using namespace std;
//不知为什么主文件定义了结构体
//定义结构体
typedef struct node {
	int am;
	float much;
	node* next;
	node *pre;
}Node;
void test01();
Node* InsertH(Node* head, int a);
//void InsertHead(Node** head,int a);
void PrintList(Node* head);
// 迭代反转链表
Node* ReverseList(Node* head);
//递归实现打印列表
//1反转打印，2正向打印
void PrintListSort(Node* head, int type_code);
// 递归反转链表
Node* ReverseListSort(Node* chu,Node*head);

// 双向链表
//将信息写入节点
Node* WriteNode(int x);
//将节点链接
void DoubleInsertHead(Node** head, int x);
