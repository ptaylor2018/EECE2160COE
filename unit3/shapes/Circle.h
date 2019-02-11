#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape{
	float radius;
public:
	Circle(std::string name, float radius);
	
	//Override function 'Print()'
	void Print();
};
#endif
