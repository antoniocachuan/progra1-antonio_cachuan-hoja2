/* Ejercicio 12
Calcule el monto a pagar por el servicio de estacionamiento, teniendo en cuenta que por la
primera hora de estadía se tiene una tarifa de 10 y las restantes tienen un costo de 6. Se
tiene como datos : hora de entrada(hhmm), hora de salida(hhmm), iniciada una hora se
contabiliza como hora total.La hora de entrada y salida serán ingresadas como números
enteros.
*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 1
  horaSalida=700
  horaEntrada=701

Test 2
  horaSalida=800
  horaEntrada=950

*/
int ejercicio12()
{
	//Entrada
	int horaEntrada;
	int horaSalida;

	cin >> horaEntrada;
	cin >> horaSalida;

	//Restricciones
	/*
	-Hora de ingreso y salida en formato hhmm
	-Números enteros
	-Número mayores a 0
	-Numeros menores de 2359
	-Solo calcula hasta 23 horas con 59 minutos
	*/

	//Lógica
	int pago = 0;
	int horaParqueo = (horaSalida - horaEntrada) / 100;
	cout << "Hora Parqueo " << horaParqueo;
	int mExtra = (horaSalida - horaEntrada) % 100;
	cout << "\nminutosExtra " << mExtra;
	int horaRestante = horaParqueo - 1;

	if (horaParqueo > 1) {
		pago = 10 + (horaRestante * 6);
	}
	if (horaParqueo == 1 || (mExtra > 0 && horaParqueo == 0)) {
		pago = 10;
	}
	if (mExtra > 0 && horaParqueo >= 1) {
		pago = pago + 6;
	}

	//Salida
	cout << "Monto a pagar " << pago;

	return 0;
}
