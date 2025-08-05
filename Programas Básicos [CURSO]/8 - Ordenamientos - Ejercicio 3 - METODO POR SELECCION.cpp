/*
	ORDENAMIENTO POR MÉTODO DE SELECCIÓN [WFT, LOS ORDENA DE MANERA ERRONEA]
	
	ESTE METODO POR ALGUNA RAZON FALLA
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int limite = 0;
	//CICLO QUE SE REPITE SI ES QUE SE DIGITAN VALORES MENORES A CERO O CEROS [14 - 22]
	while(limite<=0){
		cout<<"¿CUÁL DESEA QUE SEA EL LÍMITE DEL ARREGLO?: ";	cin>>limite;
		if(limite<=0){
			cout<<endl;
			cout<<"DIGITE NÚMEROS VALIDOS POR FAVOR . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	cout<<endl;
	//CICLO PARA PEDIR LOS VALORES DE LAS POCISIONES DEL ARREGLO [25 - 28]
	int arregloDeNumeros[limite];
	for(int i=0; i<limite; i++){
		cout<<"DIGITE EL VALOR DE LA POCISIÓN ["<<i<<"]: ";	cin>>arregloDeNumeros[i];
	}
	cout<<endl;
	//CICLO PARA EL MÉTODO POR SELECCIÓN [31 - 42]
	int minimo = 0, auxiliar = 0;
	for(int i=0; i<limite; i++){
		minimo = 1;
		for(int j=i+1; j<limite; j++){
			if(arregloDeNumeros[j] < arregloDeNumeros[minimo]){
				minimo = j;
			}
		}
		auxiliar = arregloDeNumeros[i];
		arregloDeNumeros[i] = arregloDeNumeros[minimo];
		arregloDeNumeros[minimo] = auxiliar;
	}
	//MOSTRAMOS LOS NÚMEROS ORDENADOS [44 - 52]
	cout<<"------------- NÚMEROS ORDENADOS ASCENDENTE -------------"<<endl<<endl;
	for(int i=0; i<limite; i++){
		cout<<"POCISIÓN ["<<i<<"]: "<<arregloDeNumeros[i]<<endl;
	}
	cout<<endl;
	cout<<"------------- NÚMEROS ORDENADOS DESCENDENTE -------------"<<endl<<endl;
	for(int i=limite-1; i>=0; i--){
		cout<<"POCISIÓN ["<<i<<"]: "<<arregloDeNumeros[i]<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
