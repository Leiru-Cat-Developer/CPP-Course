/*
	DEFINA UNA ESTRUCTURA QUE INDIQUE EL TIEMPO EMPLEADO POR UN CICLISTA EN RECORRER UNA ETAPA.
	LA ESTRUCTURA DEBE TENER TRES CAMPOS: HORAS, MINUTOS, SEGUNDOS. ESCRIBA UN PROGRAMA QUE
	DADO 3 ETAPAS CALCULE EL TIEMPO TOTAL EMPLEADO EN CORRER TODAS LAS ETAPAS, USAR PUNTEROS.
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//ESTRUCUTRAS
struct Ciclista{
	int horas;
	int minutos;
	int segundos;
}etapa[3], *punteroEtapa = etapa;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void calcularTiempos(Ciclista *);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	calcularTiempos(punteroEtapa);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	for(int i=0; i<3; i++){
		cout<<"ETAPA "<<i+1<<endl<<endl;
		cout<<"DIGITE LOS HORAS DE LA ETAPA "<<i+1<<": ";		cin>>(punteroEtapa+i)->horas;
		cout<<"DIGITE LOS MINUTOS DE LA ETAPA "<<i+1<<": ";	cin>>(punteroEtapa+i)->minutos;
		cout<<"DIGITE LOS SEGUNDOS DE LA ETAPA "<<i+1<<": ";	cin>>(punteroEtapa+i)->segundos;
		cout<<endl;
	}
}
void calcularTiempos(Ciclista *puntero){
	int horasTotales = 0, minutosTotales = 0, segundosTotales = 0;
	for(int i=0; i<3; i++){
		horasTotales += (punteroEtapa+i)->horas;
		minutosTotales += (punteroEtapa+i)->minutos;
		if(minutosTotales >= 60){
			minutosTotales -= 60;
			horasTotales++;
		}
		segundosTotales += (punteroEtapa+i)->segundos;
		if(segundosTotales >= 60){
			segundosTotales -= 60;
			minutosTotales++;
		}
	}
	cout<<"EL TOTAL DE TIEMPO ES: "<<endl<<endl;
	cout<<"HORAS: "<<horasTotales<<endl;
	cout<<"MINUTOS: "<<minutosTotales<<endl;
	cout<<"SEGUNDOS: "<<segundosTotales<<endl<<endl;
}
