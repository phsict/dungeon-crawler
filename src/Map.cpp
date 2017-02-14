#include "Map.h"
#include "TileNode.h"
#include <vector>
#include <random>
#include <cmath>

using namespace std;

Map::Map()
{
}

Map::Map(int nodeCount, float radius)
{
	this->nodeCount = nodeCount;
	this->radius = radius;
}

bool Map::generate()
{

}

void Map::extrude(Segment* face, Segment* bound1, Segment* bound2)
{
	// uniform_real_distribution<double> distribution(0.0,1.0);
	default_random_engine generator;

}
