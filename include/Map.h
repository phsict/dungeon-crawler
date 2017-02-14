#ifndef __MAP__
#define __MAP__

#include "Tile.h"
#include "Point.h"
#include "Segment.h"

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
  
  	void extrude(Segment* face,
  	             Segment* bound1,
  	             Segment* bound2);
  
};

#endif
