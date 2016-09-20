#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{
	MyString d = MyString("hello");
	MyString s = MyString(" world");
	/*cout << d.Size() << endl;
	cout << d.Index() << endl;*/
	//cout << d.Compare() << endl;
	cout << d.Append("world") << endl;
	system("pause");
	return 0;
}