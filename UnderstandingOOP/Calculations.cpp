#include "Calculations.h"

Calculations::Calculations(double numA, double numB)
{
	this->numA = numA;
	this->numB = numB;
	this->result = 0;
}

void Calculations::Addition()
{
	this->result = this->numA + this-> numB;
}

double Calculations::getResult()
{
	return this->result;
}

double Calculations::getNumA()
{
	return this->numA;
}

double Calculations::getNumB()
{
	return this->numB;
}

void Calculations::setNumA(double numA)
{
	this->numA = numA;
}

void Calculations::setNumB(double numB)
{
	this->numB = numB;
}