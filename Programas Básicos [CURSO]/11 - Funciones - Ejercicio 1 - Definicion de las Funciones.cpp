/*
	DEFINICI�N DE LAS FUNCIONES USANDO LOS PROTOTIPOS
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE LA FUNCI�N
int encontrarMayorNumero(int numeroUno, int numeroDos);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int primero = 10, segundo = 20;
	cout<<"EL N�MERO MAYOR ES: "<<encontrarMayorNumero(primero,segundo)<<endl<<endl;
	system("pause");
	return 0;
}
int encontrarMayorNumero(int numeroUno, int numeroDos){
	if(numeroUno>numeroDos){
		return numeroUno;	//RETORNANDO EL N�MERO UNO A LA FUNCI�N PRINCIPAL
	}else if(numeroDos>numeroUno){
		return numeroDos;	//RETORNANDO EL N�MERO DOS A LA FUNCI�N PRINCIPAL
	}
}
