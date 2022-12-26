#include"head1.h"
//stack
void Sqwet31() {
	char name[10] = { "Hello" };
	stack <char> sm;
	for (int i = 0;i<strlen(name);i++)
	{
		sm.push(name[i]);
	}
	for (int i = 0;i<strlen(name);i++)
	{
		char am = sm.top();
		sm.pop();
		cout << am;
	}
}