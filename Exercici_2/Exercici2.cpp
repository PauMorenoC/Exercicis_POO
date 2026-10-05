#include <iostream>
using namespace std;

class Rectangle
{
private:
	int amplada, alcada;

public:
	Rectangle(int ampl, int alc)
	{
		amplada = ampl;
		alcada = alc;
	}

	void mostrarDim()
	{
		cout << "Amplada: " << amplada << " | Alcada: " << alcada << endl;
	}

	int calcperi()
	{
		return amplada * 2 + alcada * 2;
	}

	int calcarea()
	{
		return amplada * alcada;
	}

};

int main()
{
	Rectangle rect(2, 3);

	cout << "Perimetre: " << rect.calcperi() << endl;

	cout << "Area: " << rect.calcarea() << endl;

	rect.mostrarDim();
}