/*
	DETERMINAR SI UN N�MERO ES PRIMO O NO, CON PUNTEROS. Y ADEM�S INDICAR EN QUE
	POCISI�N DE MEMORIA SE GUARDO EL N�MERO
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
	int numero, *puntero_numero,contador = 0;
	cout<<"DIGITE EL N�MERO: ";	cin>>numero;
	puntero_numero = &numero;
	cout<<endl;
	for(int i=1; i<*puntero_numero; i++){
		if(*puntero_numero%i == 0){
			contador++;
		}
	}
	if(contador > 2){
		//NO ES PRIMO
		cout<<"EL N�MERO NO ES PRIMO . . ."<<endl;
	}else{
		//ES PRIMO
		cout<<"EL N�MERO ES PRIMO . . ."<<endl;
	}
	cout<<"LA DIRECCI�N DEL N�MERO "<<*puntero_numero<<" ES: "<<puntero_numero<<endl<<endl;
	system("pause");
	return 0;
}

