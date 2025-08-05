/*
	ESCRIBE UN PROGRAMA QUE LEA DE LA ENTRADA ESTÁNDAR UN VECTOR DE NÚMEROS
	Y MUESTRE EN LA SALIDA ESTÁNDAR LOS NÚMEROS DEL VECTOR CON SUS ÍNDICES
	ASOCIADOS
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int longitud = 0;
	while(longitud<=0){
		cout<<"DIGITE LA LONGITUD DEL ARREGLO: ";	cin>>longitud;
		if(longitud<=0){
			cout<<endl;
			cout<<"DIGITE VALORES VALIDOS . . ."<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	int arreglo[longitud];
	for(int i=0; i<longitud; i++){
		cout<<"DIGITE EL NÚMERO "<<i+1<<": ";	cin>>arreglo[i];
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	for(int i=0; i<longitud; i++){
		cout<<"POCISIÓN ["<<i<<"]: "<<arreglo[i]<<endl<<endl;
	}
	system("pause");
	return 0;
}
