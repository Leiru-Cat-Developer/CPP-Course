/*
	FUNCIONES atoi() y atof() -> TRASNFORMAR UNA CADENA A N�MEROS
	atoi() -> N�MEROS ENTEROS
	aoif() -> N�MEROS FLOTANTES
	FUNCIONA CON LA LIBRER�A #include<stdlib.h>
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	char cadenaNumerosEnteros[] = "12345";
	char cadenaNumerosFlotantes[] = "123.123";
	int numeroEntero = atoi(cadenaNumerosEnteros);		//CONVERTIMOS CADENA A INT
	float numeroFlotante = atof(cadenaNumerosFlotantes);	//CONVERTIMOS CADENA A FLOAT
	cout<<"N�MERO ENTERO: "<<numeroEntero<<endl;
	cout<<"N�MERO FLOTANTE: "<<numeroFlotante<<endl<<endl;
	system("pause");
	return 0;
}
