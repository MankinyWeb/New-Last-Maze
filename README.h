
// Start new Journy!!!!!!

// I Lose.

// I Lose all Poject.
// I Only can restart.

// Go.

// This is New Last Maze first file.

// Go to define!


#ifndef TARGET_README

	#define TARGET_README

	
	#include<bits/stdc++.h>
	
	#include<conio.h>
	
	#include <windows.h>
	
	using namespace std;
		
	inline int GetKey(){
		return getch();
	}

	inline void clear(){
		system("cls");
	}

	void Color(int a){
	    if(a==0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	    if(a==1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
	    if(a==2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	    if(a==3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
	    if(a==4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	    if(a==5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
	    if(a==6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
	}
	bool DEBUGING = false;
	
	bool isNum(char c){
		return c < '9' && c > '0';
	}
	
	#include "test\test1.h"
	#include "test\test2.h"
	#include "test\test3.h"
	
	#include "otherEvent\Boomer.h"
	
	#include "game\Tile.h"
	#include "game\ReadMap.h"
	#include "game\Printing.h"
	#include "game\Player.h"
	#include "game\GetConfig.h"
	



	
#endif
