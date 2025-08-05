/*
	HACER UN PROGRAMA EN C++ PARA GUARDAR NÚMEROS TELEFONICOS QUE MUESTRE UN MENU CON
	LAS SIGUIENTES OPCIONES:
	
		1. CREAR (NOMBRE, APELLIDOS, TELÉFONO)
		2. AGREGAR MÁS CONTACTOS (NOMBRE, APELLIDOS, TELÉFONO)
		3. VISUALIZAR CONTACTOS EXISTENTES
		4. SALIR
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
struct Datos{
	string nombre;
	string apellido;
	string telefono;
}datos;

//PROTOTIPOS DE FUNCIONES
void menu();
void crear();
void agregar();
void visualizar();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	menu();
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void menu(){
	int opcion = 0;
	while(opcion != 4){
		cout<<"---------- AGENDA TELEFONICA ---------"<<endl<<endl;
		cout<<"1. CREAR [SE REEMPLAZARA EL EXISTENTE]"<<endl;
		cout<<"2. AGREGAR MÁS CONTACTOS"<<endl;
		cout<<"3. VISUALIZAR CONTACTOS EXISTENTES"<<endl;
		cout<<"4. SALIR"<<endl<<endl;
		cout<<"OPCIÓN: ";	cin>>opcion;	cout<<endl;
		switch(opcion){
			case 1:	crear();
				break;
			case 2:	agregar();
				break;
			case 3:	visualizar();
				break;
			case 4:	cout<<"SALIENDO . . ."<<endl<<endl;
					system("pause");
				break;
			default:	cout<<"OPCIÓN INCORRECTA, INTENTE DE NUEVO . . ."<<endl<<endl;
					system("pause");
					system("cls");
				break;
		}
	}
}
void crear(){
	char respuesta = 'S';
	ofstream archivo;
	archivo.open("AGENDA TELEFONICA.txt",ios::out);	//ABRIMOS EL ARCHIVO EN MODO ESCRITURA
	if(archivo.fail()){
		cout<<"NO SE PUDO CREAR EL ARCHIVO . . .";
		exit(1);
	}
	archivo<<"\t"<<"\t"<<"AGENDA TELEFONICA"<<endl<<endl;
	while((respuesta == 'S')||(respuesta == 's')){
		fflush(stdin);
		cout<<"DIGITE EL NOMBRE: ";			getline(cin,datos.nombre);
		cout<<"DIGITE EL APELLIDO: ";			getline(cin,datos.apellido);
		cout<<"DIGITE EL TELEFONO: ";			getline(cin,datos.telefono);
		archivo<<"NOMBRE: "<<datos.nombre<<endl;
		archivo<<"APELLIDO: "<<datos.apellido<<endl;
		archivo<<"TELEFONO: "<<datos.telefono<<endl<<endl;
		cout<<endl<<"¿DESEA AGREGAR OTRO CONTACTO? [S/N]: ";	cin>>respuesta;	cout<<endl;
	}
	archivo.close();
	system("pause");
	system("cls");
}
void agregar(){
	char respuesta = 'S';
	ofstream archivo;
	archivo.open("AGENDA TELEFONICA.txt",ios::app);	//ABRIMOS EL ARCHIVO EN MODO AÑADIR
	if(archivo.fail()){
		cout<<"EL ARCHIVO NO EXISTE . . ."<<endl<<endl;
		exit(1);
	}
	while((respuesta == 'S')||(respuesta == 's')){
		fflush(stdin);
		cout<<"DIGITE EL NOMBRE: ";			getline(cin,datos.nombre);
		cout<<"DIGITE EL APELLIDO: ";			getline(cin,datos.apellido);
		cout<<"DIGITE EL TELEFONO: ";			getline(cin,datos.telefono);
		archivo<<"NOMBRE: "<<datos.nombre<<endl;
		archivo<<"APELLIDO: "<<datos.apellido<<endl;
		archivo<<"TELEFONO: "<<datos.telefono<<endl<<endl;
		cout<<endl<<"¿DESEA AGREGAR OTRO CONTACTO? [S/N]: ";	cin>>respuesta;	cout<<endl;
	}
	archivo.close();
	system("pause");
	system("cls");
}
void visualizar(){
	ifstream archivo;
	string texto;
	archivo.open("AGENDA TELEFONICA.txt",ios::in);	//ABRIMOS EL ARCHIVO EN MODO LECTURA
	if(archivo.fail()){
		cout<<"EL ARCHIVO NO EXISTE . . ."<<endl<<endl;
		exit(1);
	}
	while(!archivo.eof()){
		//MIENTRAS NO SEA EL FINAL DEL ARCHIVO
		cout<<endl;
		getline(archivo,texto);
		cout<<texto;
	}
	archivo.close();
	system("pause");
	system("cls");
}
