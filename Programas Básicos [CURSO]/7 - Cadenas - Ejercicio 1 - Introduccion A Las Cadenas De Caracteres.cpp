/*
	ARREGLOS LLENO DE CARACTERES = CADENAS, LAS CADENAS SE PUEDEN LEER
	
	cin>>cadena;					SOLO GUARDARA UNA PALABRA
	gets(cadena);					GUARDARA TODO LO QUE INTRODUZCAMOS EN LA CADENA
	cin.getline(cadena,longitud,'\n');	FORMA OPTIMA DE GUARDAR CADENAS
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>	//LIBRERÍA PARA LAS CADENAS DE CARÁCTERES
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	char palabra1[] = "Uriel";				//INICIALIZACIÓN DE CADENA FORMA 1
	char palabra2[] = {'A','E','I','O','U'};	//INICIALIZACIÓN DE CADENA FORMA 2
	char nombre[30];
	cout<<"DIGITE SU NOMBRE: ";	cin.getline(nombre,20,'\n');
	cout<<nombre<<endl;
	system("pause");
	return 0;
}
