/*
	REALICE UN PROGRAMA QUE CALCULE EL PRODUCTO DE DOS MATRICES CUADRADAS
	DE 3 X 3
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int matrizUno[3][3];
	int matrizDos[3][3];
	cout<<"-------DIGITE MATRIZ UNO-------"<<endl<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"POCISIÓN ["<<i<<"] ["<<j<<"]: ";	cin>>matrizUno[i][j];
		}
	}
	cout<<endl;
	cout<<"-------DIGITE MATRIZ DOS-------"<<endl<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"POCISIÓN ["<<i<<"] ["<<j<<"]: ";	cin>>matrizDos[i][j];
		}
	}
	cout<<endl;
	cout<<"--------MULTIPLICACIÓN--------"<<endl<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"POCISIÓN ["<<i<<"] ["<<j<<"]: "<<matrizUno[i][j] * matrizDos[i][j]<<endl;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}
