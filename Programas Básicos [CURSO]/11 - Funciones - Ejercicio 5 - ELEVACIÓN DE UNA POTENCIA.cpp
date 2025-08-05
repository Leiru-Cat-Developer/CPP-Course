/*
	ESCRIBA UNA FUNCIÓN NOMBRADA "funpot()" QUE ELEVE UN NÚMERO ENTERO QUE SE LE TRANSMITA A UNA POTENCIA EN
	NÚMERO ENTERO POSITIVO Y DESPLIEGUE EL RESULTADO. EL NÚMERO ENTERO POSITIVO DEBERÁ SER EL SEGUNDO VALOR
	TRANSMITIDO A LA FUNCIÓN
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void funpot(int x, int y);
//VARIABLES GLOBALES
int numero1 = 0, numero2 = 0;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	cout<<endl;
	funpot(numero1,numero2);
	system("pause");
	return 0;
}
void pedirDatos(){
	while((numero1<=0)||(numero2<=0)){
		cout<<"DIGITE EL NÚMERO QUE DESEA ELEVAR: ";				cin>>numero1;
		cout<<"DIGITE LA POTENCIA A LA QUE LO DESEA ELEVAR: ";		cin>>numero2;
		if((numero1<=0)||(numero2<=0)){
			cout<<"DIGITE NÚMEROS VALIDOS . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
}
void funpot(int x, int y){
	cout<<"EL NÚMERO ELEVADO A LA POTENCIA ES: "<<pow(x,y)<<endl<<endl;
}
