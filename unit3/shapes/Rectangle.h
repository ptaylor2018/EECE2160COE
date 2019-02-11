#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{
	float width;
	float height;

public:
	Rectangle(std::string name, float width, float height);
};
#endif
