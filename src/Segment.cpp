#include "Segment.h"

Segment::Segment()
{

}

Segment::Segment(Point* pointA, Point* pointB)
{
	this->pointA = pointA;
	this->pointB = pointB;

	double slope = (pointB->y - pointA->y) / (pointB->x - pointA->x);
	this->normal = Point(1, 1 / slope, 0);
}


