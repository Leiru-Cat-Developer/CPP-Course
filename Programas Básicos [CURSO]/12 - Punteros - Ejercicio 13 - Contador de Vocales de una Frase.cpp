/*
	PEDIR UNA CADENA DE CARACTERES (STRING) AL USUARIO, E INDICAR CUANTAS VECES APARECEN
	LAS VOACLES EN LA CADENA DE CARACTERES, USANDO PUNTEROS CLARAMENTE
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
int contadorDeVocales(char *);

//VARIABLES GLOBALES
char frase[100];

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	cout<<"EL NÚMERO DE VOCALES DE LA FRASE ES: "<<contadorDeVocales(frase)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE LA FRASE: ";	cin.getline(frase,100,'\n');	cout<<endl;
	strupr(frase);				//CONVIRTIENDO LA FRASE A MAYÚSCULAS
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
