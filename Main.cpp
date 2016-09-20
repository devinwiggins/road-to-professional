#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{
	MyString d = MyString("hello");
	cout << d.Index() << endl;
	system("pause");
	return 0;
}