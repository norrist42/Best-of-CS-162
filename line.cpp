#include "line.hpp"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include "point.hpp"

// Default Constructor
Line::Line()
{
	point1 = Point(0,0);
	point2 = Point(0,0);	
}
	 
// Copy Constructor
Line::Line(Point &p1, Point &p2)
{
	point1 = p1;
	point2 = p2;
}

// Obtains the first point
Point Line::getPoint1()
{
	return point1;
}

// Obtains the second point
Point Line::getPoint2()
{
	return point2;
}

// Calculates the slope of the line
// Pre-Condition: Have 2 points created
double Line::slope()
{
	double x1;
	double y1;
	double x2;
	double y2;
	double diff_x;
	double diff_y;
	
	x1 = point1.getXCoord();
	y1 = point1.getYCoord();
	x2 = point2.getXCoord();
	y2 = point2.getYCoord();

	// If point 1 and point 2 are not the same
	if (x1 != x2 || y1 != y2)
	{
		diff_x = x2-x1;
		diff_y = y2-y1;
	}

	else
		throw DegenerateLine(); 

	// The slope is not undefined
	if (diff_x !=0)
		return diff_y/diff_x;
	else
		throw UndefinedSlope();
}

// Obtains the b value for the linear
// equation y=mx+b
double Line::get_Bvalue()
{
	double b;
	double x;
	double y;
	
	x = point1.getXCoord();
	y = point1.getYCoord();

	b = y - x*slope();

	return b;
}


// Calculates the intersection between lines
Point Line::IntersectWith(Line &line1)
{
	double x_intersection;
	double y_intersection;
	double difference_b;
	double difference_slope;

	// values to calculate intersection	
	difference_b = get_Bvalue() - line1.get_Bvalue();
	difference_slope = slope() - line1.slope();

	// If the lines are not parallel
	if (difference_slope != 0)
	{
		// Determine intersection coordinates
		x_intersection = difference_b/difference_slope;
		y_intersection = x_intersection*line1.slope() + line1.get_Bvalue();

		// The intersection point
		Point Intersection(x_intersection, y_intersection);
		return Intersection;
	}
	else
		// Parrallel Lines Exception
		throw ParallelLines();
}

