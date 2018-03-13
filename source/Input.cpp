#include "stdafx.h"
#include "Input.h"

Input::Input()
{
	std::cout << '>';
	std::cin >> _tapin;
	char CheckNum;
	CheckNum = _tapin[0];

	if (isdigit(CheckNum))
	{
		_FlagOut = 1;
	}
	else if ((CheckNum == '+') || (CheckNum == '*') || (CheckNum == '/'))
	{
		_FlagOut = 2;
	}
	else if ((CheckNum == '-'))
	{
		if (isdigit(_tapin[1]))
		{
			_FlagOut = 1;
		}
		else
		{
			_FlagOut = 2;
		}
	}
	else
	{
		_FlagOut = 0;     //Fault Input.
	}

}

int Input::GetInputNum() const     //传递输入的数字
{
	return std::atoi(_tapin);
}

char Input::GetInputOp() const   //传递输入的字符
{
	return _tapin[0];
}

int Input::FlagInput() const       //检查输入,对应不同输入给出标记
{
	return _FlagOut;
}
