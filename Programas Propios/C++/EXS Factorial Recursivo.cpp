/*
 * Escribe una función que calcule y retorne el factorial de un número dado
 * de forma recursiva.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//Prototipo de funciones
int factorial(int);

int main() {
    int numero;
    int resultado;

    cout<<endl;
    cout<<"Digite el numero del cual desea obtener el factorial: "; cin>>numero;
    cout<<endl;

    resultado = factorial(numero);
    cout<<"El factorial del numero "<<numero<<" es: "<<resultado<<endl<<endl;

    system("pause");
    return 0;
}

//Definicion de funciones
int factorial(int n) {
    int resultado;

    if (n == 0) {
        return 0;
    }else if (n == 1) {
        return 1;
    }else {
        return n * (factorial(n-1));
    }
}