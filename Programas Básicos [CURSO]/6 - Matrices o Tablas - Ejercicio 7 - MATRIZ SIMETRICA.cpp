/*
	DESARROLLAR UN PROGRAMA QUE DETERMINE SI UNA MATRIZ ES SIM�TRICA O NO
	UNA MATRIZ ES SIM�TRICA SI ES CUADRADA Y SI ES IGUAL A SU MATRIZ
	TRANSPUESTA
	
	8 1 3		8 1 3
	1 7 4	=	1 7 4
	3 4 9		3 4 9
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int filas = 0, columnas = 0;
	bool bandera = true;
	while((filas<=0)||(columnas<=0)){
		cout<<"DIGITE EL N�MERO DE FILAS Y COLUMNAS: ";	cin>>filas>>columnas;
		if((filas<=0)||(columnas<=0)){
			cout<<endl;
			cout<<"DIGITE VALORES VALIDOS . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	cout<<endl;
	int matriz[filas][columnas];
	if(filas == columnas){
		cout<<"---------DIGITE MATRIZ---------"<<endl<<endl;
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				cout<<"POCISI�N ["<<i<<"] ["<<j<<"]: ";	cin>>matriz[i][j];
			}
		}
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				if(matriz[i][j] != matriz[j][i]){
					bandera = false;
				}
			}
		}
		if(bandera == true){
			cout<<endl;
			cout<<"LA MATRIZ ES SIM�TRICA . . ."<<endl<<endl;
		}else if(bandera == false){
			cout<<endl;
			cout<<"LA MATRIZ NO ES SIM�TRICA . . ."<<endl<<endl;
		}
	}else if(filas != columnas){
		cout<<"LA MATRIZ NO SER� SIM�TRICA . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
