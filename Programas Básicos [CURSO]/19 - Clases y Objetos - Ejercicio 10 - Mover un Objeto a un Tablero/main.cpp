/*
	CONSTRUIR UN PROGRAMA QUE PERMITA DIRIGIR EL MOVIMIENTO DE UN OBJETO DENTRO DE UN TABLERO
	Y ACTUALICE SU POSICION DENTRO DEL MISMO. LOS MOVIMIENTOS POSIBLES SON:
		ARRIBA, ABAJO, DERECHA, IZQUIERDA, DERECHA.
	TRAS CADA MOVIMIENTO EL PROGRAMA MOSTRARA LA NUEVA DIRECCION ELEGIDA Y LAS COORDENADAS DE
	SITUACION DEL OBJETO DENTRO DEL TABLERO.
*/

#include<iostream>
#include "Tablero.h"

using namespace std;

int main(int argc, char** argv) {
	Tablero* objeto;
	int x,y,opcion,pocisiones;
	cout<<"DIGITE LA POCISION INICIAL DEL OBJETO"<<endl<<endl;
	cout<<"POCISION X: ";	cin>>x;
	cout<<"POCISION Y: ";	cin>>y;
	system("cls");									//LIMPIAR PANTALLA
	objeto = new Tablero(x,y);						//CREANDO OBJETO
	//CICLO INFINITO HASTA QUE SEA 'F A L S E'
	while(opcion != 5){
		cout<<"---------- MENU ----------"<<endl<<endl;
		cout<<"1. MOVER ARRIBA"<<endl;
		cout<<"2. MOVER ABAJO"<<endl;
		cout<<"3. MOVER DERECHA"<<endl;
		cout<<"4. MODER IZQUIERDA"<<endl;
		cout<<"5. SALIR"<<endl<<endl;
		cout<<"OPCION: ";		cin>>opcion;	cout<<endl;
		switch(opcion){
			case 1:		cout<<"DIGITE LAS POCISIONES QUE DESEA MOVER HACIA ARRIBA: ";	cin>>pocisiones;
						objeto->moverArriba(pocisiones);
						cout<<endl<<"POCISION ACTUAL ["<<objeto->getX()<<"]["<<objeto->getY()<<"]"<<endl<<endl;
						system("pause");
						system("cls");
				break;
			case 2:		cout<<"DIGITE LAS POCISIONES QUE DESEA MOVER HACIA ABAJO: ";	cin>>pocisiones;
						objeto->moverAbajo(pocisiones);
						cout<<endl<<"POCISION ACTUAL ["<<objeto->getX()<<"]["<<objeto->getY()<<"]"<<endl<<endl;
						system("pause");
						system("cls");
				break;
			case 3:		cout<<"DIGITE LAS POCISIONES QUE DESEA MOVER HACIA LA DERECHA: ";	cin>>pocisiones;
						objeto->moverDerecha(pocisiones);
						cout<<endl<<"POCISION ACTUAL ["<<objeto->getX()<<"]["<<objeto->getY()<<"]"<<endl<<endl;
						system("pause");
						system("cls");
				break;
			case 4:		cout<<"DIGITE LAS POCISIONES QUE DESEA MOVER HACIA LA IZQUIERDA: ";	cin>>pocisiones;
						objeto->moverIzquierda(pocisiones);
						cout<<endl<<"POCISION ACTUAL ["<<objeto->getX()<<"]["<<objeto->getY()<<"]"<<endl<<endl;
						system("pause");
						system("cls");
				break;
			case 5:		cout<<"SALIENDO . . ."<<endl<<endl;
						system("pause");
				break;
			default:	cout<<"LA OPCION DIGITADA NO EXISTE . . ."<<endl<<endl;
						system("pause");
						system("cls");
				break;
		}
	}
	return 0;
}
