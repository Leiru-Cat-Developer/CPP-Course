/*
	ESCRIBA UNA FUNCI�N NOMBRADA "funpot()" QUE ELEVE UN N�MERO ENTERO QUE SE LE TRANSMITA A UNA POTENCIA EN
	N�MERO ENTERO POSITIVO Y DESPLIEGUE EL RESULTADO. EL N�MERO ENTERO POSITIVO DEBER� SER EL SEGUNDO VALOR
	TRANSMITIDO A LA FUNCI�N
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void funpot(int x, int y);
//VARIABLES GLOBALES
int numero1 = 0, numero2 = 0;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	cout<<endl;
	funpot(numero1,numero2);
	system("pause");
	return 0;
}
void pedirDatos(){
	while((numero1<=0)||(numero2<=0)){
		cout<<"DIGITE EL N�MERO QUE DESEA ELEVAR: ";				cin>>numero1;
		cout<<"DIGITE LA POTENCIA A LA QUE LO DESEA ELEVAR: ";		cin>>numero2;
		if((numero1<=0)||(numero2<=0)){
			cout<<"DIGITE N�MEROS VALIDOS . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
}
void funpot(int x, int y){
	cout<<"EL N�MERO ELEVADO A LA POTENCIA ES: "<<pow(x,y)<<endl<<endl;
}
