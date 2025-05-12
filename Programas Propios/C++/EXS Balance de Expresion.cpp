/*
 * Crea un programa que comprueba si los parentesis, llaves y corchetes
 * de una expresion estan equilibrados.
 * - Equilibrado significa que estos delimitadores se abren y cieran
 *   en orden y de forma correcta.
 * - Parentesis, llaves y corchetes son igual de prioritarios.
 *   No hay uno mas importante que otro.
 * - Expresion balanceada: { [ a * ( c + d ) ] - 5 }
 * - Expresion no balanceada: { a * ( c + d ) ] - 5 }
*/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//Prototipo de funciones
bool comprobarEquilibrio(string);

int main() {
	char expresion[100];			//Guarda la cadena original
	bool estaBalanceada;			//Decide si la expresion esta balanceada(TRUE) o no(FALSE)
	
	cout<<"Digite la expresion: ";	cin.get(expresion,100,'\n');		//Pregunta por la expresion
	
	estaBalanceada = comprobarEquilibrio(expresion);					//Comprueba el equilibrio de la expresion
	
	(estaBalanceada) ? cout<<"\nEsta balanceada\n\n" : cout<<"\nNo esta balanceada\n\n" ;
	
	system("pause");
	return 0;
}

//Definicion de funciones
bool comprobarEquilibrio(string expresion) {
	char expresionCopia[100];					//Guardara la copia de la cadena de tipo STRING
	strcpy(expresionCopia,expresion.c_str());	//Pasa el valor de tipo STRING a un CHAR
	
	int contadorParentesis = 0;
	int contadorCurlyBraket = 0;
	int contadorSquareBraket = 0;
	
	bool resultado;								//Guardara el resultado de la expresion
	
	for (int i=0; i<=strlen(expresionCopia); i++) {
		switch (expresionCopia[i]) {
		    case '(':
		    case ')':
		        contadorParentesis++;
		        break;
		    case '{':
		    case '}':
		        contadorCurlyBraket++;
		        break;
		    case '[':
		    case ']':
		        contadorSquareBraket++;
		        break;
		}
	}
	
	return ((contadorParentesis % 2 == 0) && (contadorCurlyBraket % 2 == 0) && (contadorSquareBraket % 2 == 0));
}
