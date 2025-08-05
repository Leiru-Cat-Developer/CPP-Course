/*
	ESCRIBA UNA FUNCIÓN LLAMADA "calcAños()" QUE TENGA UN PARÁMETRO ENTERO QUE REPRESENTE EL NÚMERO TOTAL
	DE DÍAS DESDE LA FECHA 1/1/2000 Y PARÁMETROS DE REFERENCIA NOMBRADOS "año, mes, dia". LA FUNCIÓN ES
	CALCULAR EL AÑO, MES Y DÍA ACTUAL PARA EL NÚMERO DADO DE DÍAS QUE SE LE TRANSMITAN. PARA ESTE PROBLEMA
	SUPONGA QUE CADA AÑO TIENE 365 DÍAS Y CADA MES TIENE 30 DÍAS.
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void calcAnios(int, int&, int&, int&);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int totalDias = 0, anio = 0, mes = 0, dia = 0;
	while(totalDias <= 0){
		cout<<"DIGITE EL TOTAL DE DÍAS: ";	cin>>totalDias;
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
//DEFINICIÓN DE FUNCIONES
void calcAnios(int totalDias, int& anio, int& mes, int& dia){
	anio = totalDias/365;		totalDias %= 365;
	mes = totalDias/30;			totalDias %= 30;
	dia = totalDias%30;
	anio += 2000;
	mes += 1;
	dia += 1;
}
