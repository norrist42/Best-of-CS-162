#include "point.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>

// Default Point Constructor 
Point::Point()
{
	x_coordinate = 0;
	y_coordinate = 0;
}

// Copy Constructor
Point::Point(const double x, const double y)
{
	x_coordinate = x;
	y_coordinate = y;
}

// Gets the x coordinate of a point
double Point::getXCoord()
{
	return x_coordinate;
}

// Gets the y coordinate of a point
double Point::getYCoord()
{
	return y_coordinate;
}

// Calculates the distance between points
double Point::distanceTo(Point p)
{
	double x1;
	double x2;
	double y1;
	double y2;
	
	x1 = x_coordinate;
	y1 = y_coordinate;
	x2 = p.getXCoord();
	y2 = p.getYCoord();
	
	// formula for calculating distance
	distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

	return distance;
	
}

	

