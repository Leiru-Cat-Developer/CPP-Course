/*
	POCISIONAMIENTO PARA ESCRITURA
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
#include<fstream>		//LIBRERÍA PARA ARCHIVOS DE TEXTO
using namespace std;

//PROTOTIPOS DE FUNCIONES
void escribir();
void leer();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	escribir();
	leer();
	return 0;
}

//DEFINICIONES DE FUNCIONES
void escribir(){
	ofstream archivo;
	archivo.open("pocision.txt",ios::out);
	if(archivo.fail()){
		cout<<"NO SE PUDO CREAR EL ARCHIVO . . ."<<endl<<endl;
		exit(1);
	}
	//MUESTRA LA POCISION ACTUAL EN DONDE EMPIEZA EL ARCHIVO [CURSOR]
	cout<<"POCISION ACTUAL DEL ARCHIVO: "<<archivo.tellp()<<endl<<endl;
	//POCISIONA EL CURSOR EN LA POCISION QUE TU QUIERES PARA COMENZAR A ESCRIBIR DESDE AHI
	//archivo.seekp(6);
	archivo<<"HOLA, COMO ESTAS";
	//MUESTRA LA POCISION EN DONDE TERMINA EL ARCHIVO [CURSOR]
	cout<<"POCISION ACTUAL DEL ARCHIVO: "<<archivo.tellp()<<endl<<endl;
	archivo.close();
}
void leer(){
	ifstream archivo;
	archivo.open("pocision.txt",ios::in);
	if(archivo.fail()){
		cout<<"NO SE PUDO LEER EL ARCHIVO . . ."<<endl<<endl;
		exit(1);
	}
	string linea;
	archivo.seekg(5);			//COMIENZA LA LECTURA DESDE LA POCISION NUMERO 5 DEL ARCHIVO
	cout<<endl<<"POCISION ACTUAL DEL ARCHIVO: "<<archivo.tellg()<<endl<<endl;
	getline(archivo,linea);
	cout<<linea<<endl;
	archivo.close();
}
