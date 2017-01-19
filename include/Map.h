#ifndef __MAP__
#define __MAP__

#include "Tile.h"

class Map
{
public:

  Map();
  
  bool generate();

private:

  Tile* spawnpoint;
  
  int nodeCount;
  
  float radius;
  
};

#endif
