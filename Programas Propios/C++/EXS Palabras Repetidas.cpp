/*
 * Crea un programa que cuente cuantas veces se repite cada palabra
 * y que muestre el recuento final de todas ellas.
 * - Los signos de puntuacion no forman parte de la palabra.
 * - Una palabra es la misma aunque aparezca en mayusculas y minusculas.
 * - No se pueden utilizar funciones propias del lenguaje que
 *   lo resuelvan automaticamente.
*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char frase[100];
    
    string palabrasFrase[100]; 	//Almacena palabras unicas
    string palabra = "";
    
    int conteo[100];	 		//Almacena el numero de veces que aparece cada palabra
    int palabrasFraseIterador = 0;

    cout << "Digite una frase: ";	cin.getline(frase,100,'\n');//Obtiene la frase
    strupr(frase); 												//Convierte en mayusculas
    int longitudFrase = strlen(frase);							//Guarda longitud de frase

    for (int i = 0; i <= longitudFrase; i++) {
        //Detecta separadores (espacio, coma, punto, fin de frase)
        if (frase[i] == ',' || frase[i] == '.' || frase[i] == ' ' || frase[i] == '\0') {
            if (!palabra.empty()) {
                //Verificar si la palabra ya existe en el arreglo
                bool existe = false;
                int indiceExistente = -1;

                for (int j = 0; j < palabrasFraseIterador; j++) {
                    if (palabrasFrase[j] == palabra) {
                        existe = true;
                        indiceExistente = j;
                        break;
                    }
                }

                if (existe) {
                	//Incrementar contador si ya existe
                    conteo[indiceExistente]++;
                } else {
                	//Agregar palabra si no existe
                    palabrasFrase[palabrasFraseIterador] = palabra;
                    conteo[palabrasFraseIterador] = 1;
                    palabrasFraseIterador++;
                }

                palabra = ""; //Reiniciar palabra
            }
        } else {
            palabra += frase[i]; //Construccion de la palabra
        }
    }

    //Mostrar palabras unicas y su conteo
    cout << "\nFrecuencia de palabras:\n\n";
    for (int i = 0; i < palabrasFraseIterador; i++) {
        cout << palabrasFrase[i] << ": " << conteo[i] << " veces" << endl;
    }

	cout<<endl;
	system("pause");
    return 0;
}

