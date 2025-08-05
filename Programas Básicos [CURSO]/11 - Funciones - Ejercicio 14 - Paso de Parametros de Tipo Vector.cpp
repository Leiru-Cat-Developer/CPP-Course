/*
	PASO DE PARAMETROS DE TIPO VECTOR
	
	TipoDeDato NombreDeFuncion (TipoDeDato NombreArreglo[], INT TamañoDeArreglo)
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void pruebaDeVectoresCuadrados(int vector[], int);
void mostrarPruebaDeVectoresCuadrados(int vector[], int);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	const int tamanio = 5;			//VALOR DE TIPO CONSTANTE [IMPORTANTE PARA MANDARLO A LAS FUNCIONES]
	int vector[tamanio] = {1,2,3,4,5};
	pruebaDeVectoresCuadrados(vector,tamanio);
	mostrarPruebaDeVectoresCuadrados(vector,tamanio);
	cout<<endl;
	system("pause");
	return 0;
}
//DEFINICIÓN DE FUNCIONES
void pruebaDeVectoresCuadrados(int vector[], int tamanio){
	for(int i=0; i<tamanio; i++){
		vector[i] = pow(vector[i],2);
	}
}
void mostrarPruebaDeVectoresCuadrados(int vector[], int tamanio){
	for(int i=0; i<tamanio; i++){
		cout<<"POCISIÓN ["<<i<<"]: "<<vector[i]<<endl;
	}
}
