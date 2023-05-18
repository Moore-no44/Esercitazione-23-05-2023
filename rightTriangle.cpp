#include "rightTriangle.h"
#include <cmath>

RightTriangle::RightTriangle() : Polygon(), base(0.0), altitude(0.0) {
    //cout << "RightTriangle - constructor - default" << endl;
}

RightTriangle::RightTriangle(float base, float altitude) : Polygon(), base(base), altitude(altitude) {
    //cout << "RightTriangle - constructor" << endl;
}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
RightTriangle::RightTriangle(const RightTriangle &p) {
	
	//cout << "RightTriangle - copy constructor" << endl;

	Init(p);
}

RightTriangle::~RightTriangle() {
    //cout << "RightTriangle - destructor" << endl;
}


/// @brief overload of operator = 
/// @param p reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
RightTriangle& RightTriangle::operator=(const RightTriangle &p) {
    if (this == &p) {
        return *this;
    }

    Polygon::operator=(p);
    base = p.base;
    altitude = p.altitude;

    return *this;
}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool RightTriangle::operator==(const RightTriangle &r) { 
	return (base == r.base) && (altitude == r.altitude);
}

/// @brief overload of operator <<
/// @param os 
/// @param r 
/// @return 
std::ostream& operator<<(std::ostream& os, const RightTriangle& r) {
    os << "Right Triangle: Base = " << r.base << ", altitude = " << r.altitude;
    return os;
}

/// @brief default initialization of the object
void RightTriangle::Init() {
	 Polygon::Init();
    Reset();
}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void RightTriangle::Init(const RightTriangle &p) {
	Polygon::Init(p);
    base = p.base;
    altitude = p.altitude;
}

/// @brief total reset of the object  
void RightTriangle::Reset() {
	Polygon::Reset();
    base = 0.0;
    altitude = 0.0;
}

/// @brief write an error message 
/// @param string message to be printed
void RightTriangle::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- RightTriangle -- " << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void RightTriangle::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- RightTriangle -- " << string << endl;

}


/// @brief for debugging: all about the object
void RightTriangle::Dump() {
	
	Polygon::Dump();
    cout << "Base: " << base << endl;
    cout << "Altitude: " << altitude << endl;

}


float RightTriangle::Area() {
    return 0.5 * base * altitude;
}


float RightTriangle::Perimeter() {
    float hypotenuse = GetHypotenuse();
    return base + altitude + hypotenuse;
}


float RightTriangle::GetHypotenuse() {
    return sqrt((base * base) + (altitude * altitude));
}


void RightTriangle::Draw() {
    cout << "Drawing a right triangle..." << endl;
}