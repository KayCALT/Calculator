#include "stdafx.h"
#include "MStack.h"


MStack::MStack()
	:_index(0)
{}


MStack::~MStack()
{
}

int MStack::Pop()
{
	assert(_index > 0);  //´ïµ½Õ»µ×
	
	return _stk[--_index];
}

void MStack::Push(int num)
{
	assert(_index < MaxSize);  //³¬³öÕ»¶¥
	
	_stk[_index] = num;
	_index++;

}

bool MStack::Full()
{
	bool FullFlag = false;
	if (MaxSize==_index)
	{
		FullFlag = true;
	}
	return FullFlag;
}

bool MStack::Empty()
{
	bool EmptyFlag = false;
	if (0==_index)
	{
		EmptyFlag = true;
	}
	return EmptyFlag;
}
