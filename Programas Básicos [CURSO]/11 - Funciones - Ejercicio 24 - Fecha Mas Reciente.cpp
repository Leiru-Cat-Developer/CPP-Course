/*
	ESCRIBA UNA FUNCIÓN EN C++ LLAMADA "mayor()" QUE DEVUELVA LA FECHA MÁS RECIENTE DE CUALQUIER 
	PAR DE FECHAS QUE SE LE TRANSMITAN. POR EJEMPLO SI SE LE TRANSMITEN LAS FECHAS 10/09/2005 Y
	11/03/2005 A "mayor()" SERÁ DEVUELTA LA SEGUNDA FECHA
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
struct Fecha{
	int dia, mes, anio;	
}f1,f2;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
Fecha mayor(Fecha,Fecha);
void mostrarFecha(Fecha);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	Fecha x = mayor(f1,f2);
	mostrarFecha(x);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE LOS DATOS DE LA PRIMERA FECHA"<<endl<<endl;
	cout<<"DÍA: ";	cin>>f1.dia;
	cout<<"MES: ";	cin>>f1.mes;
	cout<<"AÑO: ";	cin>>f1.anio;
	cout<<endl;
	cout<<"DIGITE LOS DATOS DE LA SEGUNDA FECHA"<<endl<<endl;
	cout<<"DÍA: ";	cin>>f2.dia;
	cout<<"MES: ";	cin>>f2.mes;
	cout<<"AÑO: ";	cin>>f2.anio;
	cout<<endl;
}
Fecha mayor(Fecha x1, Fecha x2){
	Fecha mayorFecha;
	if((x1.dia >= x2.dia)&&(x1.mes >= x2.mes)&&(x1.anio >= x2.anio)){
		mayorFecha = x1;
	}else{
		mayorFecha = x2;
	}
	return mayorFecha;
}
void mostrarFecha(Fecha f){
	cout<<"LA FECHA MÁS RECIENTE ES: "<<f.dia<<"/"<<f.mes<<"/"<<f.anio<<endl<<endl;
}
