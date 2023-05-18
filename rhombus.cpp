#include "rhombus.h"

Rhombus::Rhombus() : Polygon() {
    //cout << "Rhombus - constructor - default" << endl;
    diagH = 0.;
    diagV = 0.;
}

Rhombus::Rhombus(float dH, float dV) : Polygon() {
    diagH = 0.;
    diagV = 0.;
    //cout << "Rhombus - constructor" << endl;

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

Rhombus::Rhombus(const Rhombus &r) : Polygon(r) {
    //cout << "Rhombus - copy constructor" << endl;
    diagH = r.diagH;
    diagV = r.diagV;
}

Rhombus::~Rhombus() {
    //cout << "Rhombus - destructor" << endl;
}

Rhombus& Rhombus::operator=(const Rhombus &r) {
    //cout << "Rhombus - operator =" << endl;
    Polygon::operator=(r);
    diagH = r.diagH;
    diagV = r.diagV;
    return *this;
}

bool Rhombus::operator==(const Rhombus &r) {
    if (r.diagH == diagH && r.diagV == diagV) {
        return true;
    }
    return false;
}

void Rhombus::SetDim(float dH, float dV) {
    SetDiagH(dH);
    SetDiagV(dV);
}

void Rhombus::SetDiagH(float dH) {
    if (dH < 0.) {
        cout << "WARNING: Rhombus - SetWidth: width should be > 0" << endl;
        return;
    }
    diagH = dH;
}

void Rhombus::SetDiagV(float dV) {
    if (dV < 0.) {
        cout << "WARNING: Rhombus - SetLength: length should be > 0" << endl;
        return;
    }
    diagV = dV;
}

void Rhombus::GetDim(float &dH, float &dV) {
    dH = diagH;
    dV = diagV;
}

float Rhombus::GetDiagH() {
    return diagH;
}

float Rhombus::GetDiagV() {
    return diagV;
}

float Rhombus::Area() {
    return (diagH * diagV) / 2;
}

float Rhombus::Perimeter() {
    float side = sqrt(pow(diagH / 2, 2) + pow(diagV / 2, 2));
    return 4 * side;
}

void Rhombus::Draw() {
    std::cout << "Drawing a rhombus..." << std::endl;
}


