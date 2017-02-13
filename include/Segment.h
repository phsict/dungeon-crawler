#ifndef __SEGMENT__
#define __SEGMENT__

#include "Point.h"

using namespace std;

class Segment
{
public:

	Segment();

  	Segment(Point* pointA, Point* pointB);

	Point* pointA, pointB;

  	Point normal;

};

#endif
