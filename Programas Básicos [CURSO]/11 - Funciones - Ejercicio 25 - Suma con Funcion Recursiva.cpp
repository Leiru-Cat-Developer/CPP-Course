/*
	REALIZE UNA FUNCIÓN RECURSIVA QUE SUME LOS PRIMEROS N ENTEROS POSITIVOS.
	NOTA: PARA PLANTEAR LA FUNCIÓN RECURSIVA TENGA EN CUENTA QUE LA SUMA PUEDE
	EXPRESARSE MEDIANTE LA SIGUIENTE RECURRENCIA:
	
	SUMA (N) = 1		  , SI N = 1
			 N+SUMA(N-1), SI N > 1
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
int suma(int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numero = 0;
	while(numero <= 0){
		cout<<"DIGITE EL NÚMERO DE ELEMENTOS: ";	cin>>numero;
		if(numero <= 0){
			cout<<endl;
			cout<<"DIGITE UN NÚMERO VALIDO . . ."<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	cout<<"LA SUMA DE LOS ELEMENTOS ES: "<<suma(numero)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
int suma(int x){
	int s = 0;
	if(x == 1){
		//CASO PARTICULAR
		s = 1;
	}else{
		//CASO GENERAL
		s = x + suma(x-1);
	}
	return s;
}
