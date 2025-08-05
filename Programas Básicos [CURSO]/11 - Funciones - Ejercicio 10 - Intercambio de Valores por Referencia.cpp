/*
	INTERCAMBIAR EL VALOR DE 2 VARIABLES CON EL USO DE PASO DE PARÁMETROS POR REFERENCIA
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void intercambioDeValores(int&, int&);
//FUNCIÓN PRINCIPAL
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numero1 = 10, numero2 = 15;
	cout<<"EL VALOR DEL NÚMERO 1 ES: "<<numero1<<endl;
	cout<<"EL VALOR DEL NÚMERO 2 ES: "<<numero2<<endl<<endl;
	intercambioDeValores(numero1,numero2);					//FUNCIÓN DE INTERCAMBIO DE VALORES POR REFERENCIA
	cout<<"EL NUEVO VALOR DEL NÚMERO 1 ES: "<<numero1<<endl;
	cout<<"EL NUEVO VALOR DEL NÚMERO 2 ES: "<<numero2<<endl<<endl;
	system("pause");
	return 0;
}
//DEFINICIÓN DE FUNCIONES
void intercambioDeValores(int& n1, int& n2){
	int auxiliar = 0;
	//ALGORITMO DE INTERCAMBIO DE VALORES
	auxiliar = n1;
	n1 = n2;
	n2 = auxiliar;
}
