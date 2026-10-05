#include <iostream>
using namespace std;

class Producte
{
private:
	string nom;
	float preu;
	int estoc;

public:
	Producte(string nomi, float preui, int estoci)
	{
		nom = nomi;
		preu = preui;
		estoc = estoci;
	}

	float conspreu()
	{
		return preu;
	}
	void canvipreu(float noupreu)
	{
		preu = noupreu;
	}

	int afegir(int quantitat)
	{
		estoc += quantitat;
		return estoc;
	}
	bool vendre()
	{
		if (estoc >= 1)
		{
			estoc--;
			return true;
		}
		else return false;
	}

};

int main()
{
	Producte produ1("Patates", 2, 1);

	cout << "Preu: " << produ1.conspreu() << endl;
	produ1.canvipreu(3.5);
	cout << "Preu: " << produ1.conspreu() << endl;

	if (produ1.vendre())
	{
		cout << "Menys 1 unitat." << endl;
	}
	else
	{
		cout << "No queda estoc." << endl;
	}

	if (produ1.vendre())
	{
		cout << "Menys 1 unitat." << endl;
	}
	else
	{
		cout << "No queda estoc." << endl;
	}

	cout << "Nou estoc: " << produ1.afegir(3) << endl;
}