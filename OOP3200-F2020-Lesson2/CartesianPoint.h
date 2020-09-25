#pragma once
#ifndef __CARTESIAN_POINT__
#define __CARTESIAN_POINT__

#include <string>
// class declaration section
class CartesianPoint
{
public:

	/* Constructor: Used to initialize objects
	*	- always the same name as the class
	*	- never have a return type
	*	- called automatically when an obj is instantiated
	*	- should set values for each member variable
	*/
	CartesianPoint(int x = 1, int y = 1);
	~CartesianPoint();

	/* copy constructor */
	CartesianPoint(const CartesianPoint& point2);

	/* operator overloads */
	CartesianPoint operator+(const CartesianPoint& point2) const;

	double operator-(const CartesianPoint& pointTo) const;

	bool operator==(const CartesianPoint& rhs) const;

	/* friend overloads */
	friend std::ostream& operator<<(std::ostream& out, const CartesianPoint& point);
	friend std::istream& operator>>(std::istream& in, CartesianPoint& point);
	// --------------------------------------------------------------------------------
	/* Accessors: Used to query the state of the object */

	// get x
	int GetX();

	// get y
	int GetY();

	// -------------------------------------------------------------------------------
	/* Mutator(s): Used to change the state of the object */

	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	int GetX() const;

	int GetY() const;

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	//double GetDistanceTo(CartesianPoint pointTo) const;

	double GetDistanceTo(const CartesianPoint& point_to) const;

	// convert the obj to a string
	std::string ToString() const;


private:
	// private data members for the dimensions of the point
	int m_X; // x-axis (horizontal) value
	int m_Y;  // y-axis (vertical) value

};


#endif /* defined (__CARTESIAN_POINT__) */

