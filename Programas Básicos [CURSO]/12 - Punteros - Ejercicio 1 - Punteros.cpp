/*
	PUNTEROS
	
	&n = LA DIRECCI�N DE N
	*n = LA VARIABLE CUYA DIRECCI�N EST� ALMACENADA EN "n"
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numero = 20, *puntero_numero;
	puntero_numero = &numero;								//ASIGNACI�N DE POSICI�N DE MEMORIA AL PUNTERO
	cout<<"N�MERO: "<<numero<<endl;							//IMPRESI�N COM�N
	cout<<"DIRECCI�N DE MEMORIA: "<<&numero<<endl;				//DIRECCI�N DE MEMORIA EXACTO DONDE SE GUARDA LA VARIABLE
	cout<<"PUNTERO N�MERO: "<<*puntero_numero<<endl;				//IMPRESI�N COM�N CON PUNTERO
	cout<<"PUNTERO DIRECCI�N DE MEMORIA: "<<puntero_numero<<endl;	//DIRECCI�N DE MEMORIA EXACTO CON PUNTEROS
	cout<<endl;
	/*
		*PUNTERO = VALOR ASIGNADO DE LA VARIABLE
		PUNTERO  = DIRECCI�N DE MEMORIA ASIGNADA PREVIAMENTE CON "puntero = &variable"
	*/
	system("pause");
	return 0;
}
