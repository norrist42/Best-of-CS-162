#ifndef POINT_HPP
#define POINT_HPP
#include <cstdlib>
#include <iostream>

class Point
{
	private:
		double x_coordinate;
		double y_coordinate;
		double distance;


	public:
		Point();
		Point(const double x,const double y);
		double getXCoord();
		double getYCoord();
		double distanceTo(Point p);
};

#endif
