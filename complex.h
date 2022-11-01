#pragma once
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

struct Complex
{
	int re = 0;
	int im = 0;
};



string toString(Complex& c);
Complex conjugate(Complex& c);
double magnitude(Complex& c);
Complex& add(Complex& c, Complex& res);
Complex& subtract(Complex& c, Complex& res);
Complex& multiply(Complex& c, Complex& res);

