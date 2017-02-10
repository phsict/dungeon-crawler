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
	vector<TileNode*> nodes;
	default_random_engine generator;

	uniform_real_distribution<float> angleDist(0.0, 2.0 * 3.1415);
	uniform_real_distribution<float> radiusDist(0.0, radius);

	for (int i = 0; i < nodeCount; i++)
	{
		float pitch = angleDist(generator);
		float yaw = angleDist(generator);
		float distance = radiusDist(generator);

		float x = distance * cos(pitch) * cos(yaw);
		float y = distance * sin(pitch) * cos(yaw);
		float z = distance * sin(yaw);

		nodes.push_back(new TileNode(x, y, z, 0))                           ;
	}

}
