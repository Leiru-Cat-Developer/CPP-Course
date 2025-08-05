/*
	REALIZA UNA SUMA DE NÚMEROS COMPLEJOS
	
	z1 = 5 - 3i	,	z2 = -4 + 2i
	
	z1 + z2 = (5 - 3i) + (-4 + 2i)
		   = 5 - 3i -4 + 2i
		   = 1 - i
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//ESTRUCTURAS
struct Complejo{
	float real, imaginaria;
}z1,z2;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
Complejo suma(Complejo,Complejo);
void mostrarResultado(Complejo);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	Complejo resultado = suma(z1,z2);
	mostrarResultado(resultado);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE LOS DATOS PARA EL PRIMER NÚMERO COMPLEJO"<<endl<<endl;
	cout<<"DIGITE LA PARTE REAL: ";		cin>>z1.real;
	cout<<"DIGITE LA PARTE IMAGINARIA: ";	cin>>z1.imaginaria;
	cout<<endl;
	cout<<"DIGITE LOS DATOS PARA EL SEGUNDO NÚMERO COMPLEJO"<<endl<<endl;
	cout<<"DIGITE LA PARTE REAL: ";		cin>>z2.real;
	cout<<"DIGITE LA PARTE IMAGINARIA: ";	cin>>z2.imaginaria;
	cout<<endl;
}
Complejo suma(Complejo c1, Complejo c2){
	c1.real += c2.real;
	c1.imaginaria += c2.imaginaria;
	return c1;
}
void mostrarResultado(Complejo c){
	cout<<"RESULTADO DE LA SUMA: "<<c.real<<" , "<<c.imaginaria<<endl<<endl;
}
