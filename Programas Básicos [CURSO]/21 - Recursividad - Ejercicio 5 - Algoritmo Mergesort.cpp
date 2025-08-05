//ALGORITMO MERGE SORT (ALGORITMO DE ORDENACION POR MEZCLAS)
#include<iostream>
using namespace std;

//PLANTILLAS DE FUNCIONES
void mergesort(int[],int,int);
void mezcla(int[],int,int,int);

int main(){
	int arreglo[] = {2,85,87,3,5,10,65,34,23,56,6};
	
	mergesort(arreglo,0,10);
	
	for(int i=0; i<10; i++){
		cout<<arreglo[i]<<"   ";
	}
	
	cout<<endl;
	
	return 0;
}

//DEFINICION DE FUNCIONES
void mergesort(int arreglo[], int primero, int ultimo){
	int central;
	if(primero < ultimo){
		//CASO BASE
		central = (primero+ultimo)/2;
		mergesort(arreglo,primero,central);		//ORDENAR PRIMERA MITAD DE LA LISTA
		mergesort(arreglo,central+1,ultimo);	//ORDENAR SEGUNDA MITAD DE LA LISTA
		mezcla(arreglo,primero,central,ultimo);	//FUSIONA LAS DOS SUBLISTAS ORDENADAS, DELIMITADAS POR LOS EXTREMOS	
	}
}

void mezcla(int arreglo[], int izquierda, int medio, int derecha){
	int* aux;
	int i,k,z;	//ITERADORES PARA IZQUIERDA, DERECHA, AUXILIAR
	aux = new int(derecha-izquierda + 1);
	i = z = izquierda;
	k = medio + 1;
	while(i<=medio && k<=derecha){
		//BUCLE PARA LA MEZCLA, UTILIZA AUX[] COMO ARREGLO AUXILIAR
		if(arreglo[i] <= arreglo[k]){
			aux[z++] = arreglo[i++];
		}else{
			aux[z++] = arreglo[k++];
		}
	}
	
	while(i<=medio){
		aux[z++] = arreglo[i++];
	}
	
	while(k<=derecha){
		aux[z++] = arreglo[k++];
	}
	
	for(int i=izquierda; i<=derecha; i++){
		arreglo[i] = aux[i];
	}
	
	delete aux;
}
