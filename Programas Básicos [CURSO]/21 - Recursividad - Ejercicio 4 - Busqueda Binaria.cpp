//BUSQUEDA BINARIA RECURSIVA
#include<iostream>
using namespace std;

//PLANTILLAS DE FUNCIONES
int busquedaBinaria(int[],int,int,int);

int main(){
	int arreglo[] = {3,4,5,6,7,10};
	int dato = 3;
	int retorno = busquedaBinaria(arreglo,dato,0,5);
	if(retorno == -1){
		cout<<"EL DATO NO HA SIDO ENCONTRADO";
	}else{
		cout<<"EL DATO HA SIDO ENCONTRADO EN LA POCISION: "<<retorno;
	}
	return 0;
}

//DEFINICION DE FUNCIONES
int busquedaBinaria(int arreglo[], int dato, int inferior, int superior){
	int mitad = 0;
	if(inferior > superior){
		//NO ENCONTRADO
		return -1;
	}else{
		mitad = (inferior+superior)/2;
		if(dato == arreglo[mitad]){
			//CASO BASE
			return mitad;
		}else if(dato > arreglo[mitad]){
			//CASO DERECHO
			return busquedaBinaria(arreglo,dato,mitad+1,superior);
		}else{
			//CASO IZQUIERDO
			return busquedaBinaria(arreglo,dato,inferior,mitad-1);
		}
	}
}
