//test2.h
#ifndef FLAG_TESTING2
#define FLAG_TESTING2
#include "..\README.h"
#include "..\game\Tile.h"
#include "..\game\ReadMap.h"
#include "..\game\Printing.h"
#include "..\game\Player.h"
#include "..\game\GetConfig.h"
#include "..\otherEvent\Boomer.h"
void test3(){
	Boomer boom;
	Map map1;
	Player player;
	player.MoveTo(1,1);
	int coin = 0;
	map1 = GetMapPlus("TEST2");
	while(1){
		int i = player.Check(map1);
		if(i == 1)break;
		if(i == 2){
			coin++;
			//cout << player.x << " " << player.y << " " << map1.tiles[player.x][player.y].type+0 << endl;
			map1.tiles[player.x][player.y].type = 2+'0';
			//cout << player.x << " " << player.y << " " << map1.tiles[player.x][player.y].type+0 << endl;
			//system("pause");
		}
		Flash(map1,player);
		map1 = boom.Boomed(i, 'b', map1);
	}
	clear();
	cout << "Win,coin:" << coin;
}
#endif
