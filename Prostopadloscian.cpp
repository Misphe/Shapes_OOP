#include "Prostopadloscian.h"
#include "Prostokat.h"

Prostopadloscian::Prostopadloscian(double a, double b, double h) : a(a), b(b), h(h) {}

Prostopadloscian::~Prostopadloscian() {}

double Prostopadloscian::Pole() {
	Prostokat prostokat(a, b);
	return prostokat.Pole();
}
