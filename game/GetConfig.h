//GetConfig.h

#ifndef FLAG_GC
#define FLAG_GC

#include "..\README.h"

class LConfig { 
	public:
		unsigned long long coinCount;
		unsigned long long boom;
		fstream G_C_;
		void Get();
		void Set();
};

void LConfig :: Get(){
	G_C_.open("config.lconfig",ios::in);
	bool flag;
	G_C_ >> flag;
	if(flag != 1){
		MessageBox(NULL,"Config ERROR!","ERROR",MB_OK);
	}
	G_C_ >> coinCount;
	G_C_ >> boom;
	G_C_.close();
}
void LConfig :: Set(){
	Get();
	G_C_.open("config.lconfig", ios::out | ios::trunc | ios::in);
	G_C_ << 1 << "\n";
	G_C_ << coinCount << "\n";
	G_C_ << boom;
	G_C_.close();
}

#endif
