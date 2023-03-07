#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"
#include "TrojkatProstokatny.h"
#include "Bryla.h"
#include "Prostopadloscian.h"


using namespace std;

int main() {
	Prostokat prostokat(4, 4);
	cout << "zmiana boku A na 8" << endl;
	prostokat.SetA(8);
	cout << prostokat << endl;
	cout << "boki prostokata: " << prostokat.GetA() << ", " << prostokat.GetA() << endl;
	cout << "obwod prostokata: " << prostokat.Obwod() << endl;
	cout << "pole prostokata: " << prostokat.Pole() << endl << endl;

	Trojkat trojkat(3, 4, 5);
	cout << "zmiana boku A na 6" << endl;
	trojkat.SetA(6);
	cout << trojkat << endl;
	cout << "boki trojkata: " << trojkat.GetA() << ", " << trojkat.GetB() << ", " << trojkat.GetC() << endl;
	cout << "obwod trojkata: " << trojkat.Obwod() << endl;
	cout << "pole trojkata: " << trojkat.Pole() << endl << endl;

	Kolo kolo(3);
	cout << "zmiana promienia na 6" << endl;
	kolo.SetR(6);
	cout << kolo << endl;
	cout << "promien kola: " << kolo.GetR() << endl;
	cout << "obwod kola: " << kolo.Obwod() << endl;
	cout << "pole kola: " << kolo.Pole() << endl << endl;

	cout << "////////////////////////////////////////////////////////////////////////////////////////////////" << endl << endl;

	cout << "obiekty zdefiniowane poprzez wskaznik: " << endl << endl;

	Prostokat* prostokat_p = new Prostokat(5, 4);
	cout << "zmiana boku A na 10" << endl;
	prostokat_p->SetA(10);
	cout << *prostokat_p << endl;
	cout << "boki prostokata: " << prostokat_p->GetA() << ", " << prostokat_p->GetA() << endl;
	cout << "obwod prostokata: " << prostokat_p->Obwod() << endl;
	cout << "pole prostokata: " << prostokat_p->Pole() << endl;
	delete prostokat_p;
	cout << endl << endl;

	Trojkat* trojkat_p = new Trojkat(4, 4, 5);
	cout << "zmiana boku A na 8" << endl;
	trojkat_p->SetA(8);
	cout << *trojkat_p << endl;
	cout << "boki trojkata: " << trojkat_p->GetA() << ", " << trojkat_p->GetB() << ", " << trojkat_p->GetC() << endl;
	cout << "obwod trojkata: " << trojkat_p->Obwod() << endl;
	cout << "pole trojkata: " << trojkat_p->Pole() << endl;
	delete trojkat_p;
	cout << endl << endl;

	Kolo* kolo_p = new Kolo(3);
	cout << "zmiana promienia na 6" << endl;
	kolo_p->SetR(6);
	cout << *kolo_p << endl;
	cout << "promien kola: " << kolo_p->GetR() << endl;
	cout << "obwod kola: " << kolo_p->Obwod() << endl;
	cout << "pole kola: " << kolo_p->Pole() << endl;
	delete kolo_p;
	cout << endl << endl;

	cout << "////////////////////////////////////////////////////////////////////////////////////////////////" << endl << endl;

	cout << "Wykorzystanie metod wirtualnych: " << endl << endl;

	FiguraPlaska* figury[] =
	{
		new Prostokat(2,4),
		new Trojkat(3,4,5),
		new Kolo(1)
	};

	cout << endl;

	for (auto figura : figury) {
		cout << *figura << endl;
		cout << "obwod: " << figura->Obwod() << endl;
		cout << "pole: " << figura->Pole() << endl << endl;
	}

	for (auto figura : figury) {
		delete figura;
	}

	cout << endl << endl;

	cout << "////////////////////////////////////////////////////////////////////////////////////////////////" << endl << endl;

	cout << "Przyklad overridingu na podklasie TrojkatProstokatny klasy bazowej Trojkat: " << endl << endl;

	// override:
	Trojkat* trojkat_prostokatny = new TrojkatProstokatny(3,4,5);
	cout << trojkat_prostokatny->Pole() << endl << endl;

	cout << "////////////////////////////////////////////////////////////////////////////////////////////////" << endl << endl;

	cout << "ponizej tworzymy nowy trojkat, ktorego wartosci zostana przepisane\nz pierwszego trojkata, a dodatkowo wszystkie boki zostana pomnozone razy 2,\na potem razy 3. Mozemy tak zrobic za sprawa przeciazenia operatora *: " << endl << endl;

	// overload:
	// dziêki stworzeniu dwóch funkcji dla operatorów mo¿na mno¿yæ boki trójk¹tów
	Trojkat *trojkat2 = new Trojkat(2 * trojkat);
	*trojkat2 = *trojkat2 * 3;

	cout << endl << "po operacjach trojkat to: " << *trojkat2 << endl << endl;

	cout << "////////////////////////////////////////////////////////////////////////////////////////////////" << endl << endl;

	cout << "teraz wywolamy te sama funkcje dwa razy, z ta roznica, ze podamy rozne parametry.\nDzieki przeciazeniu funkcji otrzymamy rozne wyniki: " << endl;

	cout << "metoda GetA(): " << trojkat2->GetA() << endl;
	cout << "metoda GetA(3): ";
	cout << trojkat2->GetA(3) << endl << endl;

	cout << "////////////////////////////////////////////////////////////////////////////////////////////////" << endl << endl;

	Prostopadloscian prostopadloscian(2, 2, 4);
	cout << "Pole prostopadloscianu: " << prostopadloscian.Pole() << endl << endl;


	cout << "////////////////////////////////////////////////////////////////////////////////////////////////" << endl << endl;

	delete trojkat2;
	delete trojkat_prostokatny;
}