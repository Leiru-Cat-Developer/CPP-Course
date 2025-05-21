/*
 * Crea una función que calcule y retorne cuántos días hay entre dos cadenas
 * de texto que representen fechas.
 * - Una cadena de texto que representa una fecha tiene el formato "dd/MM/yyyy".
 * - La función recibirá dos String y retornará un Int.
 * - La diferencia en días será absoluta (no importa el orden de las fechas).
 * - Si una de las dos cadenas de texto no representa una fecha correcta se
 *   lanzará una excepción.
*/
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <ctime>
#include <stdexcept>

using namespace std;

//Prototipos de funciones
tm convertirFecha(string);
int diferencia(string,string);

int main() {
    try {
        string fecha1, fecha2;
        int dias;

        cout<<endl;

        cout << "Digita la fecha 1: ";    cin>>fecha1;
        cout << "Digita la fecha 2: ";    cin>>fecha2;

        cout << endl;

        dias = diferencia(fecha1,fecha2);
        cout << "Dias de diferencia: " << dias << endl;

    } catch (const exception e) {
        cout << endl;
        cerr << "Error: "<< e.what() << endl;
    }

    system("pause");
    return 0;
}

//Definicion de funciones
tm convertirFecha(string fecha) {
    tm tmFecha = {};                    //Fecha declarada de tipo time
    stringstream ss(fecha);
    int dia, mes, anio;
    char separador1, separador2;

    //Validar formato correcto
    if (!(ss >> dia >> separador1 >> mes >> separador2 >> anio) || separador1 != '/' || separador2 != '/') {
        throw invalid_argument("Formato de fecha incorrecto: " + fecha);
    }

    //Validar valores de día, mes y año
    if (mes < 1 || mes > 12 || dia < 1 || dia > 31 || anio < 1900) {
        throw invalid_argument("Valores de fecha fuera de rango: " + fecha);
    }

    tmFecha.tm_mday = dia;
    tmFecha.tm_mon = mes - 1;           //tm_mon cuenta desde 0 (enero es 0)
    tmFecha.tm_year = anio - 1900;      //tm_year cuenta desde 1900

    return tmFecha;                     //Retorna fecha de tipo TIME
}

int diferencia(string fecha1, string fecha2) {
    tm tmFecha1 = convertirFecha(fecha1);
    tm tmFecha2 = convertirFecha(fecha2);

    //Convertir a tiempo en segundos
    time_t tiempo1 = mktime(&tmFecha1);
    time_t tiempo2 = mktime(&tmFecha2);

    if (tiempo1 == -1 || tiempo2 == -1) {
        throw runtime_error("Error al convertir las fechas");
    }

    //Calcular diferencia absoluta en días
    return abs(difftime(tiempo1, tiempo2) / (60 * 60 * 24));
}