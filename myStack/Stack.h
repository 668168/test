#define MAX 5

class Stack
{
private:
	//��ʾһ������ΪMAX��Stack��ÿ��Ԫ�ش�СС��20
	char item[MAX][20];
	int top;
public:
	Stack();
	void push_f(void);
	void pop_f(void);
	void list_f(void);
};