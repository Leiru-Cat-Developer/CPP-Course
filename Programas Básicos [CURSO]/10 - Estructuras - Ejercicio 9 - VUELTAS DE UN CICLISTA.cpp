/*
	DEFINA UNA ESTRUCTURA QUE INDIQUE EL TIEMPO EMPLEADO POR UN CICLISTA EN UNA ETAPA.
	LA ESTRUCTURA DEBE TENER TRES CAMPOS
	
		- HORAS, MINUTOS, SEGUNDOS
	
	ESCRIBA UN PROGRAMA QUE DADO N ETAPAS CALCULE EL TIEMPO TOTAL EMPLEADO EN CORRER TODAS
	LAS ETAPAS
	
	60 MINUTOS = 1 HORA
	60 SEGUNDOS = 1 MINUTOS
	
	EJEMPLO QUE USAREMOS PARA SABER SI EL PROGRAMA ES CORRECTO
	
		- 1ERA VUELTA:		1 HORA + 75 MINUTOS + 75 SEGUNDOS -----> 2 HORAS 16 MINUTOS 15 SEGUNDOS
		- 2DA VUELTA:		0 HORAS + 60 MINUTOS + 60 SEGUNDOS ----> 1 HORA 1 MINUTO 0 SEGUNDOS
		- 3RA VUELTA:		0 HORAS + 61 MINUTOS + 52 SEGUNDOS ----> 1 HORA 1 MINUTO 52 SEGUNDOS
		
		- TOTAL											= 4 HORAS 19 MINUTOS 7 SEGUNDOS
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//INICIALIZACIÓN DE LA ESTRUCTURA
struct Ciclista{
	int horas;
	int minutos;
	int segundos;
}c[100];
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numeroDeVueltas = 0, horasTotales = 0, minutosTotales = 0, segundosTotales = 0;
	while(numeroDeVueltas<=0){
		cout<<"DIGITE EL NÚMERO DE VUELTAS QUE DESEA INSERTAR: ";	cin>>numeroDeVueltas;
		if(numeroDeVueltas<=0){
			cout<<endl;
			cout<<"DIGITE VALORES VALIDOS . . ."<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	for(int i=0; i<numeroDeVueltas; i++){
		cout<<"DIGITE LOS DATOS DE LA VUELTA ["<<i+1<<"]"<<endl<<endl;
		cout<<"HORAS: ";		cin>>c[i].horas;
		cout<<"MINUTOS: ";		cin>>c[i].minutos;
		cout<<"SEGUNDOS: ";		cin>>c[i].segundos;
		cout<<endl;
		horasTotales += c[i].horas;
		minutosTotales += c[i].minutos;
		if(minutosTotales>=60){
			minutosTotales -= 60;
			horasTotales++;
		}
		segundosTotales += c[i].segundos;
		if(segundosTotales>=60){
			segundosTotales -= 60;
			minutosTotales++;
		}
	}
	cout<<"TIEMPO TOTAL DE LAS VUELTAS"<<endl<<endl;
	cout<<"HORAS: "<<horasTotales<<endl;
	cout<<"MINUTOS: "<<minutosTotales<<endl;
	cout<<"SEGUNDOS: "<<segundosTotales<<endl<<endl;
	system("pause");
	return 0;
}
