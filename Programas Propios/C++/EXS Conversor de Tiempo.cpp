/*
 * Crea una función que reciba días, horas, minutos y segundos (como enteros)
 * y retorne su resultado en milisegundos.
 */
#include <iostream>
#include <stdio.h>

using namespace std;

// Prototipos de funciones
long conversion(int, int, int, int);

int main()
{
    int dias, horas, minutos, segundos;

    cout << endl
         << endl;
    cout << "Digite dias, horas, minutos y segundos: ";
    cin >> dias >> horas >> minutos >> segundos;
    cout << endl
         << endl;

    cout << "Su tiempo en milisegundos es: " << conversion(dias, horas, minutos, segundos) << endl;

    system("pause");
    return 0;
}

// Definicion de funciones
long conversion(int dias, int horas, int minutos, int segundos)
{
    long resultado = 0;

    resultado += (dias * 86400000);
    resultado += (horas * 3600000);
    resultado += (minutos * 60000);
    resultado += (segundos * 1000);

    return resultado;
}