/*
	DESARROLLE UN PROGRAMA QUE LEA DE LA ENTRADA ESTÁNDAR UN VECTOR DE ENTEROS
	Y DETERMINE EL MAYOR ELEMENTO DEL VECTOR
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
	int arreglo[longitud], mayor = 0;
	for(int i=0; i<longitud; i++){
		cout<<"DIGITE UN NÚMERO PARA LA POCISIÓN ["<<i<<"]: ";	cin>>arreglo[i];
		if(arreglo[i]>mayor){
			mayor = arreglo[i];
		}
	}
	cout<<"--------------------------------"<<endl<<endl;
	cout<<"EL NÚMERO MAYOR DE LOS ELEMENTOS ES: "<<mayor<<endl<<endl;
	system("pause");
	return 0;
}
