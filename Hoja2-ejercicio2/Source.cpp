#include <iostream>;
using namespace std;
#include<math.h>
int Real(int* real, int* real2) {

	int resultado = *real + *real2;
	return resultado;
}
int Imaginaria(int* imaginaria, int* imaginaria2) {

	int resultado = *imaginaria + *imaginaria2;
	return resultado;
}

int Real2(int* real, int* real2) {

	int resultado = *real - *real2;
	return resultado;
}
int Imaginaria2(int* imaginaria, int* imaginaria2) {

	int resultado = *imaginaria - *imaginaria2;
	return resultado;
}



void main() {
	cout << "               MENU PRINCIPAL                " << endl;
	cout << "A: Sumar 2 numeros complejos  " << endl;
	cout << "B: Restar 2 numero complejos " << endl;
	cout << "X: Salir del programa " << endl;
	char* opcion = new char;
	cin >> *opcion;
	if (*opcion == 'A')
	{

		cout << "Numero 1: " << endl;
		cout << "Parte Real: ";
		int* real = new int;
		cin >> *real;
		cout << "Parte Imaginaria: ";
		int* imaginaria = new int;
		cin >> *imaginaria;
		cout << "Numero 2:" << endl;
		cout << "Parte Real: ";
		int* real2 = new int;
		cin >> *real2;
		cout << "Parte Imaginaria: ";
		int* imaginaria2 = new int;
		cin >> *imaginaria2;

		cout << "(" << Real(real, real2) << "+" << Imaginaria(imaginaria, imaginaria2) << "i" << ")";
	}
	else if (*opcion == 'B')
	{
		cout << "Numero 1: " << endl;
		cout << "Parte Real: ";
		int* real = new int;
		cin >> *real;
		cout << "Parte Imaginaria: ";
		int* imaginaria = new int;
		cin >> *imaginaria;
		cout << "Numero 2:" << endl;
		cout << "Parte Real: ";
		int* real2 = new int;
		cin >> *real2;
		cout << "Parte Imaginaria: ";
		int* imaginaria2 = new int;
		cin >> *imaginaria2;
		cout << "(" << Real2(real, real2) << "+" << Imaginaria2(imaginaria, imaginaria2) << "i" << ")";
	}

}
/*paste.ofcode.org/wtn9CsZZi7kfeR9gzTtAWz*/