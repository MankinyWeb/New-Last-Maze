//ReadMap.h

#include "../README.h"
#include "Tile.h"

#ifndef FLAG_READ
#define FLAG_READ

Map GetMapPlus(string namepath){
	ifstream getMap;
	Map map1;
	string path = "map\\"+namepath+".lmap";
	bool isMap = false;
	getMap.open(path.c_str(), ios::in);
	getMap >> isMap;
	if(isMap == false){
		MessageBox(NULL,"没有找到地图！请检查地图名称或重新下载游戏","错误",MB_OK);
		return map1;
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			getMap >> map1.tiles[i][j].type;
			//cout << map1.tiles[i][j].type;
			if(map1.tiles[i][j].type-'0' == OTHERS){
				getMap >> map1.tiles[i][j].otherChar;
				if(DEBUGING){
					MessageBox(NULL,"DEBUG MES1","DEBUG",MB_OK);
				}
				//cout << "other.";
			}
			if(map1.tiles[i][j].type-'0' == TELEPOET){
				getMap >> map1.tiles[i][j].otherChar;
				//cout << "tele.";
			}
			if(map1.tiles[i][j].type-'0' == COIN){
				getMap >> map1.tiles[i][j].otherChar;
				//cout << "tele.";
			}
		}
		//cout << "\n";
	}
	//cout << "Read Mapped.\n";
	return map1;
}

Map GetMap(const char* path){
	ifstream getMap;
	Map map1;
	bool isMap = false;
	getMap.open(path, ios::in);
	getMap >> isMap;
	if(isMap == false){
		MessageBox(NULL,"没有找到地图！请检查地图名称或重新下载游戏","错误",MB_OK);
		MessageBox(NULL,"缺失的地图名：","错误",MB_OK);
		MessageBox(NULL,path,"错误",MB_OK);
		return map1;
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			getMap >> map1.tiles[i][j].type;
			//cout << map1.tiles[i][j].type;
			if(map1.tiles[i][j].type-'0' == OTHERS){
				getMap >> map1.tiles[i][j].otherChar;
				if(DEBUGING){
					MessageBox(NULL,"DEBUG MES1","DEBUG",MB_OK);
				}
				//cout << "other.";
			}
			if(map1.tiles[i][j].type-'0' == TELEPOET){
				getMap >> map1.tiles[i][j].otherChar;
				//cout << "tele.";
			}
		}
		//cout << "\n";
	}
	//cout << "Read Mapped.\n";
	return map1;
}

#endif
