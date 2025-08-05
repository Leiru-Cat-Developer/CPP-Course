/*
	ORDENAMIENTO POR M�TODO DE INSERCI�N
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int limite = 0;
	//CICLO QUE SE REPITE SI ES QUE SE DIGITAN VALORES MENORES A CERO O CEROS [14 - 22]
	while(limite<=0){
		cout<<"�CU�L DESEA QUE SEA EL L�MITE DEL ARREGLO?: ";	cin>>limite;
		if(limite<=0){
			cout<<endl;
			cout<<"DIGITE N�MEROS VALIDOS POR FAVOR . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	cout<<endl;
	//CICLO PARA PEDIR LOS VALORES DE LAS POCISIONES DEL ARREGLO [25 - 28]
	int arregloDeNumeros[limite];
	for(int i=0; i<limite; i++){
		cout<<"DIGITE EL VALOR DE LA POCISI�N ["<<i<<"]: ";	cin>>arregloDeNumeros[i];
	}
	cout<<endl;
	//CICLO PARA EL M�TODO DE INSERCI�N [31 - 40]
	int auxiliar = 0, pocision = 0;
	for(int i=0; i<limite; i++){
		pocision = i;					//GUARDAMOS LA POCISI�N
		auxiliar = arregloDeNumeros[i];	//INICIALIZAMOS NUESTRO AUXILIAR
		while((pocision>0)&&(arregloDeNumeros[pocision-1]>auxiliar)){
			arregloDeNumeros[pocision] = arregloDeNumeros[pocision-1];	//CAMBIO DE N�MEROS
			pocision--;										//RESTAMOS POCISI�N
		}
		arregloDeNumeros[pocision] = auxiliar;
	}
	//MOSTRAMOS LOS N�MEROS ORDENADOS [42 - 50]
	cout<<"------------- N�MEROS ORDENADOS ASCENDENTE -------------"<<endl<<endl;
	for(int i=0; i<limite; i++){
		cout<<"POCISI�N ["<<i<<"]: "<<arregloDeNumeros[i]<<endl;
	}
	cout<<endl;
	cout<<"------------- N�MEROS ORDENADOS DESCENDENTE -------------"<<endl<<endl;
	for(int i=limite-1; i>=0; i--){
		cout<<"POCISI�N ["<<i<<"]: "<<arregloDeNumeros[i]<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
