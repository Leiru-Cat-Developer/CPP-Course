/*
	HACER UN PROGRAMA QUE PIDA AL USUARIO QUE DIGITE UNA CADENA DE CARACTERES, LUEGO
	VERIFICAR LA LONGITUD DE LA CADENA, Y SI �STA SUPERA 10 CARACTERES MOSTRARLA EN
	PANTALLA, CASO CONTRARIO NO MOSTRARLA
*/
#include<iostream>  //LIBRER�A EST�NDAR
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1
#include<conio.h>   //LIBRER�A PARA PAUSAS 2
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
