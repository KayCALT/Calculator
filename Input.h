#pragma once
#include<iostream>
#include<cctype>

const int MaxInput = 5;
class Input
{
public:
	Input();
	~Input() {};

	int GetInputNum() const;
	char GetInputOp() const;
	int FlagInput() const;
private:
	char _tapin[MaxInput];
	int _FlagOut;

	
};

