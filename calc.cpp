#include <iostream>

using namespace std;

int main()
{
	int numero, contador;
	cout << "Digite um numero" << endl;
	cin >> numero;

	for (contador = 1; contador <= 10; contador++)
	{
		cout << numero << "*" << contador << "=" << numero * contador << endl;
	}

	system("PAUSE");
	return 0;
}