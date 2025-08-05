/*
	REALIZA UNA FUNCIÓN QUE TOME COMO PARÁMETROS UN VECTOR DE NÚMEROS Y SU TAMAÑO Y CAMBIE
	EL SIGNO DE LOS ELEMENTOS DEL VECTOR
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
void cambiarSignoDeVector(int arreglo[], int);
void mostrarVector(int arreglo[], int);

//VARIABLES GLOBALES
int vector[100], longitud = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	cambiarSignoDeVector(vector,longitud);
	mostrarVector(vector,longitud);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL TAMAÑO DEL VECTOR: ";		cin>>longitud;
	cout<<endl;
	for(int i=0; i<longitud; i++){
		cout<<"DIGITE LA POCISIÓN ["<<i<<"]: ";	cin>>vector[i];
	}
	cout<<endl;
}
void cambiarSignoDeVector(int arreglo[], int x){
	for(int i=0; i<x; i++){
		arreglo[i] *= -1;
	}
}
void mostrarVector(int arreglo[], int x){
	cout<<"----- MOSTRANDO ELEMENTOS DEL VECTOR CON LOS SIGNOS CAMBIADOS -----"<<endl<<endl;
	for(int i=0; i<x; i++){
		//CONDICIONAL SIMPLE PARA MOSTRAR DATOS EN PANTALLA
		if(i == (x-1)){
			cout<<arreglo[i];
		}else{
			cout<<arreglo[i]<<"  ,  ";
		}
	}
	cout<<endl<<endl;
}
