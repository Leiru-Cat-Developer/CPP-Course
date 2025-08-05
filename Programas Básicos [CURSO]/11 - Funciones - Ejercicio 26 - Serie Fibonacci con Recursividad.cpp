/*
	REALICE UNA FUNCIÓN RECURSIVA PARA LA SERIE FIBONACCI
	NOTA: LA SERIE FIBONACCI ESTÁ FORMADA POR LA SECUENCIA DE NÚMEROS:
	
	0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
	
	fibonacci(n) = n						, si n < 2
				fibonacci(n-1)+fibonacci(n-2) , si n >= 2
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
int fibonacci(int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int elementos = 0;
	while(elementos <= 0){
		cout<<"DIGITE EL NÚMERO DE ELEMENTOS: ";	cin>>elementos;
		if(elementos <= 0){
			cout<<endl;
			cout<<"DIGITE DATOS VALIDOS . . .";
			cout<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	for(int i=0; i<elementos; i++){
		if(i == elementos-1){
			cout<<fibonacci(i)<<endl<<endl;	//SIN COMAS
		}else{
			cout<<fibonacci(i)<<"  ,  ";		//CON COMAS
		}
	}
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
int fibonacci(int x){
	if(x < 2){
		return x;
	}else{
		return fibonacci(x-1)+fibonacci(x-2);
	}
}
