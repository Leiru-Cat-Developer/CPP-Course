/*
 * Escribe un programa que muestre por consola (con un print) los
 * numeros de 1 a 100 (ambos incluidos y con un salto de linea entre
 * cada impresion), sustituyendo los siguientes:
 * - Multiplos de 3 por la palabra "fizz".
 * - Multiplos de 5 por la palabra "buzz".
 * - Multiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	for (int i=1; i<=100; i++) {
		if ((i % 3 == 0) && (i % 5 == 0)) {
			cout<<"fizzbuzz"<<endl;
		}else if (i % 3 == 0) {
			cout<<"fizz"<<endl;
		}else if (i % 5 == 0) {
			cout<<"buzz"<<endl;
		}else {
			cout<<i<<endl;	
		}
	}
	system("pause");
	return 0;
}
