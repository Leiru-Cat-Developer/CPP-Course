/*
	COMPROBAR SI UN N�MERO ES PAR O IMPAR, Y SE�ALAR LA POSICI�N DE MEMORIA DONDE
	SE EST� GUARDANDO EL N�MERO. CON PUNTEROS
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numero, *puntero_numero;
	cout<<"DIGITE UN N�MERO: ";	cin>>numero;
	puntero_numero = &numero;				//GUARDANDO LA POCISI�N DE MEMORIA
	cout<<endl;
	if(*puntero_numero%2 == 0){
		cout<<"EL N�MERO ES PAR . . ."<<endl;
	}else{
		cout<<"EL N�MERO ES IMPAR . . ."<<endl;
	}
	cout<<"LA POCISI�N DE MEMORIA DEL N�MERO "<<*puntero_numero<<" ES: "<<puntero_numero<<endl<<endl;
	system("pause");
	return 0;
}
