/*
	ARCHIVOS BINARIOS
	
	LOS ARCHIVOS BINARIOS PUEDEN ALMACENAR CUALQUIER TIPO DE DATO [VIDEO,IMAGEN,AUDIO,TEXTO,ETC]
	EN CAMBIO EL ARCHIVO DE TEXTO SOLO PUEDE GUARDAR TEXTO
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

//ESTRUCTURAS
struct Registro{
	char nombre[50];
	char apellido[50];
};

//PROTOTIPOS DE FUNCIONES
void escribir();
void leer();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	escribir();
	leer();
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void escribir(){
	ofstream archivoBinario;
	archivoBinario.open("PRUEBA ARCHIVO BINARIO 1.dat",ios::out | ios::binary);
	if(archivoBinario.fail()){
		cout<<"NO SE PUDO CREAR EL ARCHIVO BINARIO . . ."<<endl<<endl;
		exit(1);
	}
	Registro persona;
	cout<<"DIGITE EL NOMBRE DE LA PERSONA: ";	cin.getline(persona.nombre,50,'\n');
	cout<<"DIGITE EL APELLIDO DE LA PERSONA: ";	cin.getline(persona.apellido,50,'\n');
	cout<<endl;
	//ESCRIBIMOS LOS DATOS EN EL ARCHIVO BINARIO
	archivoBinario.write((char *)&persona,sizeof(Registro));
	//CERRAR EL ARCHIVO
	archivoBinario.close();
}
void leer(){
	ifstream archivoBinario;
	archivoBinario.open("PRUEBA ARCHIVO BINARIO 1.dat",ios::in | ios::binary);
	if(archivoBinario.fail()){
		cout<<"NO SE PUDO ABRIR EL ARCHIVO . . ."<<endl<<endl;
		exit(1);
	}
	Registro persona;
	//LEYENDO
	archivoBinario.read((char *)&persona,sizeof(Registro));
	//MOSTRANDO
	cout<<"NOMBRE: "<<persona.nombre<<endl;
	cout<<"APELLIDO: "<<persona.apellido<<endl<<endl;
	//CERRANDO
	archivoBinario.close();
}
