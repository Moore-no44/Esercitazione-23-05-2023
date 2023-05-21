#include "rhombus.h"

/// @brief default constructor
Rhombus::Rhombus() : Polygon() {
    
    diagH = 0.;
    diagV = 0.;
}

/// @brief constructor
/// @param dH diagH of the rhombus
/// @param dV diagV of the rhombus
Rhombus::Rhombus(float dH, float dV) : Polygon() {
    diagH = 0.;
    diagV = 0.;

    if (dH <= 0.) {
        cout << "WARNING: Rhombus - constructor: DiagH should be > 0" << endl;
    } else {
        diagH = dH;
    }

    if (dV <= 0.) {
        cout << "WARNING: Rhombus - constructor: DiagL should be > 0" << endl;
    } else {
        diagV = dV;
    }
}

/// @brief copy constructor 
/// @param r reference to the object that should be copied
Rhombus::Rhombus(const Rhombus &r) : Polygon(r) {
    
    diagH = r.diagH;
    diagV = r.diagV;
}

/// @brief destructor
Rhombus::~Rhombus() {
    
}

/// @brief overload of operator = 
/// @param p reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus &r) {
    
    Polygon::operator=(r);
    diagH = r.diagH;
    diagV = r.diagV;
    return *this;
}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length 
bool Rhombus::operator==(const Rhombus &r) {
    if (r.diagH == diagH && r.diagV == diagV) {
        return true;
    }
    return false;
}

/// @brief set diagonals of the object 
/// @param dH DiagH 
/// @param dV DiagV 
void Rhombus::SetDim(float dH, float dV) {
    SetDiagH(dH);
    SetDiagV(dV);
}

/// @brief set diagH of the object
/// @param dH diagH
void Rhombus::SetDiagH(float dH) {
    if (dH < 0.) {
        cout << "WARNING: Rhombus - SetWidth: width should be > 0" << endl;
        return;
    }
    diagH = dH;
}

/// @brief set diagV of the object
/// @param dH diagV
void Rhombus::SetDiagV(float dV) {
    if (dV < 0.) {
        cout << "WARNING: Rhombus - SetLength: length should be > 0" << endl;
        return;
    }
    diagV = dV;
}

/// @brief get diagonals of the object 
/// @param dH DiagH 
/// @param dV DiagV 
void Rhombus::GetDim(float &dH, float &dV) {
    dH = diagH;
    dV = diagV;
}

/// @brief get the diagonalH of the object
/// @return diagH
float Rhombus::GetDiagH() {
    return diagH;
}

/// @brief get the diagonalV of the object
/// @return diagV 
float Rhombus::GetDiagV() {
    return diagV;
}

/// @brief area of the object
/// @return area 
float Rhombus::Area() {
    return (diagH * diagV) / 2;
}

/// @brief perimeter of the object
/// @return perimeter 
float Rhombus::Perimeter() {
    float side = sqrt(pow(diagH / 2, 2) + pow(diagV / 2, 2));
    return 4 * side;
}

/// @brief draw the object
void Rhombus::Draw() {
    std::cout << "Drawing a rhombus..." << std::endl;
}