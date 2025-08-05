/*
	HACER UN PROGRAMA QUE DETERMINE SI UNA PALABRA ES POLÍNDROMA
	
	EJEMPLOS DE POLINDROMOS:
	reconocer = reconocer
	oso = oso
	anitalabalatina = anitalabalatina
	rar = rar
	mamam = mamam
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	char palabra[100], palabraVolteada[100];
	cout<<"DIGITE LA PALABRA: ";	cin.getline(palabra,100,'\n');	//PEDIMOS LA PALABRA
	cout<<endl;
	strcpy(palabraVolteada,palabra);	//PASAMOS NUESTRA PALABRA A UNA NUEVA CADENA
	if(strcmp(strrev(palabraVolteada),palabra)==0){	//COMPARAMOS LA NUEVA CADENA CON LA PALABRA
		cout<<"LA PALABRA ES UN PALÍNDROMO . . ."<<endl<<endl;
	}else{
		cout<<"LA PALABRA NO ES UN PALÍNDROMO . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
