#pragma once
#include "MStack.h"
#include"Input.h"

class calculator
{
public:
	calculator();
	~calculator();
	bool Execute(Input const &);
	int Calculate(int, int, char);

private:
	MStack  _Memory;
};

