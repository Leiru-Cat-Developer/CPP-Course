/*
	ORDENACIÓN RÁPIDA [QUICKSHORT]
	
		SE BASA EN LA DIVISIÓN DE LA LISTA EN PARTICIONES A ORDENAR, EN DEFINITIVA APLICA LA TÉCNICA
		"DIVIDE Y VENCERÁS". EL MÉTODO ES, POSIBLEMENTE, EL MÁS PEQUEÑO DE CÓDIGO, MÁS RÁPIDO DE MEDIA,
		MÁS ELEGANTE Y MÁS INTERESANTE Y EFICIENTE DE LOS ALGORITMOS DE ORDENACIÓN.
		
		EL ALGORITMO DIVIDE LOS N ELEMENTOS DE LA LISTA A ORDENAR EN DOS PARTES O PARTICIONES SEPARADAS
		POR UN ELEMENTO: UNA PARTICIÓN IZQUIERDA, UN ELEMENTO CENTRAL DENOMINADO PIVOTE, Y UNA PARTICIÓN
		DERECHA.
		
		LA PARTICIÓN SE HACE DE TAL FORMA QUE TODOS LOS ELEMENTOS DE LA PRIMERA SUBLISTA (PARTICION
		IZQUIERDA) SON MENORES QUE TODOS LOS ELEMENTOS DE LA SEGUNDA SUBLISTA (PARTICION DERECHA).
		LAS DOS SUBLISTAS SE ORDENAN ENTONCES INDEPENDIENTEMENTE.
		
		PASOS A SEGUIR:
		
		1. SELECCIONAR EL ELEMENTO CENTRAL DE A[] COMO PIVOTE
		
		2. DIVIDIR LOS ELEMENTOS RESTANTES EN PARTICIONES "IZQUIERDA Y DERECHA", DE MODO QUE NINGÚN
		ELEMENTO DE LA IZQUIERDA TENGA UNA CLAVE MAYOR QUE EL PIVOTE Y QUE NINGÚN ELEMENTO DE LA
		DERECHA TENGA UNA CLAVE MÁS PEQUEÑA QUE LA DEL PIVOTE
		
		3. ORDENAR LA PARTICIÓN IZQUIERDA UTILIZANDO "QUICKSORT" RECURSIVAMENTE
		
		4. ORDENAR LA PARTICIÓN DERECHA UTILIZANDO "QUICKSORT" RECURSIVAMENTE
		
		5. LA SOLUCIÓN ES PARTICIÓN IZQUIERDA SEGUIDA POR EL PIVOTE Y LA PARTICIÓN DERECHA
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//INTERCAMBIO DE NÚMEROS PARA EL ALGORITMO QUICKSORT [37 - 42]
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
		while(arreglo[i] < pivote) i++;	//FORMA DE HACER UN WHILE RÁPIDO
		while(arreglo[j] > pivote) j--;	//FORMA DE HACER UN WHILE RÁPIDO
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
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int arreglo[] = {4,6,1,9,5,10,2,11,19,7};	//ARREGLO DE 10 POCISIONES
	algoritmoOrdenamientoQuickSort(arreglo,0,10);
	//IMPRESIÓN DE DATOS [72 - 80]
	cout<<"ARREGLO ORDENADO ASCENDENTEMENTE"<<endl<<endl;
	for(int i=0; i<10; i++){
		cout<<"POCISIÓN ["<<i<<"]: "<<arreglo[i]<<endl;
	}
	cout<<endl;
	cout<<"ARREGLO ORDENADO DESCENDENTEMENTE"<<endl<<endl;
	for(int i=9; i>=0; i--){
		cout<<"POCISIÓN ["<<i<<"]: "<<arreglo[i]<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
