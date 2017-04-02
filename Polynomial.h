/* -----------------------------------------------------------------------------

FILE:              Polynomial.H

DESCRIPTION:       

COMPILER:          g++ compiler for C++ 11


NOTES:             

MODIFICATION HISTORY:

Author                  Date               Version
---------------         ----------         --------------
Keegan Phillips         2017-03-29         1.0

Version 1.0:
TBD 

----------------------------------------------------------------------------- */
#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

#include<cmath>
#include<iostream>

#define NUM_COEFF 11

class Polynomial
{
	private:
		// We don't wan't to inadvertantly manipulate these attributes,
		// thus we make them accessible via member functions rather than
		// via direct access. This ensures that the program is more likely
		// to run as intended, especially when if the class is used by
		// other programmers
		int degree;
		int coeff[NUM_COEFF];
	public:
		// Enter public attributes and member functions here
		// Basic overloaded operators with ADT Polynomial
		// Then the () and == operators
		// Polynomial() is the default constructor
		Polynomial();
}
