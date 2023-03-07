#include "Trojkat.h"
#include <cmath>
using namespace std;

Trojkat::Trojkat(double a, double b, double c)
	: a(a), b(b), c(c)
{
	cout << "Konstruktor Trojkata(" << a << ", " << b << ", " << c << ")" << endl;
}

void Trojkat::Wypisz(std::ostream& out) const {
	cout << "Trojkat(" << a << ", " << b << ", " << c << ")";
}

double Trojkat::GetA() const{
	return a;
}

double Trojkat::GetA(int pomylka) const {
	cout << "uwaga, wynik moze byc niepoprawny: ";
	return a + pomylka;
}

double Trojkat::GetB() const {
	return b;
}

double Trojkat::GetC() const {
	return c;
}

void Trojkat::SetA(double a) {
	this->a = a;
}

void Trojkat::SetB(double b) {
	this->b = b;
}

void Trojkat::SetC(double c) {
	this->c = c;
}

double Trojkat::Obwod() {
	return a + b + c;
}

double Trojkat::Pole() {
	double p = (a + b + c) / 2;
	double P = sqrt(p * (p - a) * (p - b) * (p - c));
	return P;
}

Trojkat::~Trojkat() {
	cout << "Zniszczono Trojkat o wymiarach: " << a << ", " << b << ", "<< c << endl;
}


Trojkat operator*(int multiplier, Trojkat trojkat) {
	double new_a = trojkat.GetA() * multiplier;
	double new_b = trojkat.GetB() * multiplier;
	double new_c = trojkat.GetC() * multiplier;
	return Trojkat(new_a, new_b, new_c);
}

Trojkat operator*(Trojkat trojkat, int multiplier) {
	double new_a = trojkat.GetA() * multiplier;
	double new_b = trojkat.GetB() * multiplier;
	double new_c = trojkat.GetC() * multiplier;
	return Trojkat(new_a, new_b, new_c);
}
