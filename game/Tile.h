//Tile.h

#ifndef FLAG_TILE
	#define FLAG_TILE
	#include "../README.h"
	#include "../otherEvent/Coin.h"
	enum TileType{
		WALL = 1,
		AIR,
		TELEPOET,
		OTHERS,
		COIN
	};
	struct Tile {
		char type;
		char otherChar;
	};
	struct Map {
		Tile tiles[26][26];
		bool operator ==(Map map2){ 
			for(int i=0;i<26;i++){
				for(int j=0;j<26;j++){
					if(tiles[i][j].type != map2.tiles[i][j].type){
						return false;
					}		
				}
			}
			return true;
		};
	};
#endif
