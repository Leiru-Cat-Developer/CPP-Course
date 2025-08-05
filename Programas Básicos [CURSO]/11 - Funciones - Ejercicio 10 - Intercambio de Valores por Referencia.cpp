/*
	INTERCAMBIAR EL VALOR DE 2 VARIABLES CON EL USO DE PASO DE PAR�METROS POR REFERENCIA
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void intercambioDeValores(int&, int&);
//FUNCI�N PRINCIPAL
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numero1 = 10, numero2 = 15;
	cout<<"EL VALOR DEL N�MERO 1 ES: "<<numero1<<endl;
	cout<<"EL VALOR DEL N�MERO 2 ES: "<<numero2<<endl<<endl;
	intercambioDeValores(numero1,numero2);					//FUNCI�N DE INTERCAMBIO DE VALORES POR REFERENCIA
	cout<<"EL NUEVO VALOR DEL N�MERO 1 ES: "<<numero1<<endl;
	cout<<"EL NUEVO VALOR DEL N�MERO 2 ES: "<<numero2<<endl<<endl;
	system("pause");
	return 0;
}
//DEFINICI�N DE FUNCIONES
void intercambioDeValores(int& n1, int& n2){
	int auxiliar = 0;
	//ALGORITMO DE INTERCAMBIO DE VALORES
	auxiliar = n1;
	n1 = n2;
	n2 = auxiliar;
}
