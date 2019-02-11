#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle{
	float width;
	float height;
	std::string name;

public:

	Rectangle(std::string name);
	~Rectangle();		
	void SetDimensions(float w, float h);
	float GetArea();
};



#endif
