/*
	ESCRIBA UNA FUNCIÓN "escribeNumeros(int ini,int fin)" QUE DEVUELVA EN LA SALIDA ESTÁNDAR LOS NÚMEROS
	DEL INI AL FIN. ESCRIBA UNA VERSIÓN QUE ESCRIBA LOS NÚMEROS EN ORDEN ASCENDENTE
	
	escribeNumeros(ini,fin) = ini						, si ini = fin
						 escribeNumeros(ini,fin-1)	, si fin > ini
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
int escribeNumeros(int,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int inicio = 0, final = 0;
	cout<<"DIGITE EL INICIO Y EL FINAL: ";	cin>>inicio>>final;		cout<<endl;
	for(int i=inicio; i<=final; i++){
		cout<<escribeNumeros(i,final)<<"   ";
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
int escribeNumeros(int ini, int fin){
	if(ini == fin){
		//CASO BASE
		return ini;
	}else{
		//CASO GENERAL
		return escribeNumeros(ini,fin-1);
	}
}
