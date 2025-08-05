/*
	ESCRIBA UNA FUNCI�N RECURSIVA QUE CALCULE UN N�MERO ELEVADO A UNA POTENCIA ENTERA MAYOR O IGUAL
	QUE CERO: X ^ Y
	
	POTENCIA (X,Y) = X					, Y = 1
				  X*POTENCIA(X,Y-1)		, Y > 1
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
int potencia(int,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int base = 0, exponente = 0;
	cout<<"DIGITE LA BASE Y EL EXPONENTE: ";	cin>>base>>exponente;
	cout<<"LA POTENCIA "<<base<<" ELEVADO A "<<exponente<<": "<<potencia(base,exponente)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
int potencia(int x, int y){
	int pot;
	if(y == 1){
		//CASO BASE
		pot = x;
	}else{
		//CASO GENERAL
		pot = x * potencia(x,y-1);
	}
	return pot;
}
