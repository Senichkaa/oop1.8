//Source.cpp
#include <iostream>
#include <sstream>
#include <cmath>
#include "Fraction.h"

int main()
{
	Fraction k;
	Fraction::LongLong l;
	l.Init(0, 76);
	k.Init(l, 0.46);
	k.Display();
}