#pragma once
#include<iostream>
using namespace std;
//��֪Ϊʲô���ļ������˽ṹ��
//����ṹ��
typedef struct node {
	int am;
	float much;
	node* next;
}Node;
void test01();
Node* InsertH(Node* head, int a);
void InsertHead(Node** head,int a);
void PrintList(Node* head);
// �ݹ鷴ת����
Node* ReverseList(Node* head);
//�ݹ�ʵ�ִ�ӡ�б�
//1��ת��ӡ��2�����ӡ
void PrintList1(Node* head, int type_code);


