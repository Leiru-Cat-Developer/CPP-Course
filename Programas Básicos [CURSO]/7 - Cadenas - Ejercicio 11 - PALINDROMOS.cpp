/*
	HACER UN PROGRAMA QUE DETERMINE SI UNA PALABRA ES POL�NDROMA
	
	EJEMPLOS DE POLINDROMOS:
	reconocer = reconocer
	oso = oso
	anitalabalatina = anitalabalatina
	rar = rar
	mamam = mamam
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	char palabra[100], palabraVolteada[100];
	cout<<"DIGITE LA PALABRA: ";	cin.getline(palabra,100,'\n');	//PEDIMOS LA PALABRA
	cout<<endl;
	strcpy(palabraVolteada,palabra);	//PASAMOS NUESTRA PALABRA A UNA NUEVA CADENA
	if(strcmp(strrev(palabraVolteada),palabra)==0){	//COMPARAMOS LA NUEVA CADENA CON LA PALABRA
		cout<<"LA PALABRA ES UN PAL�NDROMO . . ."<<endl<<endl;
	}else{
		cout<<"LA PALABRA NO ES UN PAL�NDROMO . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
