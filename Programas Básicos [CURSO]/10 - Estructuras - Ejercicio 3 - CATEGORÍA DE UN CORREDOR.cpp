/*
	HACER UNA ESTRUCTURA LLAMADA CORREDOR, EN LA CUAL SE TENDRÁN LAS SIGUIENTES CAMPOS:
		- NOMBRE, EDAD, SEXO, CLUB
	PEDIR DATOS AL USUARIO PARA UN CORREDOR, Y HACER UNA CATEGORÍA DE COMPETICIÓN
		- JUVENIL <= 18 AÑOS
		- SEÑOR <= 40 AÑOS
		- VETERANO > 40 AÑOS
	POSTERIORMENTE IMPRIMIR TODOS LOS DATOS DEL CORREDOR, INCLUIDA SU CATEGORÍA DE
	COMPETICIÓN
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
struct Corredor{
	char nombre[50];
	int edad;
	char sexo[50];
	char club[50];
}corredorUno;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	cout<<"DIGITE EL NOMBRE DEL CORREDOR: 		";	cin.getline(corredorUno.nombre,50,'\n');
	cout<<"DIGITE LA EDAD DEL CORREDOR: 		";	cin>>corredorUno.edad;
	fflush(stdin);	//VACIAS BUFFER
	cout<<"DIGITE EL SEXO [MASCULINO/FEMENINO]: 	"; 	cin.getline(corredorUno.sexo,50,'\n');
	cout<<"DIGITE EL CLUB DEL CORREDOR: 		";	cin.getline(corredorUno.club,50,'\n');
	cout<<endl;
	cout<<"DATOS DEL CORREDOR"<<endl<<endl;
	cout<<"NOMBRE: 	"<<corredorUno.nombre<<endl;
	cout<<"EDAD: 		"<<corredorUno.edad<<endl;
	cout<<"SEXO: 		"<<corredorUno.sexo<<endl;
	cout<<"CLUB: 		"<<corredorUno.club<<endl<<endl;
	if(corredorUno.edad <= 18){
		cout<<"EL CORREDOR CORRESPONDE A LA CATEGORÍA JUVENIL . . ."<<endl<<endl;
	}else if(corredorUno.edad <= 40){
		cout<<"EL CORREDOR CORRESPONDE A LA CATEGORÍA DE ADULTO . . ."<<endl<<endl;
	}else if(corredorUno.edad > 40){
		cout<<"EL CORREDOR CORRESPONDE A LA CATEGORÍA DE VETERANO . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
