#include "polygon.h"

Polygon::Polygon() {
    //cout << "Polygon - constructor - default" << endl;

    area = 0.0;
    perimeter = 0.0;
}

Polygon::Polygon(const Polygon& p) {
    //cout << "Polygon - copy constructor" << endl;

    Init(p);
}

Polygon::~Polygon() {
    //cout << "Polygon - destructor" << endl;
    Reset();
}

Polygon& Polygon::operator=(const Polygon& p) {
    return *this;
}

bool Polygon::operator==(const Polygon& r) {
    return false;
}

void Polygon::Init() {
    Reset();
    perimeter = 0.0;
    area = 0.0;
}

void Polygon::Init(const Polygon& p) {
    Reset();
}

void Polygon::Reset() {
    perimeter = 0.0;
    area = 0.0;
}

float Polygon::GetArea() {
    area = Area();
    return area;
}

float Polygon::GetPerimeter() {
    perimeter = Perimeter();
    return perimeter;
}

void Polygon::ErrorMessage(const char* string) {
    cout << endl
         << "ERROR -- Polygon --";
    cout << string << endl;
}

void Polygon::WarningMessage(const char* string) {
    cout << endl
         << "WARNING -- Polygon --";
    cout << string << endl;
}

void Polygon::Dump() {
    cout << endl;
    cout << "Perimeter = " << GetPerimeter() << endl;
    cout << "Area = " << GetArea() << endl;
    cout << endl << flush;
}
