/*
	DETERMINAR SI UN NÚMERO ES PRIMO O NO, CON PUNTEROS. Y ADEMÁS INDICAR EN QUE
	POCISIÓN DE MEMORIA SE GUARDO EL NÚMERO
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
	int numero, *puntero_numero,contador = 0;
	cout<<"DIGITE EL NÚMERO: ";	cin>>numero;
	puntero_numero = &numero;
	cout<<endl;
	for(int i=1; i<*puntero_numero; i++){
		if(*puntero_numero%i == 0){
			contador++;
		}
	}
	if(contador > 2){
		//NO ES PRIMO
		cout<<"EL NÚMERO NO ES PRIMO . . ."<<endl;
	}else{
		//ES PRIMO
		cout<<"EL NÚMERO ES PRIMO . . ."<<endl;
	}
	cout<<"LA DIRECCIÓN DEL NÚMERO "<<*puntero_numero<<" ES: "<<puntero_numero<<endl<<endl;
	system("pause");
	return 0;
}

