#pragma once
#include <iostream>
using namespace std;
class ExceptionCanGoWrong
{

public:
	ExceptionCanGoWrong() {
		char* pMemory = new char[999999999999999];
		delete[] pMemory;
	}

};

