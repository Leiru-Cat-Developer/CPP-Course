/*
	PASO DE PARAMETROS POR REFERENCIA
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE FUNCIONES
void valoresNuevos(int&, int&);		//NO ES NECESARIO COLOCAR LOS NOMBRES DE LAS VARIABLES
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numero1 = 0, numero2 = 0;
	cout<<"DIGITE 2 N�MEROS: ";	cin>>numero1>>numero2;
	cout<<endl;
	valoresNuevos(numero1,numero2);
	cout<<"EL NUEVO VALOR DE NUMERO 1 ES: "<<numero1<<endl;
	cout<<"EL NUEVO VALOR DE NUMERO 2 ES: "<<numero2<<endl<<endl;
	system("pause");
	return 0;
}
void valoresNuevos(int& x, int& y){
	//EL SIMBOLO '&' SE LEE COMO "LA DIRECCI�N DE"
	cout<<"EL VALOR DEL PRIMER N�MERO ES: "<<x<<endl;
	cout<<"EL VALOR DEL SEGUNDO N�MERO ES: "<<y<<endl<<endl;
	x = 50;		//ASIGNAMOS NUEVO VALOR
	y = 100;		//ASIGNAMOS NUEVO VALOR
}
