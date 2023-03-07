#pragma once
#include "Bryla.h"
class Prostopadloscian : public Bryla {
	double a, b, h;
public:
	double Pole() override;
	Prostopadloscian(double a, double b, double h);
	~Prostopadloscian();
};

