/*
	CORRESPONTENCIAS ENTRE ARREGLOS Y PUNTEROS
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
	int numeros[] = {1,2,3,4,5};
	int *puntero_numeros;
	puntero_numeros = numeros;		//DIRECCI�N DEL PRIMER ELEMENTO
	for(int i=0; i<5; i++){
		cout<<"POCISI�N DE MEMORIA "<<numeros[i]<<" ES: "<<puntero_numeros++<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
