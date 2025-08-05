/*
	CREAR UN ARCHIVO BINARIO DONDE ALMACENAR UN REGISTRO QUE CONTENGA LAS PULSASIONES DE UN
	ATLETA EN UNA DETERMINADA HORA, EL PROGRAMA DEBE TENER UN MEN� CON LAS SIGUIENTES 
	OPCIONES:
	
		1. COMENZAR A DIGITAR PULSASIONES
		2. A�ADIR M�S PULSASIONES
		3. MOSTRAR LAS PULSASIONES
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
struct Registro{
	float hora;
	int pulsaciones;
};

//PROTOTIPOS DE FUNCIONES
void menu();
void digitarPulsos();
void addPulsos();
void mostrarPulsos();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	menu();
	return 0;
}

//DEFINICI�N DE FUNCIONES
void menu(){
	int opcion = 0;
	while(opcion != 4){
		cout<<"---------- MENU ----------"<<endl<<endl;
		cout<<"1. COMENZAR A DIGITALIZAR PULSASIONES [REEMPLAZARA ARCHIVO EXISTENTE]"<<endl;
		cout<<"2. A�ADIR M�S PULSASIONES"<<endl;
		cout<<"3. MOSTRAR LAS PULSASIONES"<<endl;
		cout<<"4. SALIR"<<endl<<endl;
		cout<<"OPCION: ";	cin>>opcion;	cout<<endl;
		switch(opcion){
			case 1:	digitarPulsos();
					system("pause");
					system("cls");
				break;
			case 2:	addPulsos();
					system("pause");
					system("cls");
				break;
			case 3:	mostrarPulsos();
					system("pause");
					system("cls");
				break;
			case 4:	cout<<"SALIENDO . . ."<<endl<<endl;
					system("pause");
				break;
			default:	cout<<"LA OPCI�N QUE DIGITO NO EXISTE . . ."<<endl<<endl;
					system("pause");
					system("cls");
				break;
		}
	}
}
void digitarPulsos(){
	ofstream archivoBinario;
	archivoBinario.open("PULSASIONES ATLETA.dat",ios::out | ios::binary);
	if(archivoBinario.fail()){
		cout<<"NO SE PUDO CREAR EL ARCHIVO BINARIO . . ."<<endl<<endl;
		exit(1);
	}
	Registro pulso;
	cout<<"DIGITE LA HORA: ";					cin>>pulso.hora;
	cout<<"DIGITE LAS PULSASIONES DE LA PERSONA: ";	cin>>pulso.pulsaciones;
	cout<<endl;
	//ESCRIBIMOS LOS DATOS EN EL ARCHIVO BINARIO
	archivoBinario.write((char *)&pulso,sizeof(Registro));
	//CERRAR EL ARCHIVO
	archivoBinario.close();
}
void addPulsos(){
	char respuesta = 'S';
	ofstream archivoBinario;
	archivoBinario.open("PULSASIONES ATLETA.dat",ios::app | ios::binary);
	if(archivoBinario.fail()){
		cout<<"NO SE PUDO A�ADIR EL ARCHIVO BINARIO . . ."<<endl<<endl;
		exit(1);
	}
	Registro pulso;
	while((respuesta == 'S')||(respuesta == 's')){
		fflush(stdin);
		cout<<"DIGITE LA HORA: ";					cin>>pulso.hora;
		cout<<"DIGITE LAS PULSASIONES DE LA PERSONA: ";	cin>>pulso.pulsaciones;
		cout<<endl;
		//ESCRIBIMOS LOS DATOS EN EL ARCHIVO BINARIO
		archivoBinario.write((char *)&pulso,sizeof(Registro));	
		cout<<"�DESEA AGREGAR OTRO REGISTRO? [S/N]: ";	cin>>respuesta;	cout<<endl;
	}
	//CERRAR EL ARCHIVO
	archivoBinario.close();
}
void mostrarPulsos(){
	ifstream archivoBinario;
	archivoBinario.open("PULSASIONES ATLETA.dat",ios::in | ios::binary);
	if(archivoBinario.fail()){
		cout<<"NO SE PUDO MOSTRAR EL ARCHIVO . . ."<<endl<<endl;
		exit(1);
	}
	Registro pulso;
	while(!archivoBinario.eof()){	
		//MIENTRAS NO HAYA FINALIZADO EN RECORRER EL ARCHIVO
		archivoBinario.read((char *)&pulso,sizeof(Registro));
		if(!archivoBinario.eof()){
			//MOSTRANDO
			cout<<"HORA: "<<pulso.hora<<endl;
			cout<<"PULSASIONES: "<<pulso.pulsaciones<<endl<<endl;		
		}
	}
	//CERRANDO
	archivoBinario.close();
}
