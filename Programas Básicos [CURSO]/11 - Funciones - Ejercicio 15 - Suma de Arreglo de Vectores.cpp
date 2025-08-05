/*
	REALIZE UNA FUNCIÓN QUE TOME PARÁMETROS EN UN VECTOR DE NÚMEROS ENTEROS Y DEVUELVA
	LA SUMA DE SUS ELEMENTOS
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
int sumaDeElementos(int arreglo[],int);

//VARIABLES GLOBALES
int vector[100], longitud = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	cout<<endl;
	cout<<"EL RESULTADO DE LA SUMA ES: "<<sumaDeElementos(vector,longitud)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL NÚMERO DE ELEMENTOS DEL VECTOR: ";	cin>>longitud;
	cout<<endl;
	for(int i=0; i<longitud; i++){
		cout<<"DIGITA EL NÚMERO ["<<i<<"]: ";	cin>>vector[i];
	}
}
int sumaDeElementos(int arreglo[], int x){
	int suma = 0;
	for(int i = 0; i<x; i++){
		suma += arreglo[i];
	}
	return suma;
}
