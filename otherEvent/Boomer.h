#ifndef FLAG_Boomer
#define FLAG_Boomer

#include "..\README.h"

class Boomer {
	public:
		LConfig lcf;
		unsigned int BoomerCount();
		Map UsingMap(Map firstMap, int x, int y);
		Map Boomed(char c, char need, Map fmap);
};

inline unsigned int Boomer :: BoomerCount(){
	lcf.Get();
	return lcf.boom;
}

Map Boomer :: UsingMap(Map firstMap, int x, int y){
	Map Returner = firstMap;
	if(BoomerCount() < 1){
		return Returner;
	}
	Returner.tiles[x][y].type = AIR+'0';
	return Returner;
}

Map Boomer :: Boomed(char c, char need, Map fmap){
	int tmpX, tmpY;
	Map ret = fmap;
	if(BoomerCount() < 1){
		cout << "\nNo Boomer!";
		GetKey();
		return ret;
	}
	if(c == need){
		cout << "Pos:\n";
		cout << "\tX:";
		cin >> tmpY;
		cout << "\n\tY:";
		cin >> tmpX;
		ret = UsingMap(fmap, tmpX, tmpY);
		lcf.boom --;
		lcf.Set();
	}
	return ret;
}

#endif
