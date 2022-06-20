#include "Complex.h"

Complex& Complex::operator=(const Complex& num)
{
	this->realNum = num.realNum;
	this->imagineNum = num.imagineNum;
	return *this;
}

Complex Complex::operator+(const Complex& num)
{
	Complex tmp(this->realNum + num.realNum, this->imagineNum + num.imagineNum);
	return tmp;
}

Complex Complex::operator-(const Complex& num)
{
	Complex tmp(this->realNum - num.realNum, this->imagineNum - num.imagineNum);
	return tmp;
}

Complex Complex::operator*(const Complex& num)
{
	Complex tmp((this->realNum * num.realNum)+(this->realNum * num.imagineNum), (this->imagineNum * num.realNum)-(this->imagineNum * num.imagineNum));
	return tmp;
}

Complex& Complex::operator+=(const Complex& num)
{
	this->realNum += num.realNum;
	this->imagineNum += num.imagineNum;
	return *this;
}

Complex& Complex::operator-=(const Complex& num)
{
	this->realNum -= num.realNum;
	this->imagineNum -= num.imagineNum;
	return *this;
}

Complex& Complex::operator*=(const Complex& num)
{
	this->realNum = (this->realNum * num.realNum) + (this->realNum * num.imagineNum);
	this->imagineNum =(this->imagineNum * num.realNum)-(this->imagineNum * num.imagineNum);
	return *this;
}