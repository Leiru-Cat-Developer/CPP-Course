/*
	ESCRIBA UNA FUNCIÓN NOMBRADA "cambio()" QUE TENGA UN PARÁMETRO EN NÚMERO ENTERO Y SEIS PARÁMETROS DE REFERENCIA
	EN NÚMERO ENTERO NOMBRADOS "cien, cincuenta, veinte, diez, cinco y uno" RESPECTIVAMENTE, LA FUNCIÓN TIENE QUE
	CONSIDERAR EL VALOR ENTERO TRANSMITIDO COMO UNA CANTIDAD EN DÓLARES Y CONVERTIR EL VALOR EN EL NÚMERO MENOR DE
	BILLETES EQUIVALENTES.
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void cambio(int, int&, int&, int&, int&, int&, int&);
//FUNCIÓN PRINCIPAL
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int cantidadIngresada, cien, cincuenta, veinte, diez, cinco, uno;
	cout<<"DIGITE LA CANTIDAD EN DOLARES: $";	cin>>cantidadIngresada;
	cambio(cantidadIngresada,cien,cincuenta,veinte,diez,cinco,uno);
	cout<<endl;
	cout<<"CANTIDAD DE BILLETES A ENTREGAR COMO CAMBIO"<<endl<<endl;
	cout<<"BILLETES DE CIEN $"<<cien<<endl;
	cout<<"BILLETES DE CINCUENTA $"<<cincuenta<<endl;
	cout<<"BILLETES DE VEINTE $"<<veinte<<endl;
	cout<<"MONEDAS DE DIEZ $"<<diez<<endl;
	cout<<"MONEDAS DE CINCO $"<<cinco<<endl;
	cout<<"MONEDAS DE UNO $"<<uno<<endl<<endl;
	system("pause");
	return 0;
}
//DEFINICIÓN DE FUNCIONES
void cambio(int cantidadIngresada, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	cien = cantidadIngresada/100;		cantidadIngresada %= 100;
	cincuenta = cantidadIngresada/50;	cantidadIngresada %= 50;
	veinte = cantidadIngresada/20;	cantidadIngresada %= 20;
	diez = cantidadIngresada/10;		cantidadIngresada %= 10;
	cinco = cantidadIngresada/5;
	uno = cantidadIngresada%5;
}
