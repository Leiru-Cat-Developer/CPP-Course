/*
	BUSQUEDA SECUENCIAL EN UN ARREGLO [FUNCIONA PARA N�MEROS Y CARACTERES]
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
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
		//IMPRIMIMOS CON "i-1" PARA RESTAR LA POCISI�N EXTRA QUE AGREGA EL ALGORITMO
		cout<<"EL N�MERO EST� EN LA POCISI�N ["<<i-1<<"]"<<endl<<endl;
	}
	if(bandera == false){
		cout<<"EL N�MERO QUE BUSCA NO EXISTE . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
