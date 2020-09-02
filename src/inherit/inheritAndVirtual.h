// ¼Ì³ÐÒÔ¼°Ðéº¯Êý
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Test {
public:
	Test() { t = "class Test"; cout << "Test" << endl; }
	virtual ~Test() { cout << "Test ~" << endl; }
	string get() { return t; }
private:
	string t;
};

class VTest :public Test {
public:
	VTest() { t1 = "class VTest"; cout << "VTest " << endl; }
	~VTest() { cout << "VTest ~" << endl; }

	virtual string get() { return t1; }
	void set(string a) { t1 = a; };
private:
	string t1;
};

class VTest1 :public VTest {
public:
	VTest1() { t2 = "class VTest1 >"; cout << "VTest1 " << endl; }
	~VTest1() { cout << "VTest1 ~" << endl; }
	string get() { return t2; }
	void set(string a) { t2 = a; };
private:
	string t2;
};