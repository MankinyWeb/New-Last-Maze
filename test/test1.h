//test1.h
#ifndef FLAG_TESTING1
#define FLAG_TESTING1
#include "../README.h"
#include "..\game\Tile.h"
#include "..\game\ReadMap.h"
#include "..\game\Printing.h"
#include "..\game\Player.h"
#include "..\game\GetConfig.h"
void test1(){
	Map map1;
	map1 = GetMap("map/TEST.lmap");
	Flash_NP(map1);
}
#endif
