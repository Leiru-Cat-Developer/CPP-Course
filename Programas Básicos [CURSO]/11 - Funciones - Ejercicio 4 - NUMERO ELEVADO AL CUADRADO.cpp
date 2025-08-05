/*
	ESCRIBA UNA FUNCIÓN LLAMADA "al_cuadrado()" QUE CALCULE EL CUADRADO DEL VALOR QUE SE LE TRANSMITE Y
	DESPLIEGUE EL RESULTADO. LA FUNCIÓN DEBERÁ SER CAPAZ DE ELEVAR AL CUADRADO NÚMEROS FLOTANTES
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE LA FUNCIÓN
void al_cuadrado(float n);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	float numero = 10;
	al_cuadrado(numero);
	system("pause");
	return 0;
}
void al_cuadrado(float n){
	cout<<"EL NÚMERO '"<<n<<"' ELEVADO AL CUADRADO ES: "<<pow(n,2)<<endl<<endl;
}
