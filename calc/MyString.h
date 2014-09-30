#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

using namespace std;

class MyString {
private:

public:
	MyString();
	MyString(char* source);

	friend ostream& operator<<(ostream& in, MyString& val);
	friend istream& operator>>(istream& in, MyString& val);
	friend int operator!=(MyString a, MyString b);
	friend int operator==(MyString a, MyString b);
	friend MyString operator+(MyString a, MyString b);
};


#endif