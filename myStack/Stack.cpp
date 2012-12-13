#include "Stack.h"

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;



Stack::Stack()
{
	cout << "init the Stack...";
	top = -1;
}
void Stack::push_f()
{
	//注意，因为MAX容量是5，数组只能用到0-4
	if(top >= MAX-1)
		cout << "\nStack is full !\n";
	else
	{
		top++;
		cout << "\n Please input the item to the top of the Stack\n";
		cin.getline(item[top], 21); 
	}
}
void Stack::pop_f()
{
	if(top < 0)
		cout << "\n Stack is empty ! \n";
	else
	{
		cout << "\n Item " << item[top] << "deleted\n";
		top--;
	}
}

void Stack::list_f(void)
{
	int count = 0, i;
	if(top < 0)
	cout << "\n Stack is empty ! \n";
	else
	{
		cout << "\n ITEM\n";
		cout << " -------------------------\n";
		cout.setf(ios::left, ios::adjustfield);
		for(i = 0; i <= top; i++)
		{
			cout << "  ";
			cout.width(20);
			cout << item[i] << "\n";
			count++;
			if (count % 20 == 0)
			{
				_getch();
			}
			cout.setf(ios::right, ios::adjustfield);
			cout << "----------------------------\n";
			cout << " Total item: " << count << "\n";
		}
	}
}
