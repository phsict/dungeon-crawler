// screuimp

#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point::link(Point* point)
{
	this->connectedPoints.push_back(point);
}
