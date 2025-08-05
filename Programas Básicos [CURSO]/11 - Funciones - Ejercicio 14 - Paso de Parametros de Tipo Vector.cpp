/*
	PASO DE PARAMETROS DE TIPO VECTOR
	
	TipoDeDato NombreDeFuncion (TipoDeDato NombreArreglo[], INT Tama�oDeArreglo)
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void pruebaDeVectoresCuadrados(int vector[], int);
void mostrarPruebaDeVectoresCuadrados(int vector[], int);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	const int tamanio = 5;			//VALOR DE TIPO CONSTANTE [IMPORTANTE PARA MANDARLO A LAS FUNCIONES]
	int vector[tamanio] = {1,2,3,4,5};
	pruebaDeVectoresCuadrados(vector,tamanio);
	mostrarPruebaDeVectoresCuadrados(vector,tamanio);
	cout<<endl;
	system("pause");
	return 0;
}
//DEFINICI�N DE FUNCIONES
void pruebaDeVectoresCuadrados(int vector[], int tamanio){
	for(int i=0; i<tamanio; i++){
		vector[i] = pow(vector[i],2);
	}
}
void mostrarPruebaDeVectoresCuadrados(int vector[], int tamanio){
	for(int i=0; i<tamanio; i++){
		cout<<"POCISI�N ["<<i<<"]: "<<vector[i]<<endl;
	}
}
