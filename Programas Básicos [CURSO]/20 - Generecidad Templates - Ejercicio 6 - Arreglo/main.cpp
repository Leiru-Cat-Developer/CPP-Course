/*
	DEFINA UNA PLANTILLA PARA LA CLASE ARREGLO, LA CUAL PRODRA DEFINIR
	VALORES DE DISTINTO TIPO, EL CUAL SE DEFINIRA EN EL MOMENTO DE LA
	INSTANCIA, EL PROGRAMA DEBERA TENER UN MENU CON LAS SIGUIENTES
	OPCIONES:
	
		- AGREGAR NUEVO ELEMENTO EN EL ARREGLO
		- COMPROBAR EL ESPACIO DEL ARREGLO
		- VER ARREGLO
		- VACIAR ARREGLO
		- SALIR
*/
#include<iostream>
#include "Arreglo.h"
using namespace std;

//PLANTILLAS DE FUNCIONES
void menu();

int main(int argc, char** argv) {
	Arreglo <char> AR1(5);
	int opcion = 0;
	char elemento;
	
	while(opcion != 5){
		
		menu();
		
		cin>>opcion;	cout<<endl;
		
		switch(opcion){
			case 1:		if(AR1.comprobarEspacio()){
							cout<<"EL ARREGLO YA ESTA LLENO"<<endl;
						}else{
							cout<<"DIGITE UN ELEMENTO: ";	cin>>elemento;
							AR1.agregar(elemento);
						}
				break;
			case 2:		if(AR1.comprobarEspacio()){
							cout<<"EL ARREGLO YA ESTA LLENO"<<endl;
						}else{
							cout<<"EL ARREGLO AUN NO ESTA LLENO"<<endl;
						}
				break;
			case 3:		cout<<"\\\ MOSTRANDO EL ARREGLO ///"<<endl;
						AR1.mostrarArreglo();
				break;
			case 4:		cout<<"\\\ VACIANDO EL ARREGLO ///"<<endl;
						AR1.vaciarArreglo();
				break;
			case 5:		cout<<"\\\ SALIENDO ///"<<endl;
				break;
			default:	cout<<"DIGITE UNA OPCION VALIDA . . ."<<endl;
				break;
		}
		
		cout<<endl;
		system("pause");
		system("cls");
	}
	
	return 0;
}

//DEFINICION DE FUNCIONES
void menu(){
	cout<<"\t ...MENU..."<<endl<<endl;
	cout<<"1. AGREGAR NUEVO ELEMENTO"<<endl;
	cout<<"2. COMPROBAR ESPACIO"<<endl;
	cout<<"3. VER ARREGLO"<<endl;
	cout<<"4. VACIAR ARREGLO"<<endl;
	cout<<"5. SALIR"<<endl<<endl;
	cout<<"OPCION: ";
}
