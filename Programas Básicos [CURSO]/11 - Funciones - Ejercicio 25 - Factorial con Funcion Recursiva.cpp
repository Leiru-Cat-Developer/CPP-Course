/*
	FACTORIAL DE UN N�MERO CON RECURSIVIDAD DE FUNCIONES
	
	FACTORIAL(N) = 1			  , si n = 0	-> CASO BASE
				n*FACTORIAL(n-1) , si n > 0	-> CASO GENERAL
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

int factorial(int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numero = 3;
	cout<<"EL FACTORIAL DE "<<numero<<" ES: "<<factorial(numero)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
int factorial(int x){
	if(x == 0){
		//CASO BASE
		x = 1;
	}else{
		//CASO GENERAL
		x = x * factorial(x-1);
	}
	return x;
}
