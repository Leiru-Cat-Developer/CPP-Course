/*
	CONVERTIR DOS CADENAS DE MINUSCULAS A MAYUSCULAS. COMPARARLAS, Y DECIR SI
	SON IGUALES O NO
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
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
