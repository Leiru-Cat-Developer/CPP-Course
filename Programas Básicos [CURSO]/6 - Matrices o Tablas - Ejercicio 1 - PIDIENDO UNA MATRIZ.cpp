/*
	UNA MATRIZ ES UN VECTOR DE VECTORES O TAMBIÉN LLAMADO UN ARRAY BIDIMENSIONAL
	tipoDeDato nombreMatriz [numeroDeFilas][numeroDeColumnas];
	
				columna0		columna1		columna2	. . .	columna n-1
	fila0
	fila1
	. . .
	fila n - 1
	
	HACER UN PROGRAMA PARA RELLENAR UNA MATRIZ, PIDIENDO AL USUARIO EL NÚMERO DE
	FILAS Y COLUMNAS, POSTERIORMENTE MOSTRAR LA MATRIZ EN PANTALLA
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int filas = 0, columnas = 0;
	while((filas<=0)||(columnas<=0)){
		cout<<"DIGITE EL NÚMERO DE FILAS Y COLUMNAS: ";	cin>>filas>>columnas;
		if((filas<=0)||(columnas<=0)){
			cout<<endl;
			cout<<"DIGITE NÚMEROS VALIDOS . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	int matriz[filas][columnas];	//DECLARACIÓN DE MATRIZ
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"DIGITE LA POCISIÓN ["<<i<<"] ["<<j<<"]: ";	cin>>matriz[i][j];
		}
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<matriz[i][j]<<"    ";
		}
		cout<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
