/*
	RELLENAR UN ARREGLO CON N N�MEROS, POSTERIORMENTE UTILIZANDO PUNTEROS DETERMINAR EL MENOR
	ELEMENTO DEL ARREGLO
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
	int cantidadDeNumeros = 0;
	while(cantidadDeNumeros <= 0){
		cout<<"DIGITE LA CANTIDAD DE N�MEROS QUE DESEA INGRESAR: ";	cin>>cantidadDeNumeros;
		if(cantidadDeNumeros <= 0){
			cout<<endl;
			cout<<"DIGITE UNA CANTIDAD DE N�MEROS VALIDA . . .";
			cout<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	int vectorNumeros[cantidadDeNumeros], *punteroDeVector, menor = 999999;
	for(int i=0; i<cantidadDeNumeros; i++){
		cout<<"DIGITE EL N�MERO ["<<i<<"]: ";	cin>>vectorNumeros[i];
	}
	cout<<endl;
	punteroDeVector = vectorNumeros;	//IGUALANDO A LA POCISI�N INICIAL DEL VECTOR
	for(int i=0; i<cantidadDeNumeros; i++){
		if(*punteroDeVector < menor){
			menor = *punteroDeVector;
		}
		punteroDeVector++;
	}
	cout<<"EL MENOR ELEMENTO DEL VECTOR ES: "<<menor<<endl<<endl;
	system("pause");
	return 0;
}
