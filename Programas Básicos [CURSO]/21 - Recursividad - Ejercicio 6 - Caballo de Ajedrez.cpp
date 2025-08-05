/*
	PROBLEMA DEL SALTO DEL CABALLO [BACKTRACKING]

	DESPLAZAMIENTOS POSIBLES
	
	(2,1)
	(1,2)
	(-1,2)
	(-2,1)
	(-2,-1)
	(-1,-2)
	(1,-2)
	(2,-1)
*/
#include<iostream>
using namespace std;

//PLANTILLAS DE FUNCIONES
void saltoCaballo(int,int,int,bool&);
void escribeTablero();

//VARIABLES GLOBALES
const int N = 5;
int tablero[N][N];
int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

int main(){
	bool exito;
	int fila = 2;
	int columna = 2;
	
	tablero[fila][columna] = 1;
	
	saltoCaballo(2,fila,columna,exito);
	
	if(exito){
		cout<<"SI SE PUDIERON RECORRER TODAS LAS CASILLAS"<<endl;
	}else{
		cout<<"NO SE LOGRO, TODO UN FRACASO HASTA EL FINAL"<<endl;
	}
	return 0;
}

//DEFINICION DE FUNCIONES
void saltoCaballo(int i, int x, int y, bool &exito){
	int nx,ny;	//POCISIONES DEL CABALLO EN EL TABLERO
	int k = 0;	//ITERADOR DE POSIBLES 8 MOVIMIENTOS
	exito = false;
	do{
		k++;
		nx = x + d[k-1][0];
		ny = y + d[k-1][1];
		//DETERMINA SI NUEVAS COORDENADAS SON ACEPTABLES
		if((nx >= 0)&&(nx < N)&&(ny >= 0)&&(ny < N)&&(tablero[nx][ny] == 0)){
			//ANOTA MOVIMIENTO
			tablero[nx][ny] = i;
			escribeTablero();	//FUNCION PARA MOSTRAR TABLERO
			if(i < N*N){
				saltoCaballo(i+1,nx,ny,exito);
				if(!exito){
					tablero[nx][ny] = 0;	//NO SE PUDO
				}
			}else{
				exito = true;	//SI SE PUDO
			}
		}
	}while((k < 8) && (!exito));
}

void escribeTablero(){
	int i,j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			cout<<tablero[i][j]<<"   |   ";
		}
		cout<<endl<<endl<<endl;
	}
	cout<<endl<<endl<<endl<<endl;
}
