/*!
 * @file rhombus.h
   \brief Declaration of the derived Rhombus class.

   Details.
 */

#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "polygon.h"
#include "math.h"

using namespace std;

/// @class rhombus
/// @brief an abtract derived class for rhombus
class Rhombus : public Polygon
{
private:
	float diagH; // The horizontal diagonal of the rhombus. 
	float diagV; // The vertical diagonal of the rhombus. 

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus &r);
	~Rhombus();
	/// @}

	/// @name OPERATORS
	/// @{
	Rhombus& operator=(const Rhombus &r);
	bool operator==(const Rhombus &r);
	/// @}

	/// @name SETTERS
	/// @{
	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);
	/// @}

	/// @name GETTERS
	/// @{
	void GetDim(float &dH, float &dV);
	float GetDiagH();
	float GetDiagV();
	/// @}

    virtual float Area() override;
    virtual float Perimeter() override;

	/// @name DRAWING
	/// @{
    virtual void Draw() override;
	// @}

};

#endif