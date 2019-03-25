/* Ejercicio 1
Que calcule y muestre el menor número de monedas de 5, 2 y 1 para desglosar una cantidad
C, de Soles.
*/

#include "pch.h"
#include <iostream>

using namespace std;

/*
Test 1
  montoSoles = 58

Test 2
  montoSoles = 100

*/
int ejercicio1() {
	//Entrada
	int montoSoles;
	int monedaCinco, monedaDos, monedaUno;

	//Restricciones
	/*
	-montoSoles > 0
	-menor cantidad de monedas
	-cantidades enteras
	*/

	//Lógica
	cout << "Ingrese monto en soles: ";
	cin >> montoSoles;

	monedaCinco = montoSoles / 5;
	monedaDos = (montoSoles % 5) / 2;
	monedaUno = ((montoSoles % 5) % 2) / 1;

	//Salida
	cout << "Monedas de 5: " << monedaCinco << endl;
	cout << "Monedas de 2: " << monedaDos << endl;
	cout << "Monedas de 1: " << monedaUno << endl;

	return 0;
}