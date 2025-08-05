/*
	HACER UN PROGRAMA QUE LEA 5 NÚMEROS EN UN ARRGELO, LOS COPIE A OTRO ARREGLO
	MULTIPLICADOS POR 2 Y MUESTRE EL SEGUNDO ARREGLO
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int vector1[5];
	int vector2[5];
	for(int i=0; i<5; i++){
		cout<<"DIGITE EL NÚMERO ["<<i+1<<"]: ";	cin>>vector1[i];
		//RELLENANDO EL VECTOR 2 CON LOS NÚMEROS MULTIPLICADOS
		vector2[i] = vector1[i] * 2;
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	for(int i=0; i<5; i++){
		cout<<"POCISIÓN ["<<i+1<<"]: "<<vector2[i]<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
