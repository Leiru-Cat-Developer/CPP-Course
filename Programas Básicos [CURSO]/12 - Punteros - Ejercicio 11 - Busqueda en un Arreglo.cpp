/*
	HACER UNA FUNCI�N PARA ALMACENAR N N�MEROS EN UN ARREGLO DIN�MICO, POSTERIORMENTE
	EN OTRA FUNCI�N BUSCAR UN N�MERO EN PARTICULAR. PUEDES UTILIZAR CUALQUIER M�TODO
	DE BUSQUEDA YA SEA SECUENCIAL O BINARIO.
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void buscarDatos(int *, int);

//VARIABLES GLOBALES
int numeroDeElementos = 0, *punteroElemento;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	buscarDatos(punteroElemento,numeroDeElementos);
	delete[] punteroElemento;		//ELIMINAMOS MEMORIA PARA ARREGLO
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL N�MERO DE ELEMENTOS DEL ARREGLO: ";	cin>>numeroDeElementos;	cout<<endl;
	punteroElemento = new int[numeroDeElementos];		//RESERVAMOS MEMORIA PARA ARREGLO
	for(int i=0; i<numeroDeElementos; i++){
		cout<<"DIGITE EL N�MERO ["<<i<<"]: ";	cin>>*(punteroElemento+i);
	}
	cout<<endl;
}
void buscarDatos(int *x, int y){
	//BUSQUEDA SECUENCIAL
	int dato, i = 0;
	bool bandera = false;
	cout<<"DIGITE EL DATO QUE DESEA B�SCAR: ";	cin>>dato;	cout<<endl;
	while((i < y)&&(bandera == false)){
		if(*(x+i) == dato){
			bandera = true;
		}
		i++;
	}
	if(bandera == false){
		cout<<"EL N�MERO '"<<dato<<"' NO EXISTE EN EL ARREGLO . . ."<<endl<<endl;
	}else if(bandera == true){
		cout<<"EL N�MERO '"<<dato<<"' FUE ENCONTRADO EN LA POCISI�N: "<<i-1<<endl<<endl;
	}
}
