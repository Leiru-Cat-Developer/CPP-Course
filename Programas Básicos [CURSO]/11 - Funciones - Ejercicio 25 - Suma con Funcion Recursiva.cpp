/*
	REALIZE UNA FUNCI�N RECURSIVA QUE SUME LOS PRIMEROS N ENTEROS POSITIVOS.
	NOTA: PARA PLANTEAR LA FUNCI�N RECURSIVA TENGA EN CUENTA QUE LA SUMA PUEDE
	EXPRESARSE MEDIANTE LA SIGUIENTE RECURRENCIA:
	
	SUMA (N) = 1		  , SI N = 1
			 N+SUMA(N-1), SI N > 1
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
int suma(int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numero = 0;
	while(numero <= 0){
		cout<<"DIGITE EL N�MERO DE ELEMENTOS: ";	cin>>numero;
		if(numero <= 0){
			cout<<endl;
			cout<<"DIGITE UN N�MERO VALIDO . . ."<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	cout<<"LA SUMA DE LOS ELEMENTOS ES: "<<suma(numero)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
int suma(int x){
	int s = 0;
	if(x == 1){
		//CASO PARTICULAR
		s = 1;
	}else{
		//CASO GENERAL
		s = x + suma(x-1);
	}
	return s;
}
