/*
	COMPROBAR SI UN NÚMERO ES PAR O IMPAR, Y SEÑALAR LA POSICIÓN DE MEMORIA DONDE
	SE ESTÁ GUARDANDO EL NÚMERO. CON PUNTEROS
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numero, *puntero_numero;
	cout<<"DIGITE UN NÚMERO: ";	cin>>numero;
	puntero_numero = &numero;				//GUARDANDO LA POCISIÓN DE MEMORIA
	cout<<endl;
	if(*puntero_numero%2 == 0){
		cout<<"EL NÚMERO ES PAR . . ."<<endl;
	}else{
		cout<<"EL NÚMERO ES IMPAR . . ."<<endl;
	}
	cout<<"LA POCISIÓN DE MEMORIA DEL NÚMERO "<<*puntero_numero<<" ES: "<<puntero_numero<<endl<<endl;
	system("pause");
	return 0;
}
