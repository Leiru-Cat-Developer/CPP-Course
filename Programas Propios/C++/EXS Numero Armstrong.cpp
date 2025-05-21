/*
 * Escribe una función que calcule si un número dado es un número de Armstrong
 * (o también llamado narcisista).
 * Si no conoces qué es un número de Armstrong, debes buscar información
 * al respecto.
*/
#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {
    int numero;

    cout<<endl;
    cout<<"Digite el numero: "; cin>>numero;
    cout<<endl;

    int temporal = numero;
    int suma = 0;
    int resultado = 0;

    while (numero > 0) {
        resultado = numero%10;
        suma += pow(resultado,3);
        numero /= 10;
    }

    (suma == temporal) ? cout<<"El numero es Armstrong" : cout<<"El numero no es armstrong" ;
    cout<<endl;

    system("pause");
    return 0;
}