#pragma once
#include <iostream>
#include <string>
#include "Exception.h"
#include "Object.h"

using namespace std;

class Rational: public Object
{
	int a;
	int b;
public:
	Rational(int a = 1, int b = 1) throw (Exception);
	Rational(const Rational& r);
	~Rational() {};
	Rational& operator=(const Rational& r);

	int geta() const { return a; }
	int getb() const { return b; }
	void seta(int a) { this->a = a; }
	void setb(int b) throw (Exception) { this->b = b; }

	friend	istream& operator>>(istream& is, Rational& r);
	friend	ostream& operator<<(ostream& os, const Rational& r);
	operator string()const;

	double value()const { return a / b; }

	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);

	Rational operator++();
	Rational operator++(int);
	Rational operator--();
	Rational operator--(int);
};

