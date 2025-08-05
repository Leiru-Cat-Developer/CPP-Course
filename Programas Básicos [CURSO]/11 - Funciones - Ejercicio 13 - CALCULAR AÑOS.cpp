/*
	ESCRIBA UNA FUNCI�N LLAMADA "calcA�os()" QUE TENGA UN PAR�METRO ENTERO QUE REPRESENTE EL N�MERO TOTAL
	DE D�AS DESDE LA FECHA 1/1/2000 Y PAR�METROS DE REFERENCIA NOMBRADOS "a�o, mes, dia". LA FUNCI�N ES
	CALCULAR EL A�O, MES Y D�A ACTUAL PARA EL N�MERO DADO DE D�AS QUE SE LE TRANSMITAN. PARA ESTE PROBLEMA
	SUPONGA QUE CADA A�O TIENE 365 D�AS Y CADA MES TIENE 30 D�AS.
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void calcAnios(int, int&, int&, int&);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int totalDias = 0, anio = 0, mes = 0, dia = 0;
	while(totalDias <= 0){
		cout<<"DIGITE EL TOTAL DE D�AS: ";	cin>>totalDias;
		if(totalDias <= 0){
			cout<<endl;
			cout<<"DIGITE UNA CANTIDAD CORRECTA . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	cout<<endl;
	calcAnios(totalDias,anio,mes,dia);
	cout<<"FECHA ACTUAL: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
//DEFINICI�N DE FUNCIONES
void calcAnios(int totalDias, int& anio, int& mes, int& dia){
	anio = totalDias/365;		totalDias %= 365;
	mes = totalDias/30;			totalDias %= 30;
	dia = totalDias%30;
	anio += 2000;
	mes += 1;
	dia += 1;
}
