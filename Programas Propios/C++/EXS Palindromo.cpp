/*
 * Escribe una función que reciba un texto y retorne verdadero o
 * falso (Boolean) según sean o no palíndromos.
 * Un Palíndromo es una palabra o expresión que es igual si se lee
  * de izquierda a derecha que de derecha a izquierda.
 * NO se tienen en cuenta los espacios, signos de puntuación y tildes.
 * Ejemplo: Ana lleva al oso la avellana.
*/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//Prototipo de funciones
bool palindromo(string);

int main() {
    char palabra[100];

    cout<<endl;
    cout<<"Digite una frase: "; cin.getline(palabra,100,'\n');      fflush(stdin);

    (palindromo(palabra)) ? cout<<"Es un palindromo"<<endl : cout<<"No es un palindromo"<<endl;

    system("pause");
    return 0;
}

//Definicion de funciones
bool palindromo(string p) {
    char palabraOriginal[100];
    char palabraComparacion[100];

    strcpy(palabraOriginal,p.c_str());
    strcpy(palabraComparacion,p.c_str());

    strupr(palabraOriginal);
    strupr(palabraComparacion);

    for (int i=0; i<=strlen(palabraOriginal); i++) {
        if (palabraOriginal[i] == ' ') {
            for (int j=i; j<=strlen(palabraOriginal); j++) {
                palabraOriginal[j] = palabraOriginal[j+1];
            }
        }
    }

    for (int i=0; i<=strlen(palabraComparacion); i++) {
        if (palabraComparacion[i] == ' ') {
            for (int j=i; j<=strlen(palabraComparacion); j++) {
                palabraComparacion[j] = palabraComparacion[j+1];
            }
        }
    }

    strrev(palabraComparacion);

    if (strcmp(palabraOriginal,palabraComparacion) == 0) {
        return true;
    }else {
        return false;
    }
}