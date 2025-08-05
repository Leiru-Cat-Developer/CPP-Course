/*
	BUSQUEDA SECUENCIAL EN UN ARREGLO [FUNCIONA PARA NÚMEROS Y CARACTERES]
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int arreglo[] = {3,4,2,1,5};
	int i = 0, datoBuscar = 0;
	bool bandera = false;		//PUEDE SER CHAR O BOOLEAN
	datoBuscar = 10;			//DATO QUE QUEREMOS BUSCAR EN EL ARREGLO
	//ALGORITMO DE LA BUSQUEDA SECUENCIAL [17 - 22]
	while((bandera==false)&&(i<5)){
		if(arreglo[i] == datoBuscar){
			bandera = true;
		}
		i++;
	}
	if(bandera == true){
		//IMPRIMIMOS CON "i-1" PARA RESTAR LA POCISIÓN EXTRA QUE AGREGA EL ALGORITMO
		cout<<"EL NÚMERO ESTÁ EN LA POCISIÓN ["<<i-1<<"]"<<endl<<endl;
	}
	if(bandera == false){
		cout<<"EL NÚMERO QUE BUSCA NO EXISTE . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
