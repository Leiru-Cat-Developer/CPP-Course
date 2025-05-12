/*
 * Escribe un programa que imprima los 50 primeros numeros de la sucesion
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesion de numeros en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	long fibonacci[100];
	
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	
	cout<<fibonacci[0]<<endl;
	cout<<fibonacci[1]<<endl;
	
	for (int i=2; i<=50; i++) {
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
		cout<<fibonacci[i]<<endl;
	}
	
	system("pause");
	return 0;
}
