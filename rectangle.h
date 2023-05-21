/*! \file rectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"

/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle : public Polygon {
private:
    float width;
    float length;

public:
    /// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
    Rectangle();
    Rectangle(float w, float l);
    Rectangle(const Rectangle& r);

    ~Rectangle();
    /// @}

    /// @name OPERATORS
	/// @{
    Rectangle& operator=(const Rectangle& r);
    bool operator==(const Rectangle& r);
    /// @}

/// @name GETTERS / SETTERS
	/// @{
    void SetWidth(float w);
    void SetLength(float l);

    void GetDim(float& w, float& l);
    float GetLength();
    float GetWidth();
    /// @}

    virtual float Area() override;
    virtual float Perimeter() override;

    virtual void Draw() override;
};

#endif
