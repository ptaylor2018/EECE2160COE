#include "Rectangle.h"
// the constructor of 'class' rectangle first invokes the constructor of parent
// class 'shape' by forwarding argument 'name' to it. we do that by
// writing ":Shape(name) between the function header and curly brace symbol
Rectangle::Rectangle(std::string name, float width, float height) : Shape(name){
	
	this->width = width;
	this->height = height;
}
float Rectangle::GetArea(){
	return this->width*this->height;
}
