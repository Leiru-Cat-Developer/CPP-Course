/*
 * Lee el fichero "ChallengeCalculadora.txt" incluido en el proyecto, calcula su
 * resultado e imprímelo.
 * - El .txt se corresponde con las entradas de una calculadora.
 * - Cada línea tendrá un número o una operación representada por un
 *   símbolo (alternando ambos).
 * - Soporta números enteros y decimales.
 * - Soporta las operaciones suma "+", resta "-", multiplicación "*"
 *   y división "/".
 * - El resultado se muestra al finalizar la lectura de la última
 *   línea (si el .txt es correcto).
 * - Si el formato del .txt no es correcto, se indicará que no se han
 *   podido resolver las operaciones.
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;

// Prototipo de funciones
float calculadora(string &);

int main()
{
    string nombreArchivo = "ChallengeCalculadora.txt"; // Nombre del archivo

    float resultado = calculadora(nombreArchivo);

    cout << endl
         << endl;
    cout << "El resultado es: " << resultado << endl
         << endl;

    system("pause");
    return 0;
}

// Definicion de funciones
float calculadora(string &nombreArchivo)
{
    ifstream archivo(nombreArchivo); // Guarda el nombre del archivo en una variable de tipo IFSTREAM

    if (!archivo.is_open())
    {
        // En caso de que no se pueda abrir o encontrar el archivo
        cout << "El archivo no se encuentra o no existe . . ." << endl
             << endl;
        return 0;
    }

    float resultado = 0;        // Resultado final
    float numero;               // Los numeros que encuentre se guardaran aqui
    char operacion;             // Simbolos de las operaciones
    bool primeraLectura = true; // Primera vez que se lee el archivo
    string linea;               // Linea actual en la que estamos leyendo el archivo

    // Mientras siga encontrando alguna linea de texto seguira leyendo el archivo
    while (getline(archivo, linea))
    {
        stringstream ss(linea);

        if (primeraLectura && ss >> resultado)
        { // Primer número se almacena en resultado
            primeraLectura = false;
        }
        else if (ss >> operacion)
        { // Leer la operación
            if (operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/')
            {
                cerr << "Error: Operación inválida." << endl;
                return 0;
            }

            // Leer siguiente número
            if (getline(archivo, linea))
            {
                stringstream ssNum(linea);
                if (!(ssNum >> numero))
                {
                    cerr << "Error: Formato incorrecto en el archivo." << endl;
                    return 0;
                }

                // Aplicar operación
                switch (operacion)
                {
                case '+':
                    resultado += numero;
                    break;
                case '-':
                    resultado -= numero;
                    break;
                case '*':
                    resultado *= numero;
                    break;
                case '/':
                    if (numero == 0)
                    {
                        cerr << "Error: División por cero." << endl;
                        return 0;
                    }
                    resultado /= numero;
                    break;
                }
            }
            else
            {
                cerr << "Error: Se esperaba un número después de la operación." << endl;
                return 0;
            }
        }
        else
        {
            cerr << "Error: Formato incorrecto en el archivo." << endl;
            return 0;
        }
    }

    archivo.close();
    return resultado;
}