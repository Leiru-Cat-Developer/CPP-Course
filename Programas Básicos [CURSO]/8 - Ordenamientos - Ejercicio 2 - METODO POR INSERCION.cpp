/*
	ORDENAMIENTO POR MÉTODO DE INSERCIÓN
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
	//CICLO PARA EL MÉTODO DE INSERCIÓN [31 - 40]
	int auxiliar = 0, pocision = 0;
	for(int i=0; i<limite; i++){
		pocision = i;					//GUARDAMOS LA POCISIÓN
		auxiliar = arregloDeNumeros[i];	//INICIALIZAMOS NUESTRO AUXILIAR
		while((pocision>0)&&(arregloDeNumeros[pocision-1]>auxiliar)){
			arregloDeNumeros[pocision] = arregloDeNumeros[pocision-1];	//CAMBIO DE NÚMEROS
			pocision--;										//RESTAMOS POCISIÓN
		}
		arregloDeNumeros[pocision] = auxiliar;
	}
	//MOSTRAMOS LOS NÚMEROS ORDENADOS [42 - 50]
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
