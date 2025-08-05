/*
	REALIZA UNA FUNCI�N QUE TOME COMO PAR�METROS UN VECTOR DE N�MEROS Y SU TAMA�O Y CAMBIE
	EL SIGNO DE LOS ELEMENTOS DEL VECTOR
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void cambiarSignoDeVector(int arreglo[], int);
void mostrarVector(int arreglo[], int);

//VARIABLES GLOBALES
int vector[100], longitud = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	cambiarSignoDeVector(vector,longitud);
	mostrarVector(vector,longitud);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL TAMA�O DEL VECTOR: ";		cin>>longitud;
	cout<<endl;
	for(int i=0; i<longitud; i++){
		cout<<"DIGITE LA POCISI�N ["<<i<<"]: ";	cin>>vector[i];
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
