#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>

using namespace std;

class Polygon {
protected:
    float perimeter;
    float area;

    virtual float Area() = 0;
    virtual float Perimeter() = 0;

public:
    Polygon();
    Polygon(const Polygon& p);
    virtual ~Polygon();

    Polygon& operator=(const Polygon& p);
    bool operator==(const Polygon& p);

    void Init();
    void Init(const Polygon& r);
    void Reset();

    float GetArea();
    float GetPerimeter();

    virtual void Draw() = 0;

    void ErrorMessage(const char* string);
    void WarningMessage(const char* string);
    void Dump();
};

#endif
