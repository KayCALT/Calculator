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

int Input::GetInputNum() const     //�������������
{
	return std::atoi(_tapin);
}

char Input::GetInputOp() const   //����������ַ�
{
	return _tapin[0];
}

int Input::FlagInput() const       //�������,��Ӧ��ͬ����������
{
	return _FlagOut;
}
