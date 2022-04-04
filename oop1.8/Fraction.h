//Fraction.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Fraction
{
public:
	class LongLong
	{
	private:
		long a;
		unsigned long b;
	public:
		long get_a() const { return a; };
		unsigned long get_b() const { return b; };
		void set_a(long a) { this->a = a; };
		void set_b(unsigned long b) { this->b = b; };

		void Init(long a, unsigned long b);
		void Display();
		void Read();

		string toString() const;

		friend bool operator > (const LongLong& c1, const LongLong& c2);
		friend bool operator < (const LongLong& c1, const LongLong& c2);
		friend bool operator == (const LongLong& c1, const LongLong& c2);
		friend bool operator != (const LongLong& c1, const LongLong& c2);
	};
private:
	LongLong c;
	double d;
public:
	void set_c(LongLong c) { this->c = c; };
	void set_d(double d) { this->d = d; };
	LongLong get_c() const { return c; };
	double get_d() const { return d; };
	void Init(LongLong c, double d);
	void Display() const;
	void Read();

	string toString() const;

	friend bool operator > (const Fraction& c1, const Fraction& c2);
	friend bool operator < (const Fraction& c1, const Fraction& c2);
	friend bool operator == (const Fraction& c1, const Fraction& c2);
	friend bool operator != (const Fraction& c1, const Fraction& c2);
};
