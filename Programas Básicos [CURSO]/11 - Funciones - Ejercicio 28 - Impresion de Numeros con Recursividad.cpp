/*
	ESCRIBA UNA FUNCI�N "escribeNumeros(int ini,int fin)" QUE DEVUELVA EN LA SALIDA EST�NDAR LOS N�MEROS
	DEL INI AL FIN. ESCRIBA UNA VERSI�N QUE ESCRIBA LOS N�MEROS EN ORDEN ASCENDENTE
	
	escribeNumeros(ini,fin) = ini						, si ini = fin
						 escribeNumeros(ini,fin-1)	, si fin > ini
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
int escribeNumeros(int,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int inicio = 0, final = 0;
	cout<<"DIGITE EL INICIO Y EL FINAL: ";	cin>>inicio>>final;		cout<<endl;
	for(int i=inicio; i<=final; i++){
		cout<<escribeNumeros(i,final)<<"   ";
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
int escribeNumeros(int ini, int fin){
	if(ini == fin){
		//CASO BASE
		return ini;
	}else{
		//CASO GENERAL
		return escribeNumeros(ini,fin-1);
	}
}
