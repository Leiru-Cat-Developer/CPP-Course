/*
	BUSQUEDA BINARIA EN UN ARREGLO [EL ARREGLO DEBE ESTAR ORDENADO ASCENDENTEMENTE]
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int arreglo[] = {1,2,3,4,5};
	int inferior = 0, superior = 0, mitad = 0, dato = 0;
	bool bandera = false;		//PUEDE SER DE TIPO CHAR O BOOLEAN
	dato = 4;
	inferior = 0;				//COLOCAR POCISI�N MENOR DEL ARREGLO
	superior = 5;				//COLOCAR POCISI�N MAYOR DEL ARREGLO
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
		//IMPRIMIMOS CON "i-1" PARA RESTAR LA POCISI�N EXTRA QUE AGREGA EL ALGORITMO
		cout<<"EL N�MERO EST� EN LA POCISI�N ["<<mitad<<"]"<<endl<<endl;
	}
	if(bandera == false){
		cout<<"EL N�MERO QUE BUSCA NO EXISTE . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
