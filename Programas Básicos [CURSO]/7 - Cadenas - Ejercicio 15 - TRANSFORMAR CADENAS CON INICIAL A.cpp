/*
	PEDIR EL NOMBRE AL USUARIO EN MAY�SCULA, SI SU NOMBRE COMIENZA POR LA LETRA 'A',
	CONVERTIR SU NOMBRE A MINUSCULAS, CASO CONTRARIO NO CONVERTIRLO
	
	strncmp(CADENA A COMPARAR, CADENA A COMPARAR, POCISI�N)
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	char nombre[100];
	cout<<"DIGITE SU NOMBRE EN MAY�SCULAS: ";	cin.getline(nombre,100,'\n');
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
