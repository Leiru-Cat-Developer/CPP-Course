//EL PROBLEMA DE LAS REINAS
#include<iostream>
using namespace std;

//PROTOTIPOS DE FUNCIONES
void ponerReina(int,bool&);
void mostrarTablero();
bool valido(int);

//VARIABLES GLOBALES
const int N = 4;
int reinas[N];

int main(){
	bool solucion;
	ponerReina(0,solucion);
	if(solucion){
		cout<<"SI EXISTE COMBINACION DE REINAS"<<endl<<endl;
		mostrarTablero();
	}else{
		cout<<"NO EXISTE COMBINACION DE REINAS"<<endl;
	}
	return 0;
}

//DEFINICION DE FUNCIONES
void ponerReina(int i, bool &solucion){
	int k = 0;	//INICIALIZA EL CONTADOR DE MOVIMIENTOS
	solucion = false;
	do{
		reinas[i] = k;	//COLOCA Y ANOTA LA REINA I EN LA FILA K
		k++;
		mostrarTablero();
		if(valido(i)){
			if(i<(N-1)){
				ponerReina(i+1,solucion);
				if(!solucion){
					//BACKTRACKING
					reinas[i] = 0;
				}
			}else{
				//TODAS LAS REINAS ESTAN COLOCADAS
				solucion = true;
			}
		}
	}while(!solucion && (k<N));
}

void mostrarTablero(){
	int tablero[N][N];
	//ASIGNAMOS LOS VALORES DEL TABLERO A CERO
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			tablero[i][j] = 0;
		}
	}
	cout<<"\tMOSTRANDO ARREGLO"<<endl<<endl;
	for(int i=0; i<N; i++){
		cout<<reinas[i]<<"    |    ";
	}
	cout<<endl<<endl;
	
	//AHORA ASIGNAMOS EL VALOR DEL ARREGLO HACIA EL TABLERO
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			tablero[reinas[j]][j] = 1;
		}
	}
	
	cout<<"\tMOSTRANDO EL TABLERO"<<endl;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<tablero[i][j]<<"    |    ";
		}
		cout<<endl<<endl;
	}
	cout<<endl<<endl<<endl;
}

bool valido(int i){
	//COMPROBAR SI LA REINA DE LA COLUMNA I NO SE AMENAZA CON OTRA REINA
	bool retorno = true;
	for(int r=0; r<i; r++){
		retorno = retorno && (reinas[i] != reinas[r]);			//COMPROBAR SI LA FILA ESTA VACIA
		retorno = retorno && ((reinas[i]-i) != (reinas[r]-r));	//COMPROBAMOS DIAGONAL 1
		retorno = retorno && ((reinas[i]+i) != (reinas[r]+r));	//COMPROBAMOS DIAGONAL 2
	}
	return retorno;
}
