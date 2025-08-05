/*
	REALICE UNA FUNCIÓN QUE TOME COMO PARÁMETROS UN VECTOR Y SU TAMAÑO Y DIGA SI EL VECTOR ESTÁ
	ORDENADO CRECIENTEMENTE.
	SUGERENCIA: "COMPRUEBE QUE TODAS LAS POCISIONES DEL VECTOR, SALVO PARA LA 0, EL ELEMENTO DEL
			   DEL VECTOR ES MAYOR O IGUAL QUE EL ELEMENTO QUE LE PRECEDE EN EL VECTOR"
			   
	ESTE PROGRAMA FALLA POR ALGUNA RAZON 
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
void verificarOrdenamiento(int arreglo[], int);

//VARIABLES GLOBALES
int vector[100], longitud = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	cout<<endl;
	verificarOrdenamiento(vector,longitud);
	cout<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL TAMAÑO DEL VECTOR: ";	cin>>longitud;
	cout<<endl;
	for(int i=0; i<longitud; i++){
		cout<<"DIGITE EL NÚMERO ["<<i<<"]: ";	cin>>vector[i];
	}
}
void verificarOrdenamiento(int arreglo[], int x){
	bool bandera = false;
	int i = 0;
	for(int j=0; j<x; j++){
		cout<<arreglo[j]<<"   ";
	}
	cout<<endl<<endl;
	while((bandera == false)&&(i < x-1)){
		if(arreglo[i]>arreglo[i+1]){
			bandera == true;							//CUANDO EL ARREGLO NO ESTÁ ORDENADO
		}
		i++;
	}
	if(bandera){
		cout<<"EL ARREGLO NO ESTÁ ORDENADO  . . .";
	}else if(bandera == false){
		cout<<"EL ARREGLO ESTÁ ORDENADO CRECIENTEMENTE . . .";
	}
} 
