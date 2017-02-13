#ifndef __POINT__
#define __POINT__

#include <vector>

using namespace std;

class Point
{
public:

  	Point();
  	Point(double x, double y, double z);
  	void link(Point* point);

  	double x, y, z;
	vector<Point*> connectedPoints;

};

#endif
