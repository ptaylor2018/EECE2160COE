#include "Rectangle.h"

	Rectangle::Rectangle(std::string name){
		this->name = name;
	}
	Rectangle::~Rectangle(){
		std::cout << "Rectangle destroyed\n";
	}
	
void Rectangle::SetDimensions(float w, float h){
	width = w;
	height = h;
}

float Rectangle::GetArea(){
	return width*height;
}
