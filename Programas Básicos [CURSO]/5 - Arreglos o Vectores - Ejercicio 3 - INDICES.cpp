/*
	ESCRIBE UN PROGRAMA QUE LEA DE LA ENTRADA EST�NDAR UN VECTOR DE N�MEROS
	Y MUESTRE EN LA SALIDA EST�NDAR LOS N�MEROS DEL VECTOR CON SUS �NDICES
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
		cout<<"DIGITE EL N�MERO "<<i+1<<": ";	cin>>arreglo[i];
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	for(int i=0; i<longitud; i++){
		cout<<"POCISI�N ["<<i<<"]: "<<arreglo[i]<<endl<<endl;
	}
	system("pause");
	return 0;
}
