#pragma once
#include "Trojkat.h"
class TrojkatProstokatny : public Trojkat {
public:
	double a, b, c;
public:
	TrojkatProstokatny(double a, double b, double c) : Trojkat(a, b, c), a(a), b(b), c(c) {};

	double Pole() override;

	~TrojkatProstokatny() override;
};

