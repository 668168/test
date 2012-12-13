#define MAX 5

class Stack
{
private:
	//表示一个容量为MAX的Stack，每个元素大小小于20
	char item[MAX][20];
	int top;
public:
	Stack();
	void push_f(void);
	void pop_f(void);
	void list_f(void);
};