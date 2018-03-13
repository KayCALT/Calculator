#pragma once
#include<iostream>
#include<cassert>
const int MaxSize = 20;
class MStack
{
public:
	MStack();
	~MStack();
	int Pop();
	void Push(int) ;
	bool Full();
	bool Empty();
private:
	int _index;
	int  _stk[MaxSize];

};

