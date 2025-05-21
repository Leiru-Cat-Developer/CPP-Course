/*
 * Crea una función que reciba un String de cualquier tipo y se encargue de
 * poner en mayúscula la primera letra de cada palabra.
 * - No se pueden utilizar operaciones del lenguaje que
 *   lo resuelvan directamente.
*/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//Variables globales
char frase[100];

//Prototipo de funciones
void conversion(string);

int main() {
    cout << endl;
    cout << "Digite la frase: ";    cin.getline(frase,100,'\n');
    cout << endl;

    conversion(frase);

    system("pause");
    return 0;
}

//Definicion de funciones
void conversion(string frase) {
    char fraseCopia[100];
    strcpy(fraseCopia,frase.c_str());   //Copiar frase
    frase = "";

    for (int i=0; i<=strlen(fraseCopia); i++) {
        if (i == 0) {
            frase += toupper(fraseCopia[i]);
        } else if (fraseCopia[i-1] == ' ' || fraseCopia[i-1] == ',' || fraseCopia[i-1] == '.') {
            frase += toupper(fraseCopia[i]);
        } else {
            frase += fraseCopia[i];
        }
    }

    cout << frase << endl;
}