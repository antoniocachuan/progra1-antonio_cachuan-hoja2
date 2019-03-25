/* Ejercicio 11
Determine el pago a realizar por las entradas a un espectáculo donde se pueden comprar
sólo hasta cuatro entradas, donde al costo de dos entradas se les descuenta el 10%, al de
tres entradas el 15% y a la compra de cuatro se le descuenta el 20 %. Debe ingresar el costo
de la entrada y el número de entradas a comprar.
*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 1
  costoEntrada=100
  numeroEntradasComprar = 3

Test 2
  costoEntrada=1
  numeroEntradasComprar = 1

*/
int ejercicio11() {
	//Entrada
	float costoEntrada, numeroEntradasComprar;
	float descuento=0.0;
	float montoPagar;

	//Restricciones
	/*
	-costoEntrada y numeroEntradasComprar>0
	-numeroEntradasComprar<5
	*/

	//Lógica
	cout << "Ingrese el costo de entradas: ";
	cin >> costoEntrada;
	cout << "Ingrese el número de entradas: ";
	cin >> numeroEntradasComprar;

	if (numeroEntradasComprar == 2) {
		descuento = costoEntrada * numeroEntradasComprar * 10 / 100;
	}
	if (numeroEntradasComprar == 3) {
		descuento = costoEntrada * numeroEntradasComprar * 15 / 100;
	}
	if (numeroEntradasComprar == 4) {
		descuento = costoEntrada * numeroEntradasComprar * 20 / 100;
	}

	montoPagar = (costoEntrada*numeroEntradasComprar) - descuento;

	//Salida
	cout << "Total a pagar: 😁" << montoPagar << endl;

	return 0;
}