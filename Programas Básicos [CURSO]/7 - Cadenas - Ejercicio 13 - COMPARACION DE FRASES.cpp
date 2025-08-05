/*
	CONVERTIR DOS CADENAS DE MINUSCULAS A MAYUSCULAS. COMPARARLAS, Y DECIR SI
	SON IGUALES O NO
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	char fraseUno[100];
	char fraseDos[100];
	cout<<"DIGITE LA FRASE UNO: ";	cin.getline(fraseUno,100,'\n');
	cout<<"DIGITE LA FRASE DOS: ";	cin.getline(fraseDos,100,'\n');
	strupr(fraseUno);	//CONVERTIMOS LA FRASE UNO A MAYUSCULAS
	strupr(fraseDos);	//CONVERTIMOS LA FRASE DOS A MAYUSCULAS
	cout<<endl;
	cout<<"CADENA TRANSFORMADA 1: "<<fraseUno<<endl;
	cout<<"CADENA TRANSFORMADA 2: "<<fraseDos<<endl;
	if(strcmp(fraseUno,fraseDos)==0){
		cout<<endl;
		cout<<"LAS FRASES SON IGUALES . . ."<<endl<<endl;
	}else{
		cout<<endl;
		cout<<"LAS FRASES NO SON IGUALES . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
