/*
	ESCRIBA UNA FUNCION LLAMADA "tiempo()" QUE TENGA COMO PAR�METRO UN N�MERO ENTERO LLAMADO "totalSeg" Y TRES
	PAR�METROS DE REFERENCIA ENTEROS NOMBRADOS "horas, min, seg". LA FUNCI�N ES CONVERTIR EL N�MERO DE SEGUNDOS
	TRANSMITIDOS EN UN N�MERO EQUIVALENTE DE HORAS, MINUTOS Y SEGUNDOS.
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void tiempo(int, int&, int&, int&);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
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
	tiempo(totalSeg,horas,min,seg);		//FUNCI�N QUE CONVIERTE LOS SEGUNDOS A HORAS, MINUTOS Y SEGUNDOS
	cout<<"TOTAL DE HORAS: "<<horas<<endl;
	cout<<"TOTAL DE MINUTOS: "<<min<<endl;
	cout<<"TOTAL DE SEGUNDOS: "<<seg<<endl<<endl;
	system("pause");
	return 0;
}
//DEFINICI�N DE FUNCIONES
void tiempo(int totalSeg, int& horas, int& min, int& seg){
	horas = totalSeg/3600;		totalSeg %= 3600;
	min = totalSeg/60;			totalSeg %= 60;
	seg = totalSeg%60;
}
