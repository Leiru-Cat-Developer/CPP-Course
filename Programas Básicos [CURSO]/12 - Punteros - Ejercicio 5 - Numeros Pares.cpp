/*
	RELLENAR UN ARREGLO DE 10 N�MEROS, POSTERIORMENTE UTILIZANDO PUNTEROS INDICAR
	CUALES SON N�MEROS PARES Y SU POCISI�N EN MEMORIA
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
	int numeros[10], *puntero_numeros;
	for(int i=0; i<10; i++){
		cout<<"DIGITE EL N�MERO ["<<i<<"]: ";	cin>>numeros[i];
	}
	cout<<endl;
	puntero_numeros = numeros;	//POSICI�N DE MEMORIA DEL VECTOR
	for(int i=0; i<10; i++){
		if(*puntero_numeros%2 == 0){
			cout<<"EL N�MERO "<<*puntero_numeros<<" ES PAR Y LA POCISI�N ES: "<<puntero_numeros<<endl;
		}
		puntero_numeros++;
	}
	cout<<endl;
	system("pause");
	return 0;
}
