#include "stdafx.h"
#include "calculator.h"
#include<iostream>
using std::cout;
calculator::calculator()
{
	std::cout << "Caluculation Started." << std::endl;
}


calculator::~calculator()
{
	std::cout << "Program terminated." << std::endl;
}

bool calculator::Execute(Input const & input)
{
	int flag = input.FlagInput();
	bool status = false;

	if (!flag)
	{
		cout << "Ilegal input." << std::endl;
	}
	else if (1==flag)
	{
		int num = input.GetInputNum();
		if (_Memory.Full())
		{
			cout << "Stack is full" << std::endl;
		}
		else
		{
			_Memory.Push(num);
			status = true;
		}
	}
	else
	{
		int num = _Memory.Pop();
		int num1;
		if (_Memory.Empty())
		{
			num1 = num;
		}
		else
		{
			num1 = _Memory.Pop();
		}
		char Opt = input.GetInputOp();
		_Memory.Push();

	}


	return status;
}

int calculator::Calculate(int numa, int numb, char opt)
{
	int out;
	if ('+'==opt)
	{
		out = numa + numb;
	}
	else if ('-'==opt)
	{
		out = numa - numb;
	}
	else if ('*'==opt)
	{
		out = numa * numb;
	}
	else if ('/'==opt)
	{
		if (0==numb)
		{
			cout << "0 cannot be the denominator" << std::endl;
			out = 0;
		}
		else
		{
			out = numa / numb;     //ÕûÊý³ý·¨
		}
	}
	
	return out;
}

