#include "calculator.h"

//add change
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

//sub change
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

//mul change
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

//Karmaniuk
//Bohdan
//IO-04