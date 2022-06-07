#include <iostream>
#include <sstream>
#include "Rational.h"

using namespace std;

Rational::Rational(int a, int b) throw (Exception)
{
	seta(a);
	setb(b);
	if (b == 0)
		throw Exception("Can`t cout 0");

}

Rational::Rational(const Rational& r)
{
	*this = r;
}

Rational& Rational::operator=(const Rational& r)
{
	a = r.a;
	b = r.b;
	return *this;
}

Rational::operator string() const
{
	stringstream ss;
	ss << a << "/" << b;
	return ss.str();
}

istream& operator>>(istream& is, Rational& r)
{
	cout << " a - "; cin >> r.a;
	cout << " b - "; cin >> r.b;
	return is;
}

ostream& operator<<(ostream& os, const Rational& r)
{
	os << string(r);
	return os;
}

Rational operator/	(const Rational& r1, const Rational& r2)
{
	Rational r;
	r.a = r1.a * r2.b;
	r.b = r1.b * r2.a;
	if (r.b==0)
		throw Exception("Can`t cout 0");

	return r;
}

bool operator==(const Rational& r1, const Rational& r2)
{
	return (r1.a * r2.b == r1.b * r2.a);
}

bool operator>(const Rational& r1, const Rational& r2)
{
	return (r1.a * r2.b > r1.b * r2.a);
}

bool operator<(const Rational& r1, const Rational& r2)
{
	return (r1.a * r2.b < r1.b* r2.a);
}

Rational Rational::operator++()
{
	a++;
	return *this;
}

Rational Rational::operator++(int)
{
	Rational r = *this;
	a++;
	return r;
}

Rational Rational::operator--()
{
	a--;
	return *this;
}

Rational Rational::operator--(int)
{
	Rational r = *this;
	a--;
	return r;
}
