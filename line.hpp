#ifndef LINE_HPP
#define LINE_HPP
#include "point.hpp"
#include <cstdlib>
#include <iostream>

class Line
{

	private:
		Point point1;
		Point point2;
	
	public:
		Line();
		Line(Point &p1, Point &p2);
		class UndefinedSlope{};
		class ParallelLines{};
		class DegenerateLine{};
		Point getPoint1(); 
		Point getPoint2();
		double slope();
		double get_Bvalue();
		Point IntersectWith(Line &l1);
};

#endif
