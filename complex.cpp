#include "complex.h"

struct Complex c;

string toString(Complex& c) //pass the whole struct into the function
{
	string real = to_string(c.re);
	string imag = to_string(c.im);
	string complexForm = {};

	if (c.im > 0)
	{
		complexForm = real + "+" + imag + "i";
	}
	else if (c.im < 0)
	{
		complexForm = real + "" + imag + "i";
	}

	return complexForm;
}

Complex conjugate(Complex& c)
{
	c.im *= -1;
	return c;
}

double magnitude(Complex& c)
{
	double magnitude = abs(sqrt(pow(c.re, 2) + pow(c.im, 2)));
	return magnitude;
}


Complex& add(Complex& c, Complex& res)
{
	Complex add;
	add.re = c.re + res.re;
	add.im = c.im + res.im;

	return add;
}


Complex& subtract(Complex& c, Complex& res)
{
	Complex sub;
	sub.re = c.re - res.re;
	sub.im = c.im - res.im;

	return sub;
}

/*
Complex& multiply(Complex& c, Complex& res)
{
	Complex multiply;
	//convert from REC to POL
	//find magnitude from before for both c and res
	double magnitude_c = abs(sqrt(pow(c.re, 2) + pow(c.im, 2)));
	double magnitude_res = abs(sqrt(pow(res.re, 2) + pow(res.im, 2)));
	
	//find the angle of both c and res (tan-1(y/x)
	double angle_c
	double angle_res

	return multiply;
}
*/
