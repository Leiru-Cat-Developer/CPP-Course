/*
	REALIZA UNA SUMA DE N�MEROS COMPLEJOS
	
	z1 = 5 - 3i	,	z2 = -4 + 2i
	
	z1 + z2 = (5 - 3i) + (-4 + 2i)
		   = 5 - 3i -4 + 2i
		   = 1 - i
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
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
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	Complejo resultado = suma(z1,z2);
	mostrarResultado(resultado);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE LOS DATOS PARA EL PRIMER N�MERO COMPLEJO"<<endl<<endl;
	cout<<"DIGITE LA PARTE REAL: ";		cin>>z1.real;
	cout<<"DIGITE LA PARTE IMAGINARIA: ";	cin>>z1.imaginaria;
	cout<<endl;
	cout<<"DIGITE LOS DATOS PARA EL SEGUNDO N�MERO COMPLEJO"<<endl<<endl;
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
