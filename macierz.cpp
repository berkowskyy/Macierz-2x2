#include "macierz.h"

Macierz::Macierz()
{
	macierz[0][0] = 0;
	macierz[0][1] = 0;
	macierz[1][0] = 0;
	macierz[1][1] = 0;
}

Macierz::Macierz(const Macierz& copy)
{
	macierz[0][0] = copy.macierz[0][0];
	macierz[0][1] = copy.macierz[0][1];
	macierz[1][0] = copy.macierz[1][0];
	macierz[1][1] = copy.macierz[1][1];
}

Macierz::~Macierz(){}

Macierz Macierz::operator*(const Macierz& copy) const
{
	Macierz wynik;
	wynik.macierz[0][0] = macierz[0][0] * copy.macierz[0][0] + macierz[0][1] * copy.macierz[1][0];
	wynik.macierz[0][1] = macierz[0][0] * copy.macierz[0][1] + macierz[0][1] * copy.macierz[1][1];
	wynik.macierz[1][0] = macierz[1][0] * copy.macierz[0][0] + macierz[1][1] * copy.macierz[1][0];
	wynik.macierz[1][1] = macierz[1][0] * copy.macierz[0][1] + macierz[1][1] * copy.macierz[1][1];

	return wynik;
}

Macierz Macierz::operator+(const Macierz& copy) const
{
	Macierz wynik;
	wynik.macierz[0][0] = macierz[0][0] + copy.macierz[0][0];
	wynik.macierz[0][1] = macierz[0][1] + copy.macierz[0][1];
	wynik.macierz[1][0] = macierz[1][0] + copy.macierz[1][0];
	wynik.macierz[1][1] = macierz[1][1] + copy.macierz[1][1];

	return wynik;
}

Macierz Macierz::operator*(const double x) const
{
	Macierz wynik;
	wynik.macierz[0][0] = macierz[0][0] * x;
	wynik.macierz[0][1] = macierz[0][1] * x;
	wynik.macierz[1][0] = macierz[1][0] * x;
	wynik.macierz[1][1] = macierz[1][1] * x;

	return wynik;
}

Macierz& Macierz::operator=(const Macierz& copy)
{
	if (this != &copy)
	{

		macierz[0][0] = copy.macierz[0][0];
		macierz[0][1] = copy.macierz[0][1];
		macierz[1][0] = copy.macierz[1][0];
		macierz[1][1] = copy.macierz[1][1];
	}

	return *this;
}

bool Macierz::operator==(const Macierz& copy) const
{
	return macierz[0][0] == copy.macierz[0][0] && macierz[0][1] == copy.macierz[0][1] && macierz[1][0] == copy.macierz[1][0] && macierz[1][1] == copy.macierz[1][1];
}

Macierz& Macierz::operator+=(const Macierz& copy)
{
	macierz[0][0] += copy.macierz[0][0];
	macierz[0][1] += copy.macierz[0][1];
	macierz[1][0] += copy.macierz[1][0];
	macierz[1][1] += copy.macierz[1][1];

	return *this;
}

Macierz& Macierz::operator*=(const Macierz& copy)
{
	macierz[0][0] *= copy.macierz[0][0];
	macierz[0][1] *= copy.macierz[0][1];
	macierz[1][0] *= copy.macierz[1][0];
	macierz[1][1] *= copy.macierz[1][1];

	return *this;
}

Macierz& Macierz::operator*=(const double x)
{
	macierz[0][0] *= x;
	macierz[0][1] *= x;
	macierz[1][0] *= x;
	macierz[1][1] *= x;

	return *this;
}

void Macierz::set(int i, int j, double x)
{
	if (i >= 0 && i<2 && j>=0 && j < 2)
		macierz[i][j] = x;
}

double Macierz::get(int i, int j) const
{
	if (i >= 0 && i < 2 && j >= 0 && j < 2)
		return macierz[i][j];
	else
		return 0.0;
}

void Macierz::transpozycja()
{
	double temp = macierz[0][1];
	macierz[0][1] = macierz[1][0];
	macierz[1][0] = temp;
}

std::ostream& operator<<(std::ostream& s, const Macierz& m)
{
	s << "[" << m.macierz[0][0] << " " << m.macierz[0][1] << "]" << endl;
	s << "[" << m.macierz[1][0] << " " << m.macierz[1][1] << "]" << endl;
	return s;
}
