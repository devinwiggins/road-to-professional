#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{

	//char input;
	MyString d = MyString("JAM with friends");
	MyString s = MyString("programmin");
	/*printf("the size of the word 'JAM' is:\n");
	cout << d.Size() << endl;
	printf("type a number that is less the number the Size of the word anf that letter will print\n ");
	cin >> input;
	cout << "the Letter at that index is\n" << d.Index(input) << endl;
	printf("the 2 words 'programmin' and 'JAM' will be compared. If they are the the same\nthe true integral value 1 will print. if they are different the false integral\nvalue 0 will print\n");
	cout << d.Compare(s) << endl;
	system("pause");
	printf("the word programmin will be appended to JAM\n");
	cout << d.Append(s) << endl;
	system("pause");
	printf("the word Programmin will be prepended to JAM\n");
	cout << d.Prepend(s) << endl;*/
	//cout << d.ToLower() << endl;
	//cout << s.ToUpper() << endl;
	cout << d.getSub("with");
	system("pause");
	return 0;
}