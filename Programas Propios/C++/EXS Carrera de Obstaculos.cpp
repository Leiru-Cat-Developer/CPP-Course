/*
 * Crea una función que evalúe si un/a atleta ha superado correctamente una
 * carrera de obstáculos.
 * - La función recibirá dos parámetros:
 *      - Un array que sólo puede contener String con las palabras
 *        "run" o "jump"
 *      - Un String que represente la pista y sólo puede contener "_" (suelo)
 *        o "|" (valla)
 * - La función imprimirá cómo ha finalizado la carrera:
 *      - Si el/a atleta hace "run" en "_" (suelo) y "jump" en "|" (valla)
 *        será correcto y no variará el símbolo de esa parte de la pista.
 *      - Si hace "jump" en "_" (suelo), se variará la pista por "x".
 *      - Si hace "run" en "|" (valla), se variará la pista por "/".
 * - La función retornará un Boolean que indique si ha superado la carrera.
 * Para ello tiene que realizar la opción correcta en cada tramo de la pista.
 */
#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>

using namespace std;

// Prototipo de funciones
bool carrera(vector<string> &, vector<string> &);

int main()
{
    cout << endl << endl;
    vector<string> corredor1_movimientos = {"run", "jump", "run"};
    vector<string> corredor1_obstaculos = {"|", "_", "|"};

    vector<string> corredor2_movimientos = {"jump", "jump", "run", "jump", "run"};
    vector<string> corredor2_obstaculos = {"|", "|", "_", "|", "|"};

    vector<string> corredor3_movimientos = {"run", "run", "run", "run", "run", "run", "run"};
    vector<string> corredor3_obstaculos = {"_", "_", "_", "_", "_"};

    vector<string> corredor4_movimientos = {"run", "jump", "run", "jump"};
    vector<string> corredor4_obstaculos = {"_", "|", "_", "|"};

    bool resultado = false;
    resultado = carrera(corredor1_movimientos, corredor1_obstaculos);   (resultado) ? cout << "GANASTE": cout << "PERDISTE";    cout<<endl<<endl; 
    resultado = carrera(corredor2_movimientos, corredor2_obstaculos);   (resultado) ? cout << "GANASTE": cout << "PERDISTE";    cout<<endl<<endl; 
    resultado = carrera(corredor3_movimientos, corredor3_obstaculos);   (resultado) ? cout << "GANASTE": cout << "PERDISTE";    cout<<endl<<endl; 
    resultado = carrera(corredor4_movimientos, corredor4_obstaculos);   (resultado) ? cout << "GANASTE": cout << "PERDISTE";    cout<<endl;

    system("pause");
    return 0;
}

// Definicion de funciones
bool carrera(vector<string> &movimientos, vector<string> &obstaculos)
{
    int aciertos = 0;
    int errores = 0;
    int sizeGeneral = movimientos.size() + obstaculos.size();

    for (size_t i = 0; i < movimientos.size(); i++)
    {
        if (movimientos[i] == "run")
        {
            aciertos++;
        }
        if (movimientos[i] == "jump")
        {
            aciertos++;
        }
    }

    for (size_t i = 0; i < obstaculos.size(); i++)
    {
        if (obstaculos[i] == "_")
        {
            aciertos++;
        }
        if (obstaculos[i] == "|")
        {
            aciertos++;
        }
    }

    // En caso de que encuentre algun error de digitacion de los comandos permitidos, no seguira
    if (aciertos != sizeGeneral)
    {
        cout << "Hay [" << sizeGeneral - aciertos << "] errores de digitacion en los vectores . . ." << endl << endl;
        return false;
    }

    if(movimientos.size() != obstaculos.size())
    { 
        cout << "El corredor tiene " << movimientos.size() << " mov. y " << obstaculos.size() << " obs. lo que hace imposible la carrera . . .     ";
        return false;
    };

    int max_size = movimientos.size();      //Puesto que los dos arreglos deben tener la misma longitud, no importa a cual se iguale

    for (size_t i=0; i<max_size; i++) {
        if(movimientos[i] == "run" && obstaculos[i] == "_") {
            cout << "_";
        }else if (movimientos[i] == "jump" && obstaculos[i] == "|") {
            cout<< "|";
        }else if (movimientos[i] == "run" && obstaculos[i] == "|") {
            cout << "/";    errores++;
        }else if (movimientos[i] == "jump" && obstaculos[i] == "_") {
            cout << "*";    errores++;
        }
    }

    cout << "     ";                        //Espacios para evitar que se junte el resultado con la carrera

    return(errores == 0) ? true : false;    //Si es cero significa que se gano la carrera
}