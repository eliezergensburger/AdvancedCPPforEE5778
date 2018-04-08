#include "Point.h"
#include <cmath>
double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

void Point::setX(double val)
{
	x = val;
}

void Point::setY(double val)
{
	y = val;
}

Point::Point(double x, double y)
{
	setX(x);
	setY(y);
}

Point::Point(const Point & source)
{
	setX(source.getX());
	setY(source.getY());
}

Point & Point::operator=(const Point & source)
{
	//x = source.x;
	//y = source.y;
	setX(source.getX());
	setY(source.getY());

	return *this;
}

double Point::distance(const Point & other)
{
	return sqrt(pow((x-other.x),2) + pow((y-other.y),2));
}
