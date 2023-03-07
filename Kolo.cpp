#include "Kolo.h"
#include "Kolo.h"
#define M_PI 3.14159265358979323846
#include <cmath>
using namespace std;

Kolo::Kolo(double r)
	: r(r)
{
	cout << "Konstruktor Kola(" << r << ")" << endl;
}

void Kolo::Wypisz(std::ostream& out) const {
	cout << "Kolo(" << r << ")";
}

double Kolo::GetR() const {
	return r;
}

void Kolo::SetR(double r) {
	this->r = r;
}

double Kolo::Obwod() {
	return 2 * M_PI * r;
}

double Kolo::Pole() {
	return M_PI * r * r;
}

Kolo::~Kolo() {
	cout << "Zniszczono Kolo o promieniu: " << r << endl;
}
