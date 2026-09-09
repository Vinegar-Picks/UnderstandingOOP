#include "Calculations.h"

Calculations::Calculations(double numA, double numB)
{
	this->numA = numA;
	this->numB = numB;
}

void Calculations::Addition()
{
	this->result = this->numA + this-> numB;
}

double Calculations::getResult()
{
	return this->result;
}
