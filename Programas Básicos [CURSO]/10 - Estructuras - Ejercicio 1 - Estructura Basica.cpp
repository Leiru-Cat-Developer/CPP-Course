/*
	ESTRUCTURA BÁSICA EN C++
	
						PRIMERA FORMA DE ESTRUCTURA
	struct Persona{
		char nombrePersona[20];
		int edadPersona;
	}personaUno = {"nombre1",22},personaDos = {"nombre2",22};
	
						SEGUNDA FORMA DE ESTRUCTURA
	struct Persona{
		char nombrePersona[20];
		int edadPersona;
	}personaUno,personaDos;
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//DECLARACIÓN DE ESTRUCTURA [11 - 14]
struct Persona{
	char nombrePersona[20];
	int edadPersona;
}personaUno,personaDos;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	cout<<"DIGITE EL NOMBRE DE LA PERSONA UNO: ";	cin.getline(personaUno.nombrePersona,20,'\n');
	cout<<"DIGITE LA EDAD DE LA PERSONA UNO: ";	cin>>personaUno.edadPersona;
	fflush(stdin);	//LIMPIAR BUFFER PARA GUARDAR MÁS DATOS
	cout<<"DIGITE EL NOMBRE DE LA PERSONA DOS: ";	cin.getline(personaDos.nombrePersona,20,'\n');
	cout<<"DIGITE LA EDAD DE LA PERSONA DOS: ";	cin>>personaDos.edadPersona;
	cout<<"--------------------------------"<<endl;
	cout<<"EL NOMBRE DE LA PERSONA UNO ES: "<<personaUno.nombrePersona<<endl;
	cout<<"LA EDAD DE LA PERSONA UNO ES: "<<personaUno.edadPersona<<endl<<endl;
	cout<<"EL NOMBRE DE LA PERSONA DOS ES: "<<personaDos.nombrePersona<<endl;
	cout<<"LA EDAD DE LA PERSONA DOS ES: "<<personaDos.edadPersona<<endl<<endl;
	system("pause");
	return 0;
}
