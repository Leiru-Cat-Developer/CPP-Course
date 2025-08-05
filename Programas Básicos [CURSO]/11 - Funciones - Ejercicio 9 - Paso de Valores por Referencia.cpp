/*
	PASO DE PARAMETROS POR REFERENCIA
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE FUNCIONES
void valoresNuevos(int&, int&);		//NO ES NECESARIO COLOCAR LOS NOMBRES DE LAS VARIABLES
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numero1 = 0, numero2 = 0;
	cout<<"DIGITE 2 NÚMEROS: ";	cin>>numero1>>numero2;
	cout<<endl;
	valoresNuevos(numero1,numero2);
	cout<<"EL NUEVO VALOR DE NUMERO 1 ES: "<<numero1<<endl;
	cout<<"EL NUEVO VALOR DE NUMERO 2 ES: "<<numero2<<endl<<endl;
	system("pause");
	return 0;
}
void valoresNuevos(int& x, int& y){
	//EL SIMBOLO '&' SE LEE COMO "LA DIRECCIÓN DE"
	cout<<"EL VALOR DEL PRIMER NÚMERO ES: "<<x<<endl;
	cout<<"EL VALOR DEL SEGUNDO NÚMERO ES: "<<y<<endl<<endl;
	x = 50;		//ASIGNAMOS NUEVO VALOR
	y = 100;		//ASIGNAMOS NUEVO VALOR
}
