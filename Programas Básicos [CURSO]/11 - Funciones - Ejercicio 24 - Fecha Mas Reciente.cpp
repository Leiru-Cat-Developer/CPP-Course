/*
	ESCRIBA UNA FUNCI�N EN C++ LLAMADA "mayor()" QUE DEVUELVA LA FECHA M�S RECIENTE DE CUALQUIER 
	PAR DE FECHAS QUE SE LE TRANSMITAN. POR EJEMPLO SI SE LE TRANSMITEN LAS FECHAS 10/09/2005 Y
	11/03/2005 A "mayor()" SER� DEVUELTA LA SEGUNDA FECHA
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
struct Fecha{
	int dia, mes, anio;	
}f1,f2;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
Fecha mayor(Fecha,Fecha);
void mostrarFecha(Fecha);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	Fecha x = mayor(f1,f2);
	mostrarFecha(x);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE LOS DATOS DE LA PRIMERA FECHA"<<endl<<endl;
	cout<<"D�A: ";	cin>>f1.dia;
	cout<<"MES: ";	cin>>f1.mes;
	cout<<"A�O: ";	cin>>f1.anio;
	cout<<endl;
	cout<<"DIGITE LOS DATOS DE LA SEGUNDA FECHA"<<endl<<endl;
	cout<<"D�A: ";	cin>>f2.dia;
	cout<<"MES: ";	cin>>f2.mes;
	cout<<"A�O: ";	cin>>f2.anio;
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
	cout<<"LA FECHA M�S RECIENTE ES: "<<f.dia<<"/"<<f.mes<<"/"<<f.anio<<endl<<endl;
}
