/*
	HACER UN PROGRAMA QUE PIDA AL USUARIO QUE DIGITE UNA CADENA DE CARACTERES, LUEGO
	VERIFICAR LA LONGITUD DE LA CADENA, Y SI ÉSTA SUPERA 10 CARACTERES MOSTRARLA EN
	PANTALLA, CASO CONTRARIO NO MOSTRARLA
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	char palabra[100];
	cout<<"DIGITE UNA CADENA DE CARACTERES: ";	cin.getline(palabra,100,'\n');
	if(strlen(palabra)>10){
		cout<<endl;
		cout<<"LA PALABRA ES: "<<palabra<<endl<<endl;
	}else if(strlen(palabra)<=10){
		cout<<endl;
		cout<<"FIN . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
