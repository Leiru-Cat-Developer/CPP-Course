/*
 * Escribe un programa que se encargue de comprobar si un numero es o no primo.
 * Hecho esto, imprime los numeros primos entre 1 y 100.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int contador = 0;
	
	for (int n=1; n<=100; n++) {
		if (n > 1) {
			for (int j=1; j<=n; j++) {
				if (n%j == 0) {
					contador++;
				}
			}
			if (contador <= 2) {
				cout<<n<<endl;
			}
			
			contador = 0;
		}
	}
	
	system("pause");
	return 0;
}
