#pragma once
#include<iostream>
using namespace std;
//��֪Ϊʲô���ļ������˽ṹ��
//����ṹ��
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
// ������ת����
Node* ReverseList(Node* head);
//�ݹ�ʵ�ִ�ӡ�б�
//1��ת��ӡ��2�����ӡ
void PrintListSort(Node* head, int type_code);
// �ݹ鷴ת����
Node* ReverseListSort(Node* chu,Node*head);

// ˫������
//����Ϣд��ڵ�
Node* WriteNode(int x);
//���ڵ�����
void DoubleInsertHead(Node** head, int x);
