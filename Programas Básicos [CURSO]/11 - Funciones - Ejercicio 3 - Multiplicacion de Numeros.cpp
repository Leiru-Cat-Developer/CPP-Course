/*
	ESCRIBA UNA FUNCI�N LLAMADA MULT() QUE ACEPTE DOS N�MEROS EN PUNTO FLOTANTE COMO PAR�METROS, MULTIPLIQUE
	ESTOS DOS N�MEROS Y DESPLIEGUE EL RESULTADO
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE LA FUNCI�N
void pedirDatos();
void multiplicarNumeros(float n1, float n2);
//DEFINICI�N DE VARIABLES GLOBALES
float numero1 = 0, numero2 = 0;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	multiplicarNumeros(numero1,numero2);
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"DIGITE DOS N�MEROS: ";	cin>>numero1>>numero2;
}
void multiplicarNumeros(float n1, float n2){
	cout<<"EL RESULTADO DE LA MULTIPLICACI�N ES: "<<n1*n2<<endl<<endl;
}
