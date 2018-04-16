#pragma once
class Point
{
	double x;
	double y;
public:
	double getX() const;
	double getY() const;
	void setX(double val);
	void setY(double val);
	Point(double x =0.0, double y =0.0);
	Point(const Point&);
	Point& operator=(const Point& source);
	bool operator==(const Point& other)const;
	bool operator!=(const Point& other)const;
	double distance(const Point& other);
	friend double dist2(const Point& rhs, const Point& lhs);
};