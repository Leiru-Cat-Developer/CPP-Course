/*
	REALIZA UNA FUNCION QUE TOME COMO PAR�METROS UN VECTOR DE ENTEROS Y SU TAMA�O E IMPRIMA UN
	VECTOR CON LOS ELEMENTOS IMPARES DEL VECTOR RECIBIDO
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
void traspasarNumerosImparesAlNuevoVector(int arreglo[], int);

//VARIABLES GLOBALES
int vector[100], longitud = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	traspasarNumerosImparesAlNuevoVector(vector,longitud);
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
void traspasarNumerosImparesAlNuevoVector(int arreglo[], int x){
	int arregloImpares[100];
	int j = 0;
	for(int i=0; i<x; i++){
		if(arreglo[i]%2!=0){
			arregloImpares[j] = arreglo[i];
			j++;
		}
	}
	cout<<"----- MOSTRANDO ELEMENTOS DEL VECTOR CON N�MEROS IMPARES -----"<<endl<<endl;
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
