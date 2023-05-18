#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "polygon.h"
#include "math.h"

using namespace std;

class Rhombus : public Polygon
{
private:
	float diagH;
	float diagV;

public:
	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus &r);
	~Rhombus();
	Rhombus& operator=(const Rhombus &r);
	bool operator==(const Rhombus &r);

	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);

	void GetDim(float &dH, float &dV);
	float GetDiagH();
	float GetDiagV();

    virtual float Area() override;
    virtual float Perimeter() override;

    virtual void Draw() override;
};

#endif
