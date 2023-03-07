#include "TrojkatProstokatny.h"
using namespace std;

double TrojkatProstokatny::Pole() {
	double* boki[] =
	{
		&a,
		&b,
		&c
	};
	double najwieksza = a;
	for (auto bok : boki) {
		if (*bok > najwieksza) {
			najwieksza = *bok;
		}
	}

	double Pole=1;
	for (auto bok : boki) {
		if (*bok != najwieksza) {
			Pole *= *bok;
		}
	}
	cout << "Wywolujemy te sama funkcje Pole(), a jednak tym razem pojawia sie ten napis, a pole obliczane jest blednie: ";
	return Pole * 10;
}

TrojkatProstokatny::~TrojkatProstokatny() {
	cout << "Zniszczono Trojkat o wymiarach: " << a << ", " << b << ", " << c << endl;
}
