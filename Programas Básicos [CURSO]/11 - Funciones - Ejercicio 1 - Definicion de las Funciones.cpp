/*
	DEFINICIÓN DE LAS FUNCIONES USANDO LOS PROTOTIPOS
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE LA FUNCIÓN
int encontrarMayorNumero(int numeroUno, int numeroDos);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int primero = 10, segundo = 20;
	cout<<"EL NÚMERO MAYOR ES: "<<encontrarMayorNumero(primero,segundo)<<endl<<endl;
	system("pause");
	return 0;
}
int encontrarMayorNumero(int numeroUno, int numeroDos){
	if(numeroUno>numeroDos){
		return numeroUno;	//RETORNANDO EL NÚMERO UNO A LA FUNCIÓN PRINCIPAL
	}else if(numeroDos>numeroUno){
		return numeroDos;	//RETORNANDO EL NÚMERO DOS A LA FUNCIÓN PRINCIPAL
	}
}
