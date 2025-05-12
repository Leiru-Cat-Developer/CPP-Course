/*
 * Crea una función que reciba dos cadenas como parámetro (str1, str2)
 * e imprima otras dos cadenas como salida (out1, out2).
 * - out1 contendrá todos los caracteres presentes en la str1 pero NO
 *   estén presentes en str2.
 * - out2 contendrá todos los caracteres presentes en la str2 pero NO
 *   estén presentes en str1.
*/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//Prototipo de funciones
void suffle(string,string);

int main() {
    char palabra1[100], palabra2[100];

    cout<<endl;
    cout<<"Digite la palabra 1:";   cin.getline(palabra1,100,'\n');     fflush(stdin);  //Limpiando buffer
    cout<<"Digite la palabra 2:";   cin.getline(palabra2,100,'\n');     fflush(stdin);  //Limpiando buffer

    suffle(palabra1,palabra2);

    system("pause");
    return 0;
}

//Definicion de funciones
void suffle(string p1, string p2) {
    char palabraCopia1[100], palabraCopia2[100];
    string o1, o2;
    char outCopia1[100], outCopia2[100];
    int repeticiones = 0;

    strcpy(palabraCopia1,p1.c_str());
    strcpy(palabraCopia2,p2.c_str());
    strupr(palabraCopia1);
    strupr(palabraCopia2);

    //hola mundo
    //mundo feliz

    for (int i=0; i<=strlen(palabraCopia1); i++) {
        //Primero entra al ciclo de la palabra 1
        for(int j=0; j<=strlen(palabraCopia2); j++) {
            //Despues entra al ciclo de la palabra 2
            if (palabraCopia1[i] == palabraCopia2[j]) {
                repeticiones++;
            }
        }
        if (repeticiones == 0) {
            strcpy(outCopia1,o1.c_str());
            for (int h=0; h<=o1.length(); h++) {
                if (outCopia1[h] == palabraCopia1[i]) {
                    repeticiones++;
                }
            }
            if (repeticiones == 0) {
                o1 += palabraCopia1[i];
            }else {
                repeticiones = 0;
            }
        }else {
            repeticiones = 0;
        }
    }

    for (int i=0; i<=strlen(palabraCopia2); i++) {
        //Primero entra al ciclo de la palabra 2
        for(int j=0; j<=strlen(palabraCopia1); j++) {
            //Despues entra al ciclo de la palabra 1
            if (palabraCopia2[i] == palabraCopia1[j]) {
                repeticiones++;
            }
        }
        if (repeticiones == 0) {
            strcpy(outCopia2,o2.c_str());
            for (int h=0; h<=o2.length(); h++) {
                if (outCopia2[h] == palabraCopia2[i]) {
                    repeticiones++;
                }
            }
            if (repeticiones == 0) {
                o2 += palabraCopia2[i];
            }else {
                repeticiones = 0;
            }
        }else {
            repeticiones = 0;
        }
    }

    cout<<"Caracteres presentes en la STR1 pero no en STR2: "<<o1<<endl;
    cout<<"Caracteres presentes en la STR2 pero no en STR1: "<<o2<<endl;
}