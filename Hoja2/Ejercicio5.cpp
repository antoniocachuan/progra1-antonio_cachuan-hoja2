/* Ejercicio 2
Que lea las coordenadas (x, y) de un punto y nos indique si se encuentra en el círculo x2 +
y2 = 25.
*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 1
  x=10
  y=10

Test 2
  x=2
  y=1

*/
int ejercicio5() {
	//Entrada
	int coordenadaX, coordenadaY;
	double distancia; 
	const int radio = 5;

	string resultado = "fuera";

	//Restricciones
	/*
	-x e y son enteros
	*/

	//Lógica
	cout << "Eje x: ";
	cin >> coordenadaX;
	cout << "Eje y: ";
	cin >> coordenadaY;

	distancia = sqrt(pow(coordenadaX,2)+pow(coordenadaY,2));

	if (distancia<radio) {
		resultado = "dentro";
	}
	
	//Salida
	printf("El punto esta %s del circulo.\n", resultado.c_str());

	return 0;
}