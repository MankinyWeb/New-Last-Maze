// Printing.h

#ifndef FLAG_PRINT
#define FLAG_PRINT
#include "../README.h"
#include "Tile.h"
#include "Player.h"

void Flash_NP(Map map1){
	clear();
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			map1.tiles[i][j].type -= '0';
			if(map1.tiles[i][j].type == WALL){
				Color(4);
				cout << "+";
			}
			if(map1.tiles[i][j].type == TELEPOET || map1.tiles[i][j].type == OTHERS){
				Color(2);
				cout << map1.tiles[i][j].otherChar;
			}
			if(map1.tiles[i][j].type == COIN){
				Color(6);
				cout << map1.tiles[i][j].otherChar;
			}
			Color(0);
			cout << (map1.tiles[i][j].type == AIR?" ":"");
		}
		cout << "\n";
	}
}

void Flash(Map map1, Player player){
	clear();
	cout << " ";
	for(int i=0;i<26;i++){
		if(i < 11){
			cout << " ";
		}
		cout << i;
	}
	cout << "\n";
	for(int i=0;i<26;i++){
		if(i < 10){
			cout << " ";
		}
		cout << i ;
		for(int j=0;j<26;j++){
			map1.tiles[i][j].type -= '0';
			//cout << player.x << " " << player.y << endl;
			if(player.x == i && player.y == j){
				Color(6);
				cout << "P";
				cout << " ";
				continue;
			}
			if(map1.tiles[i][j].type == WALL){
				Color(4);
				cout << "+";
			}
			if(map1.tiles[i][j].type == TELEPOET || map1.tiles[i][j].type == OTHERS){
				Color(2);
				cout << map1.tiles[i][j].otherChar;
			}
			if(map1.tiles[i][j].type == COIN){
				Color(6);
				cout << map1.tiles[i][j].otherChar;
			}
			Color(0);
			if(map1.tiles[i][j].type == 2){
				cout << " ";
			}
			cout << " ";
		}
		cout << "\n";
	}
}

#endif
