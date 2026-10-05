#include <iostream>
using namespace std;

enum estatReserva { confirmada, cancelada };

class Reserva
{
private:
	string nom;
	int nits;
	float preunit;
	estatReserva estat;

public:
	Reserva(string nomi, int nitsi, float preuniti, estatReserva estati)
	{
		nom = nomi;
		nits = nitsi;
		preunit = preuniti;
		estat = estati;
	}

	string consnom()
	{
		return nom;
	}

	bool canvinits(float novesnits)
	{
		if (estat == confirmada)
		{
			nits = novesnits;
			return true;
		}

		else return false;
	}

	float preutotal()
	{
		return nits * preunit;
	}

	void cancelar()
	{
		estat = cancelada;
		cout << "La reserva de " << nom << " s'ha cancelat." << endl;
	}

	bool estatreserva()
	{
		if (estat == confirmada)
			return true;
		else return false;
	}

};

int main()
{
	Reserva reserva1("Pau", 2, 15.50, confirmada);

	cout << "Nom client: " << reserva1.consnom() << endl;

	cout << "Preu total: " << reserva1.preutotal() << " euros." << endl;

	reserva1.canvinits(3);
	cout << "Nou preu total: " << reserva1.preutotal() << " euros." << endl;

	if (reserva1.estatreserva())
	{
		cout << "L'estat de la reserva: confirmada." << endl;
	}

	reserva1.cancelar();

	if (!reserva1.canvinits(7))
	{
		cout << "Ja no pots canviar les nits." << endl;
	}

}