/*
	PEDIR UNA CADENA DE CARACTERES (STRING) AL USUARIO, E INDICAR CUANTAS VECES APARECEN
	LAS VOACLES EN LA CADENA DE CARACTERES, USANDO PUNTEROS CLARAMENTE
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
int contadorDeVocales(char *);

//VARIABLES GLOBALES
char frase[100];

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	cout<<"EL N�MERO DE VOCALES DE LA FRASE ES: "<<contadorDeVocales(frase)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE LA FRASE: ";	cin.getline(frase,100,'\n');	cout<<endl;
	strupr(frase);				//CONVIRTIENDO LA FRASE A MAY�SCULAS
}
int contadorDeVocales(char *palabra){
	int contadorTotal = 0, contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;
	while(*palabra){	//MIENTRAS NOMBRE NO SEA NULO '\0'
		switch(*palabra){
			case 'A': contadorA++;	contadorTotal++;	break;
			case 'E': contadorE++;	contadorTotal++;	break;
			case 'I': contadorI++;	contadorTotal++;	break;
			case 'O': contadorO++;	contadorTotal++;	break;
			case 'U': contadorU++;	contadorTotal++;	break;
		}
		palabra++;
	}
	cout<<"LETRAS A: "<<contadorA<<endl;
	cout<<"LETRAS E: "<<contadorE<<endl;
	cout<<"LETRAS I: "<<contadorI<<endl;
	cout<<"LETRAS O: "<<contadorO<<endl;
	cout<<"LETRAS U: "<<contadorU<<endl<<endl;
	return contadorTotal;
}
