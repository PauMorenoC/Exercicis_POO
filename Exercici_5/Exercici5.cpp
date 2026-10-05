#include <iostream>
using namespace std;

class Jugador
{
private:
	string nom;
	int punts, vides;

public:
	Jugador(string nomjugador, int puntuatge, int vida)
	{
		nom = nomjugador;
		punts = puntuatge;
		vides = vida;
	}

	int conspunts()
	{
		return punts;
	}
	int consvides()
	{
		return vides;
	}

	bool perdrevida()
	{
		if (vides >= 1)
		{
			vides--;
			return true;
		}
		else
		{
			return false;
		}
	}

	bool viuono()
	{
		if (vides >= 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void afegirpunts(int quantitat)
	{
		punts += quantitat;
	}

};
int main()
{
	Jugador juga1("Pau", 0, 5);

	juga1.afegirpunts(50);
	if (juga1.perdrevida())
	{
		cout << "Has perdut una vida." << endl;
	}

	if (juga1.viuono())
	{
		cout << "Continues viu." << endl;
	}
	else
	{
		cout << "Estas mort." << endl;
	}

	cout << "Vides: " << juga1.consvides() << endl;
	cout << "Punts: " << juga1.conspunts() << endl;

	juga1.perdrevida();
	juga1.perdrevida();
	juga1.perdrevida();
	juga1.perdrevida();
	if (juga1.viuono())
	{
		cout << "Continues viu." << endl;
	}
	else
	{
		cout << "Estas mort." << endl;
	}

}