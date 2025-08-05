/*
	REALIZA UNA FUNCION QUE TOME COMO PARÁMETROS UN VECTOR DE ENTEROS Y SU TAMAÑO E IMPRIMA UN
	VECTOR CON LOS ELEMENTOS IMPARES DEL VECTOR RECIBIDO
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
void traspasarNumerosImparesAlNuevoVector(int arreglo[], int);

//VARIABLES GLOBALES
int vector[100], longitud = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	traspasarNumerosImparesAlNuevoVector(vector,longitud);
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
void traspasarNumerosImparesAlNuevoVector(int arreglo[], int x){
	int arregloImpares[100];
	int j = 0;
	for(int i=0; i<x; i++){
		if(arreglo[i]%2!=0){
			arregloImpares[j] = arreglo[i];
			j++;
		}
	}
	cout<<"----- MOSTRANDO ELEMENTOS DEL VECTOR CON NÚMEROS IMPARES -----"<<endl<<endl;
	for(int i=0; i<j; i++){
		//CONDICIONAL SIMPLE PARA MOSTRAR DATOS EN PANTALLA
		if(i == (j-1)){
			cout<<arregloImpares[i];
		}else{
			cout<<arregloImpares[i]<<"  ,  ";
		}
	}
	cout<<endl<<endl;
}
