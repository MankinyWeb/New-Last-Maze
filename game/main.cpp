#include "../README.h"
/*Manki said:

You :
	Thank you for look here, This project is my leave computer 
room last project, This my first big project !
													22/20/2023
														 Manki

*/

/*[Copy Right @] Manki Studio*/
/*"NEW LAST MAZE" is my leave the computer room last project*/

/*Good Lunck.*/

void Turn(string mapPath){
	LConfig lcf;
	Boomer boom;
	Map map1;
	Player player;
	player.MoveTo(1,1);
	int coin = 0;
	map1 = GetMapPlus(mapPath.c_str());
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
	cout << "Win, Get coin:\n" << coin;
	lcf.coinCount += coin;
	lcf.Set();
}

int main(){
	string name;
	while(1){
		cout << "Map Name :";
		cin >> name;
		Turn(name);
	}
	return 0;
}
