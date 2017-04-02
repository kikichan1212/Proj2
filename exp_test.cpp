/* -----------------------------------------------------------------------------

FILE:              exp_test.cpp

DESCRIPTION:       Tests the display of exponents using Unicode characters

COMPILER:          g++ under Linux

NOTES:             To display properly in puTTY, you need to set
		   Change Settings > Translation:  UTF-8
		   Change Settings > Appearance > Font: Consolas or DejaVu Sans Mono

MODIFICATION HISTORY:

Author             Date           Version
---------------    ----------     --------------
Ed Corbett         2017-03-29     1.0  
----------------------------------------------------------------------------- */
#include <iostream>
#include <cmath>

using namespace std;

// "main()" function --- the program's entry point
//    int argc      	// Number of parameters on the command line
//    char *argv[]  	// An array of pointers to C-strings 

int main(int argc, char * argv[])
{
    int i;
    const char* super[10] = {
		"\u2070", "\u00B9", "\u00B2", "\u00B3", "\u2074",
		"\u2075", "\u2076", "\u2077", "\u2078", "\u2079"};

    cout << endl;

    for (i=0; i<10; i++) 
    {
	cout << " x";
	cout << super[i];
    }
    cout << endl;
    cout << endl;
}
