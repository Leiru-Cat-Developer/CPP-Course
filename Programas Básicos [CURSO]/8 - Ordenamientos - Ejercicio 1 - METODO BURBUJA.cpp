/*
	ORDENAMIENTO POR MÉTODO BURBUJA [WTF, GUARDA UN '0' EN LA POCISIÓN 0]
	
	ESTE EJERCICIO POR ALGUNA RAZON TIENE UNA FALLA
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
	//ALGORITMO PARA EL MÉTODO BURBUJA [31 - 41]
	int auxiliar = 0;
	for(int i=0; i<limite; i++){
		for(int j=0; j<limite; j++){
			if(arregloDeNumeros[j] > arregloDeNumeros[j+1]){
				//CONDICIONAL (SI NÚMERO ACTUAL ES MAYOR AL NÚMERO SIGUIENTE)
				auxiliar = arregloDeNumeros[j];				//0 = 3	-> EMPIEZA 3,2
				arregloDeNumeros[j] = arregloDeNumeros[j+1];		//3 = 2
				arregloDeNumeros[j+1] = auxiliar;				//2 = 3	-> QUEDARÍA 2,3
			}
		}
	}
	//MOSTRAMOS LOS NÚMEROS ORDENADOS [43 - 51]
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
