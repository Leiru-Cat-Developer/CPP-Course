/*
	REALIZAR UN PROGRAMA QUE DEFINA UNA MATRIZ DE TRES X TRES Y ESCRIBA UN CICLO
	PARA QUE MUESTRE LA DIAGONAL PRINCIPAL DE LA MATRIZ
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int matriz[3][3] = {1,2,3 , 4,5,6 , 7,8,9};
	/*
		POCISIÓN [0,0] = 1
		POCISIÓN [1,1] = 5
		POCISIÓN [2,2] = 9
		
		POR LO TANTO LAS FILAS Y LAS COLUMNAS SON IGUALES
	*/
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i == j){
				cout<<matriz[i][j]<<"   ";
			}
		}
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}
