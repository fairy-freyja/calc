#include "MyString.h"

MyString::MyString(char* str, int strLength) {
	_str = new char[strLength];
	_strLength = strLength;
};

MyString operator+(MyString a, MyString b){
	char* c = new char [a.Length + b.Length+1];
	int i = 0;
	int j = 0;
	while (j < a.Length)
	{
		c[i] = a._str[j];
		j++;
		i++;
	}
	j = 0;
	while (j < b.Length)
	{
		c[i] = b._str[j];
		j++;
		i++;
	}

	return MyString(c, strlen(c));	
};

int MyString::Length(MyString str)
{
	return strlen(str._str);
};