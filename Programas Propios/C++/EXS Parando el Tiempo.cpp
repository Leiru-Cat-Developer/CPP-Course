/*
 * Crea una función que sume 2 números y retorne su resultado pasados
 * unos segundos.
 * - Recibirá por parámetros los 2 números a sumar y los segundos que
 *   debe tardar en finalizar su ejecución.
 * - Si el lenguaje lo soporta, deberá retornar el resultado de forma
 *   asíncrona, es decir, sin detener la ejecución del programa principal.
 *   Se podría ejecutar varias veces al mismo tiempo.
 */
#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

// Prototipos de funciones
int suma(int, int, int);

int main()
{
    int n1, n2, segundos;
    cout << endl
         << endl;
    cout << "Digite 2 numeros y los segundos que desea que el programa tarde: ";
    cin >> n1 >> n2 >> segundos;
    cout << endl
         << endl;

    cout << "El resultado es: " << suma(n1, n2, segundos) << endl;
    system("pause");
    return 0;
}

// Definicion de funciones
int suma(int n1, int n2, int segundos)
{
    int resultado = n1 + n2;
    Sleep(segundos * 1000);
    return resultado;
}