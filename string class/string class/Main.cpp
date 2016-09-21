#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{
	MyString d = MyString("JAM");
	MyString s = MyString("programmin");
	//cout << d.Size() << endl;
	//cout << d.Index(2) << endl;
	//cout << d.Compare(s) << endl;
	//cout << d.Prepend(s) << endl;
	d.ToLower();
	system("pause");
	return 0;
}