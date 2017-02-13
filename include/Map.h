#ifndef __MAP__
#define __MAP__

#include "Tile.h"

class Map
{
public:

	Map();
  
	Map(int nodeCount, float radius);

	bool generate();

private:

	Tile* spawnpoint;
  
	int nodeCount;

	float radius;
  
};

#endif
