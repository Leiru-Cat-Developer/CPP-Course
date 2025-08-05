/*
	HACER UNA ESTRUCTURA LLAMADA CORREDOR, EN LA CUAL SE TENDR�N LAS SIGUIENTES CAMPOS:
		- NOMBRE, EDAD, SEXO, CLUB
	PEDIR DATOS AL USUARIO PARA UN CORREDOR, Y HACER UNA CATEGOR�A DE COMPETICI�N
		- JUVENIL <= 18 A�OS
		- SE�OR <= 40 A�OS
		- VETERANO > 40 A�OS
	POSTERIORMENTE IMPRIMIR TODOS LOS DATOS DEL CORREDOR, INCLUIDA SU CATEGOR�A DE
	COMPETICI�N
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
struct Corredor{
	char nombre[50];
	int edad;
	char sexo[50];
	char club[50];
}corredorUno;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
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
		cout<<"EL CORREDOR CORRESPONDE A LA CATEGOR�A JUVENIL . . ."<<endl<<endl;
	}else if(corredorUno.edad <= 40){
		cout<<"EL CORREDOR CORRESPONDE A LA CATEGOR�A DE ADULTO . . ."<<endl<<endl;
	}else if(corredorUno.edad > 40){
		cout<<"EL CORREDOR CORRESPONDE A LA CATEGOR�A DE VETERANO . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
