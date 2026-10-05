#include <iostream>
using namespace std;

class Termometre
{
private:
	int temp;

public:
	Termometre(int temperatura)
	{
		temp = temperatura;
	}

	int consultar()
	{
		return temp;
	}

	bool modificar(int quantitat)
	{
		if (temp + quantitat <= 50 && temp + quantitat >= -60)
		{
			temp += quantitat;
			return true;
		}
		else
		{
			return false;
		}
	}

};

int main()
{
	Termometre termo(0);

	cout << "Temperatura: " << termo.consultar() << " graus." << endl;

	if (termo.modificar(50))
	{
		cout << "Temperatura modificada: " << termo.consultar() << " graus." << endl;
	}

	else
	{
		cout << "Temperatura NO modificada." << endl;
	}
}