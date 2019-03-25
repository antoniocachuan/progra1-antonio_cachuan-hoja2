/* Ejercicio 4
Que lea el valor de un ángulo en radianes y calcule y muestre su valor en grados, minutos
y segundos
*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 1
  radianes=100

Test 2
  radianes=400

*/
int ejercicio4() {
	//Entrada
	double radianes, grados, minutos, segundos;
	const static double pi = 3.1415926;

	//Restricciones
	/*
	-radianes>0
	*/

	//Lógica
	cout << "Cantidad en radianes: ";
	cin >> radianes;

	double preMinuto;
	double preSegundo;
	
	grados = radianes * 180 / pi;

	preMinuto = grados - floor(grados);

	cout << "Total dsds " << grados << endl;
	cout << "Total dsds " << floor(grados) << endl;
	cout << "Total dsds " << preMinuto << endl;

	minutos = preMinuto * 60;

	preSegundo = minutos - floor(minutos);
	 
	segundos = preSegundo * 60;

	//Salida
	cout << "Total grados " << floor(grados) << endl;
	cout << "Total minutos " << floor(minutos) << endl;
	cout << "Total segundos " << floor(segundos) << endl;

	return 0;
}