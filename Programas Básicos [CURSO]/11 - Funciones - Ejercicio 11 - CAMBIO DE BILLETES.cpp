/*
	ESCRIBA UNA FUNCI�N NOMBRADA "cambio()" QUE TENGA UN PAR�METRO EN N�MERO ENTERO Y SEIS PAR�METROS DE REFERENCIA
	EN N�MERO ENTERO NOMBRADOS "cien, cincuenta, veinte, diez, cinco y uno" RESPECTIVAMENTE, LA FUNCI�N TIENE QUE
	CONSIDERAR EL VALOR ENTERO TRANSMITIDO COMO UNA CANTIDAD EN D�LARES Y CONVERTIR EL VALOR EN EL N�MERO MENOR DE
	BILLETES EQUIVALENTES.
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void cambio(int, int&, int&, int&, int&, int&, int&);
//FUNCI�N PRINCIPAL
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
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
//DEFINICI�N DE FUNCIONES
void cambio(int cantidadIngresada, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	cien = cantidadIngresada/100;		cantidadIngresada %= 100;
	cincuenta = cantidadIngresada/50;	cantidadIngresada %= 50;
	veinte = cantidadIngresada/20;	cantidadIngresada %= 20;
	diez = cantidadIngresada/10;		cantidadIngresada %= 10;
	cinco = cantidadIngresada/5;
	uno = cantidadIngresada%5;
}
