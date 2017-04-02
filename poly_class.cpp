 `/* -----------------------------------------------------------------------------

FILE:              poly_class.CPP

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
#include "Polynomial.h"

// The default constructor should be initiated each time a Polynomial class
// object is created. This will initialize the degree and coefficients to 0
// until otherwise specified by the user
Polynomial::Polynomial()
{
	degree = 0;
	coeff[NUM_COEFF] = {0};
}
