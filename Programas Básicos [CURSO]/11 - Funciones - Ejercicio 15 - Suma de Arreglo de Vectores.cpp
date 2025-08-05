/*
	REALIZE UNA FUNCI�N QUE TOME PAR�METROS EN UN VECTOR DE N�MEROS ENTEROS Y DEVUELVA
	LA SUMA DE SUS ELEMENTOS
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
int sumaDeElementos(int arreglo[],int);

//VARIABLES GLOBALES
int vector[100], longitud = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	cout<<endl;
	cout<<"EL RESULTADO DE LA SUMA ES: "<<sumaDeElementos(vector,longitud)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL N�MERO DE ELEMENTOS DEL VECTOR: ";	cin>>longitud;
	cout<<endl;
	for(int i=0; i<longitud; i++){
		cout<<"DIGITA EL N�MERO ["<<i<<"]: ";	cin>>vector[i];
	}
}
int sumaDeElementos(int arreglo[], int x){
	int suma = 0;
	for(int i = 0; i<x; i++){
		suma += arreglo[i];
	}
	return suma;
}
