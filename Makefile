# ------------------------------------------------------------------------------
#
# FILE NAME:    Makefile
#
# DESCRIPTION:  Makefile for a C++ program poly_class
#
# PURPOSE:      Build a program executable
#
# MODIFICATION HISTORY:
#
# Author        Date          Modification(s)
# -----------   ----------    ---------------
# Ed Corbett    2016-10-26    Version 2
# Ed Corbett    2016-10-31    Version 3
# Ed Corbett    2017-03-17    Version 4
# ------------------------------------------------------------------------------
#
#	This is our original generic makefile command that will build
#	any stand alone ".cpp" source file.
#	Usage: e.g., make hello

.cpp : 
	g++ -o $* $*.cpp -std=c++11

#	This will use the object files required for "poly_class"
#	and link them into a single executable.
#	Usage:	make poly_class

poly_class: Polynomial.o poly_class.o
	g++ -o $@ $@.o Polynomial.o  -std=c++11

#	This will build the two object files required for "poly_class"
#	which are dependent on Polynomial.h

%.o : %.cpp Polynomial.h
	g++ -c $< -std=c++11

