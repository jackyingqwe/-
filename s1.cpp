/*
#ifndef head1.h
#endif
*/
#include"head1.h"

void test01() 
{
	Node* temp = new Node;
	temp = NULL;
	int x,n = 0;
	cout << "How many number?\n";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Enter your number?\n";
		cin >> x;
		//temp = InsertH(temp, x);
		InsertHead(&temp, x);
		PrintList(temp);
		temp = ReverseList(temp);
		PrintList(temp);
	}
	cout << "这是反转";
	
	PrintListSort(temp, 2);

}

Node* InsertH(Node *head,int a) {
	Node *tempt = new Node;
	tempt->am = a;
	tempt->next = NULL;
	if (head!=NULL) tempt->next = head;
	head = tempt;
	
	return head;
}
void InsertHead(Node** head,int a) {
	Node* temp = new Node;
	temp->am = a;
	temp->next = NULL;
	if(*head!=NULL) temp->next = *head;
	*head = temp;

}
void PrintList(Node* head) {
	cout << "List is   ";
	while (head)
	{
		cout << head->am;
		head = head->next;
		cout << "  ";
	}
	cout << "\n";
}

Node* ReverseList(Node*head) {
	Node* pre,*curruent,*net;
	pre = NULL;
	curruent = head;
	while (curruent) {
		//存储下一节点地址
		net = curruent->next;
		// 更改当前指针指向
		curruent->next = pre;
		// 更改节点名称
		pre = curruent;
		// 更改当前节点
		curruent = net;
	}
	head = pre;
	return head;
}
 
void PrintListSort(Node* head, int type_code)
{
	if (head == NULL) 
	{		
		cout << "\n";
		return;
	}
	if (type_code == 1)
	{
		PrintListSort(head->next,1);
		cout << head->am;
	}
	else if (type_code == 2)
	{		
		cout << head->am;
		PrintListSort(head->next,2);
	}

}