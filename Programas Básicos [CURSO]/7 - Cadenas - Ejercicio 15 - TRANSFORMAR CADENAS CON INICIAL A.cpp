/*
	PEDIR EL NOMBRE AL USUARIO EN MAYÚSCULA, SI SU NOMBRE COMIENZA POR LA LETRA 'A',
	CONVERTIR SU NOMBRE A MINUSCULAS, CASO CONTRARIO NO CONVERTIRLO
	
	strncmp(CADENA A COMPARAR, CADENA A COMPARAR, POCISIÓN)
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	char nombre[100];
	cout<<"DIGITE SU NOMBRE EN MAYÚSCULAS: ";	cin.getline(nombre,100,'\n');
	if(strncmp(nombre,"A",1)==0){
		cout<<endl;
		cout<<"NOMBRE CONVERTIDO: "<<strlwr(nombre)<<endl;
		cout<<endl;
	}else{
		cout<<endl;
	}
	system("pause");
	return 0;
}
