/* Ejercicio 2
Que teniendo como dato una hora expresada en segundos (t), nos calcule y muestre la
cantidad de horas, minutos y segundos contenidos en dicha hora.
*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 1
  horaIngresada=1810

Test 2
  horaIngresada=3600

*/
int ejercicio2() {
	//Entrada
	int horaIngresada, totalEnhoras, totalEnMinutos, totalEnSegundos;

	//Restricciones
	/*
	-horaIngresada>0
	*/

	//Lógica
	cout << "Ingrese la hora en segundos: ";
	cin >> horaIngresada;

	totalEnhoras = horaIngresada / 3600;
	totalEnMinutos = (horaIngresada % 3600) / 60;
	totalEnSegundos = (horaIngresada % 3600) % 60;

	//Salida
	cout << "Total horas " << totalEnhoras << endl;
	cout << "Total minutos " << totalEnMinutos << endl;
	cout << "Total segundos " << totalEnSegundos << endl;

	return 0;
}