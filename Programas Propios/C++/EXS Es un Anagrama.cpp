/*
 * Escribe una funcion que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) segun sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
*/
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdio.h>

using namespace std;

//Prototipos de funciones
bool anagrama(string,string);

int main() {
	string palabra1;
	string palabra2;
	
	bool esAnagrama;
	
	cout<<"Digite una palabra: ";	cin>>palabra1;
	fflush(stdin);
	
	cout<<"Digite una palabra: ";	cin>>palabra2;
	fflush(stdin);
	
	esAnagrama = anagrama(palabra1,palabra2);
	
	if (esAnagrama) {
		cout<<"\n"<<"SON ANAGRAMAS"<<"\n\n";
	}else {
		cout<<"\n"<<"NO SON ANAGRAMAS"<<"\n\n";
	}
	
	system("pause");
	return 0;
}

//Definicion de funciones
bool anagrama(string a1, string a2) {
	transform(a1.begin(),a1.end(),a1.begin(), ::toupper);	//Mayusculas
	transform(a2.begin(),a2.end(),a2.begin(), ::toupper);	//Mayusculas
	
	if (a1 == a2) {
		return false;
	}else {
		size_t lenght1 = a1.length();
		size_t lenght2 = a2.length();
		
		if (lenght1 == lenght2) {
			sort(a1.begin(), a1.end());	//Ordenar Alfabeticamente
			sort(a2.begin(), a2.end());	//Ordenar Alfabeticamente
			
			if (a1 == a2) {
				return true;
			}else {
				return false;
			}
		}else {
			return false;
		}
	}
}
