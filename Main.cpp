#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{
	MyString d = MyString("hello");
	MyString s = MyString("hell");
	/*cout << d.Size() << endl;
	cout << d.Index() << endl;*/
	/*MyString s = MyString("hello");*/
	cout << d.Compare(s);
	system("pause");
	return 0;
}