/*
	DEFINA UNA ESTRUCTURA QUE INDIQUE EL TIEMPO EMPLEADO POR UN CICLISTA EN RECORRER UNA ETAPA.
	LA ESTRUCTURA DEBE TENER TRES CAMPOS: HORAS, MINUTOS, SEGUNDOS. ESCRIBA UN PROGRAMA QUE
	DADO 3 ETAPAS CALCULE EL TIEMPO TOTAL EMPLEADO EN CORRER TODAS LAS ETAPAS, USAR PUNTEROS.
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
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
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	calcularTiempos(punteroEtapa);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
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
