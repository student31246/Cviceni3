#pragma once
class Complex
{
private:
	int realNum, imagineNum;
public:
	//CONSTRUCTORS
	Complex() { this->realNum = 0; this->imagineNum = 0; }
	Complex(int real, int imagine) { this->realNum = real; this->imagineNum = imagine; }
	Complex(Complex& num) : Complex(num.realNum, num.imagineNum) {}

	//OPERATORS
	Complex& operator=(const Complex& num);
	Complex operator+(const Complex& num);
	Complex operator-(const Complex& num);
	Complex operator*(const Complex& num);
	Complex& operator+=(const Complex& num);
	Complex& operator-=(const Complex& num);
	Complex& operator*=(const Complex& num);

	//GETTERS AND SETTERS
	void SetReal(int real) { this->realNum = real; }	
	void SetImagine(int imagine) { this->imagineNum = imagine; }
	int& GetImagine() { return this->imagineNum; }
	int& GetReal() { return this->realNum; }

	//FUNCTIONS
	void Add(Complex& num) { this->realNum += num.realNum; this->imagineNum += num.imagineNum; }
	void Sub(Complex& num) { this->realNum -= num.realNum; this->imagineNum -= num.imagineNum; }
	void Multiply(Complex& num) { this->realNum *= num.realNum; this->imagineNum *= num.imagineNum; }
};

