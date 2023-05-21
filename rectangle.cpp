/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include <iostream>
#include "rectangle.h"

/// @brief default constructor 
Rectangle::Rectangle() {
    //std::cout << "Rectangle - constructor - default" << std::endl;
    width = 0.0;
    length = 0.0;
}

/// @brief constructor 
/// @param w width of the rectangle
/// @param l length of the rectangle
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

/// @brief destructor 
Rectangle::~Rectangle() {
    //std::cout << "Rectangle - destructor" << std::endl;
}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
Rectangle::Rectangle(const Rectangle& r) {
    //std::cout << "Rectangle - copy constructor" << std::endl;
    width = r.width;
    length = r.length;
}

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rectangle& Rectangle::operator=(const Rectangle& r) {
    //std::cout << "Rectangle - operator =" << std::endl;
    width = r.width;
    length = r.length;
    return *this;
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Rectangle::operator==(const Rectangle& r) {
    if (r.width == width && r.length == length)
        return true;
    return false;
}

/// @brief set width of the object
/// @param w width 
void Rectangle::SetWidth(float w) {
    if (w < 0.0) {
        std::cout << "WARNING: Rectangle - SetWidth: width should be > 0" << std::endl;
        return;
    }
    width = w;
}

/// @brief set length of the object
/// @param l length 
void Rectangle::SetLength(float l) {
    if (l < 0.0) {
        std::cout << "WARNING: Rectangle - SetLength: length should be > 0" << std::endl;
        return;
    }
    length = l;
}

/// @brief get width and length of the object
/// @param w width 
/// @param l length
void Rectangle::GetDim(float& w, float& l) {
    w = width;
    l = length;
}

/// @brief get length of the object
/// @return length
float Rectangle::GetLength() {
    return length;
}

/// @brief get width of the object
/// @return width 
float Rectangle::GetWidth() {
    return width;
}

/// @brief calculates the rectangle's area
/// @return Area 
float Rectangle::Area() {
    return width * length;
}

/// @brief calculates the rectangle's perimeter
/// @return Area 
float Rectangle::Perimeter() {
    return 2 * (width + length);
}

void Rectangle::Draw() {
    std::cout << "Drawing a rectangle..." << std::endl;
}

