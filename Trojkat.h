#pragma once
#include "FiguraPlaska.h"

class Trojkat : public FiguraPlaska {
private:
	double a, b, c;
protected:
	void Wypisz(std::ostream& out) const override;
	friend Trojkat operator*(int multiplier, Trojkat trojkat);
	friend Trojkat operator*(Trojkat trojkat, int multiplier);

public:
	Trojkat(double a, double b, double c);

	double GetA() const;

	double GetA(int pomylka) const;

	void SetA(double a);

	double GetB() const;
	
	void SetB(double b);
	
	double GetC() const;

	void SetC(double c);

	double Obwod() override;
	double Pole() override;

	~Trojkat() override;
};



