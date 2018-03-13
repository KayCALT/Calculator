// main.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#define NDEBUG
#include "MStack.h" 
#include"calculator.h"


using std::cout;
using std::endl;
int main()
{
	MStack stacky;
	for (int i = 0; i <MaxSize; i++)
	{
		stacky.Push(i);
	}
	cout <<"FULL IS "<< stacky.Full() << endl;
	for (int i = 0; i <MaxSize; i++)
	{
		cout << stacky.Pop() << endl;
	}
	cout <<"EMPTY is "<< stacky.Empty() << endl;

	std::cin.get();

    return 0;
}

