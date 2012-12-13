#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack obj;
	char option;


	while(1)
	{
		cout << "\n **************************\n";
		cout << "		<1> insert (push)\n";
		cout << "		<2> delete (pop)\n";
		cout << "		<3> list\n";
		cout << "		<4> quit\n";
		cout << "   **************************\n";

		cout << " Please enter your choice...";
		while(cin.get(option) && option == '\n');
		cin.get();
		switch (option)
		{
		case '1':
			obj.push_f();
			break;
		case '2':
			obj.pop_f();
			break;
		case '3':
			obj.list_f();
			break;
		case '4':
			system("PAUSE");
			return 0;
		default:
			break;
			////////////////////////
		}
	}

}