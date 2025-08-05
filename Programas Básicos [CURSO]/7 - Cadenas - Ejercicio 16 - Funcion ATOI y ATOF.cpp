/*
	FUNCIONES atoi() y atof() -> TRASNFORMAR UNA CADENA A NÚMEROS
	atoi() -> NÚMEROS ENTEROS
	aoif() -> NÚMEROS FLOTANTES
	FUNCIONA CON LA LIBRERÍA #include<stdlib.h>
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	char cadenaNumerosEnteros[] = "12345";
	char cadenaNumerosFlotantes[] = "123.123";
	int numeroEntero = atoi(cadenaNumerosEnteros);		//CONVERTIMOS CADENA A INT
	float numeroFlotante = atof(cadenaNumerosFlotantes);	//CONVERTIMOS CADENA A FLOAT
	cout<<"NÚMERO ENTERO: "<<numeroEntero<<endl;
	cout<<"NÚMERO FLOTANTE: "<<numeroFlotante<<endl<<endl;
	system("pause");
	return 0;
}
