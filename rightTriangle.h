/*! 
	\file rightTriangle.h
	\brief Declaration of the derived class RightTriangle

	Details.
*/

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H


#include "polygon.h"
#include <cmath>

/// @class RightTriangle
/// @brief an abstract base class for polygons


class RightTriangle : public Polygon {
private:
    float base;
    float altitude;

public:
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
    RightTriangle();
    RightTriangle(float base, float altitude);
	RightTriangle(const RightTriangle &p);
    virtual ~RightTriangle();
	/// @}

	/// @name OPERATORS
	/// @{
	RightTriangle& operator=(const RightTriangle &p); 
	bool operator==(const RightTriangle &p);
	friend std::ostream& operator<<(std::ostream& os, const RightTriangle& r);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const RightTriangle &r);							
	void Reset();												
	/// @}

    virtual float Area();
    virtual float Perimeter();

    float GetHypotenuse();

	/// @name DRAWING
	/// @{
    virtual void Draw();
	/// @}
    
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}
};

#endif
