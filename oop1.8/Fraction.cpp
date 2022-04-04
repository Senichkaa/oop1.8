//Fraction.cpp
#include <sstream>
#include <iostream>
#include "Fraction.h"
using namespace std;


void Fraction::LongLong::Init(long a, unsigned long b)
{
	set_a(a);
	set_b(b);
}

void Fraction::LongLong::Display()
{
	cout << toString() << endl;
}

void Fraction::LongLong::Read()
{
	long a;
	unsigned long b;
	cout << endl;
	cout << "a= ?"; cin >> a;
	cout << "b= ?"; cin >> b;
}

string Fraction::LongLong::toString() const
{
	stringstream s;
	long p[2]{ b,a };
	unsigned long long q;
	q = *(unsigned long long*)p;
	s << q;
	return s.str();
}

bool operator>(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return c1.get_a() > c2.get_a() ||
		c1.get_a() == c2.get_a() &&
		c1.get_b() > c2.get_b();
}

bool operator<(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return c1.get_a() < c2.get_a() ||
		c1.get_a() == c2.get_a() &&
		c1.get_b() < c2.get_b();
}

bool operator==(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return c1.get_b() == c2.get_b() ||
		c1.get_a() == c2.get_a();
}

bool operator!=(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return c1.get_b() != c2.get_b() ||
		c1.get_a() != c2.get_a();
}


void Fraction::Init(LongLong c, double d)
{
	set_c(c);
	set_d(d);
}

void Fraction::Display() const
{
	cout << toString() << endl;
}

void Fraction::Read()
{
	LongLong c;
	double d;
	double d1;
	cout << "c= ";
	cin >> d1;
	c.set_a(d1);
	cout << "d= ";
	cin >> d;
	Init(c, d);
}

string Fraction::toString() const
{
	stringstream sout, ss;
	ss << d;
	sout << c.toString() << ss.str().substr(ss.str().find('.'));
	return sout.str();
}

bool operator>(const Fraction& c1, const Fraction& c2)
{
	return c1.get_c() > c2.get_c() ||
		c1.get_c() == c2.get_c() &&
		c1.get_d() > c2.get_d();
}

bool operator<(const Fraction& c1, const Fraction& c2)
{
	return c1.get_c() > c2.get_c() ||
		c1.get_c() == c2.get_c() &&
		c1.get_d() > c2.get_d();
}

bool operator==(const Fraction& c1, const Fraction& c2)
{
	return c1.get_d() == c2.get_d() ||
		c1.get_c() == c2.get_c();
}

bool operator!=(const Fraction& c1, const Fraction& c2)
{
	return c1.get_d() != c2.get_d() ||
		c1.get_c() != c2.get_c();
}