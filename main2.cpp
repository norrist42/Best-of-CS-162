#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "point.hpp"
#include "line.hpp"

int main()
{
	Point p1(0, 0.0);
	Point p2(0, 0);
	Point p3(0,0);
	Point p4(5,6);
	double dist;
	Line line1(p1, p2);
	Line line2(p3, p4);
	
	try
	{
		dist = p1.distanceTo(p2);
		std::cout << "The distance between point 1 and point 2 is: " << dist <<'\n';
	}

	catch (Line::DegenerateLine)
	{
		std::cout<< "The points are the same, cannot generate line. " << std::endl;
	}
	
	try
	{
		printf("The linear equation of line 1 is: y=%lfx+%lf \n",line1.slope(), line1.get_Bvalue());
		printf("The linear equation of line 2 is: y=%lfx+%lf \n",line2.slope(), line2.get_Bvalue());
	}
	
	catch(Line::UndefinedSlope)
	{
		std::cout<< "Error, cannot generate undefined slope." << std::endl;
	}

	try
	{
	Point intersection = line1.IntersectWith(line2);
	printf("The intersection of the line is: (%lf, %lf)\n", intersection.getXCoord(), intersection.getYCoord());
	}

	catch (Line::ParallelLines)
	{
		std::cout<< "Error, the lines have the same slope. Intersection cannot be reached." << std::endl;
	}

	return 0;
}
