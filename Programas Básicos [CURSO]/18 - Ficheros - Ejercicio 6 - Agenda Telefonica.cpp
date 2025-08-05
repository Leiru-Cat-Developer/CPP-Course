/*
	HACER UN PROGRAMA EN C++ PARA GUARDAR N�MEROS TELEFONICOS QUE MUESTRE UN MENU CON
	LAS SIGUIENTES OPCIONES:
	
		1. CREAR (NOMBRE, APELLIDOS, TEL�FONO)
		2. AGREGAR M�S CONTACTOS (NOMBRE, APELLIDOS, TEL�FONO)
		3. VISUALIZAR CONTACTOS EXISTENTES
		4. SALIR
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
#include<fstream>		//LIBRER�A PARA ARCHIVOS DE TEXTO
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
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	menu();
	return 0;
}

//DEFINICI�N DE FUNCIONES
void menu(){
	int opcion = 0;
	while(opcion != 4){
		cout<<"---------- AGENDA TELEFONICA ---------"<<endl<<endl;
		cout<<"1. CREAR [SE REEMPLAZARA EL EXISTENTE]"<<endl;
		cout<<"2. AGREGAR M�S CONTACTOS"<<endl;
		cout<<"3. VISUALIZAR CONTACTOS EXISTENTES"<<endl;
		cout<<"4. SALIR"<<endl<<endl;
		cout<<"OPCI�N: ";	cin>>opcion;	cout<<endl;
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
			default:	cout<<"OPCI�N INCORRECTA, INTENTE DE NUEVO . . ."<<endl<<endl;
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
		cout<<endl<<"�DESEA AGREGAR OTRO CONTACTO? [S/N]: ";	cin>>respuesta;	cout<<endl;
	}
	archivo.close();
	system("pause");
	system("cls");
}
void agregar(){
	char respuesta = 'S';
	ofstream archivo;
	archivo.open("AGENDA TELEFONICA.txt",ios::app);	//ABRIMOS EL ARCHIVO EN MODO A�ADIR
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
		cout<<endl<<"�DESEA AGREGAR OTRO CONTACTO? [S/N]: ";	cin>>respuesta;	cout<<endl;
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
