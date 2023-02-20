//test3.h
#ifndef FLAG_TESTING3
#define FLAG_TESTING3
#include "../README.h"

void test2(){
	LConfig lconfig;
	lconfig.Get();
	cout << lconfig.boom;
	lconfig.boom = 3;
	lconfig.Set();
}

#endif
