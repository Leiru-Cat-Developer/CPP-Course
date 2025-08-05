/*
	BUSQUEDA BINARIA EN UN ARREGLO [EL ARREGLO DEBE ESTAR ORDENADO ASCENDENTEMENTE]
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int arreglo[] = {1,2,3,4,5};
	int inferior = 0, superior = 0, mitad = 0, dato = 0;
	bool bandera = false;		//PUEDE SER DE TIPO CHAR O BOOLEAN
	dato = 4;
	inferior = 0;				//COLOCAR POCISIÓN MENOR DEL ARREGLO
	superior = 5;				//COLOCAR POCISIÓN MAYOR DEL ARREGLO
	//ALGORITMO DE LA BUSQUEDA BINARIA [17 - 32]
	while(inferior<=superior){
		mitad = (inferior+superior)/2;
		if(arreglo[mitad] == dato){
			bandera = true;
			break;			//PODEMOS SALIR DE LOS CICLOS AL COLOCAR "BREAK"
		}
		if(arreglo[mitad] > dato){
			superior = mitad;
			mitad = (inferior+superior)/2;
		}
		if(arreglo[mitad] < dato){
			inferior = mitad;
			mitad = (inferior+superior)/2;
		}
	}
	if(bandera == true){
		//IMPRIMIMOS CON "i-1" PARA RESTAR LA POCISIÓN EXTRA QUE AGREGA EL ALGORITMO
		cout<<"EL NÚMERO ESTÁ EN LA POCISIÓN ["<<mitad<<"]"<<endl<<endl;
	}
	if(bandera == false){
		cout<<"EL NÚMERO QUE BUSCA NO EXISTE . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
