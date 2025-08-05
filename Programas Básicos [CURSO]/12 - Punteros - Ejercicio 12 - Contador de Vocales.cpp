/*
	PEDIR SU NOMBRE AL USUARIO Y DEVOLVER EL N�MERO DE VOCALES QUE HAY
	RECUERDA QUE DEBES UTILIZAR PUNTEROS
	
	URIEL
	
	a = 0
	e = 1
	i = 1
	o = 0
	u = 1
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
char nombreUsuario[50];

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	cout<<"EL N�MERO DE VOCALES DEL NOMBRE ES: "<<contadorDeVocales(nombreUsuario)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE SU NOMBRE: ";	cin.getline(nombreUsuario,30,'\n');	cout<<endl;
	strupr(nombreUsuario);		//CONVERTIR A MAY�SCULAS EL NOMBRE
	
}
int contadorDeVocales(char *nombre){
	int contadorTotal = 0, contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;
	while(*nombre){	//MIENTRAS NOMBRE NO SEA NULO '\0'
		switch(*nombre){
			case 'A': contadorA++;	contadorTotal++;	break;
			case 'E': contadorE++;	contadorTotal++;	break;
			case 'I': contadorI++;	contadorTotal++;	break;
			case 'O': contadorO++;	contadorTotal++;	break;
			case 'U': contadorU++;	contadorTotal++;	break;
		}
		nombre++;
	}
	cout<<"LETRAS A: "<<contadorA<<endl;
	cout<<"LETRAS E: "<<contadorE<<endl;
	cout<<"LETRAS I: "<<contadorI<<endl;
	cout<<"LETRAS O: "<<contadorO<<endl;
	cout<<"LETRAS U: "<<contadorU<<endl<<endl;
	return contadorTotal;
}
