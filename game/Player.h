//Player.h

#ifndef FLAG_PLAYER
#define FLAG_PLAYER
#include "../README.h"
#include "Tile.h"
class Player {
	public:
		int x, y;
		void MoveTo(int arg_x, int arg_y){
			x = arg_x;
			y = arg_y;
		}
		void Move(int arg_x, int arg_y){
			x += arg_x;
			y += arg_y;
		}
		int Check(Map map1){
			char switching = GetKey();
			switch (switching) {
				case 'W':
				case 'w':
					Move(-1, 0);
					if(map1.tiles[x][y].type-'0' == WALL){
						Move(1, 0);
					}
					break;
				case 'S':
				case 's':
					Move(1, 0);
					if(map1.tiles[x][y].type-'0' == WALL){
						Move(-1, 0);
					}
					break;
				case 'D':
				case 'd':
					Move(0, 1);
					if(map1.tiles[x][y].type-'0' == WALL){
						Move(0, -1);
					}
					break;
				case 'A':
				case 'a':
					Move(0, -1);
					if(map1.tiles[x][y].type-'0' == WALL){
						Move(0, 1);
					}
					break;
			}
			if(map1.tiles[x][y].type-'0' == COIN){
				return 2;
			}
			if(map1.tiles[x][y].type-'0' == TELEPOET){
				return 1;
			}else{
				return switching;
			}
		}
};
#endif
