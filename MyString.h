#pragma once
#include <iostream>
using namespace std;

class MyString
{
	char* str;
	int length;
	static int quantity;
public:
	MyString();
	MyString(const char* obj);
	int  MyChr(char c);
	void Print();
	int MyStrLen();
	void Input();
	bool MyStrStr(const char* str);
	MyString(const MyString& obj);
	void MyStrcpy(MyString& obj);
	void MyStrcpy(MyString& obj);
	int MyStrCmp(MyString& b);
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	static void QuantityOfObjects();
	~MyString();
};