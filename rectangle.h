#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"

class Rectangle : public Polygon {
private:
    float width;
    float length;

public:
    Rectangle();
    Rectangle(float w, float l);
    Rectangle(const Rectangle& r);

    ~Rectangle();

    Rectangle& operator=(const Rectangle& r);
    bool operator==(const Rectangle& r);

    void SetWidth(float w);
    void SetLength(float l);

    void GetDim(float& w, float& l);
    float GetLength();
    float GetWidth();

    virtual float Area() override;
    virtual float Perimeter() override;

    virtual void Draw() override;
};

#endif
