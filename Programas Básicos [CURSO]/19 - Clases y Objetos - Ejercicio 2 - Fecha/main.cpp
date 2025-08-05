/*
	DEFINIR UNA CLASE 'diaAño' CON LOS ATRIBUTOS MES Y DIA, LOS METODOS IGUAL(), VISUALIZAR().
	EL MES SE REGISTRA COMO UN VALOR ENTERO (1, ENERO, 2, FEBRERO, ETC).
	EL DIA DEL MES SE REGISTRA EN OTRA VARIABLE ENTERA DIA.
	ESCRIBIR UN PROGRAMA QUE COMPRUEBE SI UNA FECHA ES SU CUMPLEAÑOS.
*/
#include<iostream>
#include<stdlib.h>
#include "diaAnio.h"

using namespace std;

int main(int argc, char** argv){
	DiaAnio* hoy;
	DiaAnio* cumple;
	int d, m;
	
	//PIDIENDO LOS DATOS
	cout<<"INTRODUZCA LA FECHA, EL DIA: ";	cin>>d;
	cout<<"INTRODUZCA EL NUMERO DE MES: ";	cin>>m;
	cout<<endl;
	hoy = new DiaAnio(d,m);
	
	cout<<"DIGITE SU FECHA DE NACIMIENTO: ";	cin>>d;
	cout<<"DIGITE SU FECHA DE NACIMIENTO: ";	cin>>m;
	cout<<endl;
	cumple = new DiaAnio(d,m);
	
	//MOSTRANDO LA FECHA
	hoy->visualizar();
	cout<<endl;
	cumple->visualizar();
	cout<<endl;
	
	//CONDICIONAL PARA SABER SI LAS DOS FEHCAS COINCIDEN
	if(hoy->igual(*cumple)){
		cout<<"FELIZ CUMPLEANIOS :D . . ."<<endl<<endl;
	}else{
		cout<<"ENTENDIBLE, TENGA UN BUEN DIA . . ."<<endl<<endl;
	}
	
	system("pause");
	return 0;
}
