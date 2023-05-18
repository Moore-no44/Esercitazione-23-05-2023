#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle() {
    //std::cout << "Rectangle - constructor - default" << std::endl;
    width = 0.0;
    length = 0.0;
}

Rectangle::Rectangle(float w, float l) {
    //std::cout << "Rectangle - constructor" << std::endl;

    if (w <= 0.0)
        std::cout << "WARNING: Rectangle - constructor: width should be > 0" << std::endl;
    else
        width = w;

    if (l <= 0.0)
        std::cout << "WARNING: Rectangle - constructor: length should be > 0" << std::endl;
    else
        length = l;
}

Rectangle::~Rectangle() {
    //std::cout << "Rectangle - destructor" << std::endl;
}

Rectangle::Rectangle(const Rectangle& r) {
    //std::cout << "Rectangle - copy constructor" << std::endl;
    width = r.width;
    length = r.length;
}

Rectangle& Rectangle::operator=(const Rectangle& r) {
    //std::cout << "Rectangle - operator =" << std::endl;
    width = r.width;
    length = r.length;
    return *this;
}

bool Rectangle::operator==(const Rectangle& r) {
    if (r.width == width && r.length == length)
        return true;
    return false;
}

void Rectangle::SetWidth(float w) {
    if (w < 0.0) {
        std::cout << "WARNING: Rectangle - SetWidth: width should be > 0" << std::endl;
        return;
    }
    width = w;
}

void Rectangle::SetLength(float l) {
    if (l < 0.0) {
        std::cout << "WARNING: Rectangle - SetLength: length should be > 0" << std::endl;
        return;
    }
    length = l;
}

void Rectangle::GetDim(float& w, float& l) {
    w = width;
    l = length;
}

float Rectangle::GetLength() {
    return length;
}

float Rectangle::GetWidth() {
    return width;
}

float Rectangle::Area() {
    return width * length;
}

float Rectangle::Perimeter() {
    return 2 * (width + length);
}

void Rectangle::Draw() {
    std::cout << "Drawing a rectangle..." << std::endl;
}

