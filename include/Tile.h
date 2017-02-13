#ifndef __TILE__
#define __TILE__

#include <vector>
#include <list>

using namespace std;

class Tile
{
public:

	vector <Tile*> getConnections();
	//Need to figure out geometry of Tile
private:

	Tile();

	float x, y, z;
	int w = 0;

	list <Tile*> connections;
  
};

#endif
