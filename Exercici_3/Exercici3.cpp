#include <iostream>
using namespace std;

class Llum
{
private:
	bool estat;

public:
	Llum(bool est)
	{
		estat = est;
	}

	void encendre()
	{
		if (!estat)
			estat = true;
	}

	void apagar()
	{
		if (estat)
			estat = false;
	}

	bool consultar()
	{
		if (estat)
			return true;

		return false;
	}


};

int main()
{
	Llum luz(false);

	luz.encendre();
	luz.apagar();

	if (luz.consultar())
	{
		cout << "Esta encesa." << endl;
	}
	else
	{
		cout << "Esta apagada." << endl;
	}

}