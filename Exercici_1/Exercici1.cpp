#include <iostream>
using namespace std;

class Persona
{
private:
	string nom;
	int edat;

public:
	Persona(string nompersona, int edatpersona)
	{
		nom = nompersona;
		edat = edatpersona;
	}

	void mostrarDades()
	{
		cout << "Nom: " << nom << " | Edat: " << edat << " anys." << endl;
	}

	bool majoredat()
	{
		if (edat >= 18)
		{
			return true;
		}

		return false;
	}

};

int main()
{
	Persona persona1("Pau", 19);

	persona1.mostrarDades();

	if (persona1.majoredat())
	{
		cout << "Ets major d'edat.";
	}
	else
	{
		cout << "No ets major d'edat.";
	}
}