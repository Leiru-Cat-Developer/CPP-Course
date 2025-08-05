/*
	ORDENACI�N R�PIDA [QUICKSHORT]
	
		SE BASA EN LA DIVISI�N DE LA LISTA EN PARTICIONES A ORDENAR, EN DEFINITIVA APLICA LA T�CNICA
		"DIVIDE Y VENCER�S". EL M�TODO ES, POSIBLEMENTE, EL M�S PEQUE�O DE C�DIGO, M�S R�PIDO DE MEDIA,
		M�S ELEGANTE Y M�S INTERESANTE Y EFICIENTE DE LOS ALGORITMOS DE ORDENACI�N.
		
		EL ALGORITMO DIVIDE LOS N ELEMENTOS DE LA LISTA A ORDENAR EN DOS PARTES O PARTICIONES SEPARADAS
		POR UN ELEMENTO: UNA PARTICI�N IZQUIERDA, UN ELEMENTO CENTRAL DENOMINADO PIVOTE, Y UNA PARTICI�N
		DERECHA.
		
		LA PARTICI�N SE HACE DE TAL FORMA QUE TODOS LOS ELEMENTOS DE LA PRIMERA SUBLISTA (PARTICION
		IZQUIERDA) SON MENORES QUE TODOS LOS ELEMENTOS DE LA SEGUNDA SUBLISTA (PARTICION DERECHA).
		LAS DOS SUBLISTAS SE ORDENAN ENTONCES INDEPENDIENTEMENTE.
		
		PASOS A SEGUIR:
		
		1. SELECCIONAR EL ELEMENTO CENTRAL DE A[] COMO PIVOTE
		
		2. DIVIDIR LOS ELEMENTOS RESTANTES EN PARTICIONES "IZQUIERDA Y DERECHA", DE MODO QUE NING�N
		ELEMENTO DE LA IZQUIERDA TENGA UNA CLAVE MAYOR QUE EL PIVOTE Y QUE NING�N ELEMENTO DE LA
		DERECHA TENGA UNA CLAVE M�S PEQUE�A QUE LA DEL PIVOTE
		
		3. ORDENAR LA PARTICI�N IZQUIERDA UTILIZANDO "QUICKSORT" RECURSIVAMENTE
		
		4. ORDENAR LA PARTICI�N DERECHA UTILIZANDO "QUICKSORT" RECURSIVAMENTE
		
		5. LA SOLUCI�N ES PARTICI�N IZQUIERDA SEGUIDA POR EL PIVOTE Y LA PARTICI�N DERECHA
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//INTERCAMBIO DE N�MEROS PARA EL ALGORITMO QUICKSORT [37 - 42]
void intercambioDeNumerosAlgoritmoQuickSort(int &x, int &y){
	int auxiliar = 0;
	auxiliar = x;
	x = y;
	y = auxiliar;
}
//ALGORITMO QUICKSORT [44 - 66]
void algoritmoOrdenamientoQuickSort(int arreglo[], int pocisionInicial, int pocisionFinal){
	int i = 0, j = 0, pocisionCentral = 0;
	int pivote = 0;	//EL PIVOTE TIENE QUE SER DEL MISMO TIPO QUE EL ARREGLO
	pocisionCentral = (pocisionInicial+pocisionFinal)/2;
	pivote = arreglo[pocisionCentral];
	i = pocisionInicial;
	j = pocisionFinal;
	do{
		while(arreglo[i] < pivote) i++;	//FORMA DE HACER UN WHILE R�PIDO
		while(arreglo[j] > pivote) j--;	//FORMA DE HACER UN WHILE R�PIDO
		if(i<=j){
			intercambioDeNumerosAlgoritmoQuickSort(arreglo[i],arreglo[j]);
			i++;
			j--;
		}
	}while(i<=j);
	if(pocisionInicial < j){
		algoritmoOrdenamientoQuickSort(arreglo,pocisionInicial,j);	//ORDENAR SUBLISTA IZQUIERDA
	}
	if(i < pocisionFinal){
		algoritmoOrdenamientoQuickSort(arreglo,i,pocisionFinal);	//ORDENAR SUBLISTA DERECHA
	}
}
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int arreglo[] = {4,6,1,9,5,10,2,11,19,7};	//ARREGLO DE 10 POCISIONES
	algoritmoOrdenamientoQuickSort(arreglo,0,10);
	//IMPRESI�N DE DATOS [72 - 80]
	cout<<"ARREGLO ORDENADO ASCENDENTEMENTE"<<endl<<endl;
	for(int i=0; i<10; i++){
		cout<<"POCISI�N ["<<i<<"]: "<<arreglo[i]<<endl;
	}
	cout<<endl;
	cout<<"ARREGLO ORDENADO DESCENDENTEMENTE"<<endl<<endl;
	for(int i=9; i>=0; i--){
		cout<<"POCISI�N ["<<i<<"]: "<<arreglo[i]<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
