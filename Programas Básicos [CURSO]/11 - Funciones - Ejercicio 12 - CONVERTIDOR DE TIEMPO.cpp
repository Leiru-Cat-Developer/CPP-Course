/*
	ESCRIBA UNA FUNCION LLAMADA "tiempo()" QUE TENGA COMO PARÁMETRO UN NÚMERO ENTERO LLAMADO "totalSeg" Y TRES
	PARÁMETROS DE REFERENCIA ENTEROS NOMBRADOS "horas, min, seg". LA FUNCIÓN ES CONVERTIR EL NÚMERO DE SEGUNDOS
	TRANSMITIDOS EN UN NÚMERO EQUIVALENTE DE HORAS, MINUTOS Y SEGUNDOS.
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void tiempo(int, int&, int&, int&);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int totalSeg = 0, horas = 0, min = 0, seg = 0;
	while(totalSeg <= 0){
		cout<<"DIGITE LA CANTIDAD DE SEGUNDOS QUE DESEA CONVERTIR: ";	cin>>totalSeg;
		if(totalSeg <= 0){
			cout<<endl;
			cout<<"DIGITE UNA CANTIDAD CORRECTA . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	cout<<endl;
	tiempo(totalSeg,horas,min,seg);		//FUNCIÓN QUE CONVIERTE LOS SEGUNDOS A HORAS, MINUTOS Y SEGUNDOS
	cout<<"TOTAL DE HORAS: "<<horas<<endl;
	cout<<"TOTAL DE MINUTOS: "<<min<<endl;
	cout<<"TOTAL DE SEGUNDOS: "<<seg<<endl<<endl;
	system("pause");
	return 0;
}
//DEFINICIÓN DE FUNCIONES
void tiempo(int totalSeg, int& horas, int& min, int& seg){
	horas = totalSeg/3600;		totalSeg %= 3600;
	min = totalSeg/60;			totalSeg %= 60;
	seg = totalSeg%60;
}
