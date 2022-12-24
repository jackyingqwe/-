#pragma once
#include<iostream>
using namespace std;
//不知为什么主文件定义了结构体
//定义结构体
typedef struct node {
	int am;
	float much;
	node* next;
}Node;
void test01();
Node* InsertH(Node* head, int a);
void InsertHead(Node** head,int a);
void PrintList(Node* head);
// 递归反转链表
Node* ReverseList(Node* head);


